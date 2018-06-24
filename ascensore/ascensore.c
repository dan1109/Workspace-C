/*
 * ascensore.c
 *
 *  Created on: 23 dic 2016
 *      Author: Daniele
 */
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

void main(void)
{
 int pI,
     v=0,
     row=25,
     pF;
     clrscr();
     //ciclo che disegna quadro ascensore
    for (v=0;v<10;v++)
    {
        gotoxy(8,16+v);  putch(57-v);
        gotoxy(6,16+v);  putch('º');
        gotoxy(14,16+v); putch('º');
    }
    for (v=0;v<9;v++)
    {
        gotoxy(6+v,15); putch('_');
    }
    gotoxy(12,25);  putch('°');

//---------------------------------------------------
do    //ciclo generale si esce per esc
{
    do   //inserimento del piano
    {
        gotoxy(20,12);  puts("Inserire il piano");
        gotoxy(20,13);  pI = getch();
    } while(!  ( (pI>47 && pI < 58) ||(pI==27)));   //condizione per far inserire solo numeri tra 0 e 9 o ESC

        //---------------------------------------------------

    if(pI != 27)
        {
                pF= 25 - (pI - 48);   //(pI - 48) converte il numero in codice ascii

                //---------------------------------------------------

                if (row!=pF)  //se il pI è uguale alla pF la cabina non si muove
                {
                        if (row>pF)    v=-1;          //decremento della riga se la cabina sale
                        else          v=1;                        // incremento della riga se la cabina scende

                        do   // movimento della cabina
                        {
                                gotoxy(12,row); putch(' ');
                                delay(150);
                                row+=v;
                                gotoxy(12,row);  putch('°');

                                if (v == -1)   //struttura del disegno
                {
                                        gotoxy (12,row+1); putch('º');
                }
                if (v == 1)
                {
                    gotoxy (12,row); putch('°');
                }
                if (row == pF)
                {
                    delay(1000);
                    gotoxy (11,row); printf("° °");
                                        delay(2000);
                                        gotoxy (11,row); printf(" ° ");
                }
                                //---------------------------------------------------
                        }while(row!=pF);
                }
        }
}
  while(pI != 27);

}

