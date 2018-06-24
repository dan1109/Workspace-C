/*
 * calc_ez.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>
#include <stdlib.h>
int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Inserisci un operatore (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Inserisci 2 operandi : ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / firstNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf(" Error!Operatore non corretto! Riprova. ");
    }
    system("pause");
    return 0;
}

