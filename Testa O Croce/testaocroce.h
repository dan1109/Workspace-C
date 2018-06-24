/*
File delle intestazioni della libreria del gioco del testa o croce.
La libreria è stata sviluppata con lo scopo di "snellire" il file del
MAIN principale e di rendere accessibili tali sottoProgrammi a chi
vuole creare una versione personale di tale gioco.

Sviluppatore: Rocco Telesca.
Per qualunque info:
Mail : telescarocco@hotmail.it


testaOCroceLib.h
*/

//Costante globale per i lanci della partita

#define LANCI_MONETA 4

/*
Costanti enumerate per rendere compatto il codice e
rendere sicuro il calcolo dei punteggi
*/

typedef enum {vinceCPU, vinceGiocatore} esitoLancio;
typedef enum {vinceComputer, vinceOspite, pareggio} esitoPartita;


//schermi di gioco
void schermoBenVenuto(char* nome);
void menuDiScelta(int* pScelta);
void schermoPunti(char* nomeGiocatore, int puntiCpu, int puntiGiocatore);
void schermoEsitoLancio(char* nome, esitoLancio esito, int* pPuntiCpu, int* pPuntiGiocatore);
void stampaVincitore(char* nome , esitoPartita esitoFinale);
void stampaGiocataCPU(int giocataCPU);
void scherminoLanci(int lanciGioco, int lanciRimanenti);
void informazioni();

//altri sottoProgrammi
void convalidaStringa(char* s); //--> controlla la correttezza della stringhe inserite dall'utente
void giocataGiocatore(int* pGiocata);
void resettaPunti(int* pPuntiGiocatore, int* pPuntiCpu, int* pLanciRimanenti);

//sottoProgrammi necessari per generare il lancio del computer
int lanciaMoneta();
void setSeed();
//

//funzioni con ENUM
esitoLancio controllaEsitoLancio(int giocataUtente, int giocataCPU);
esitoPartita vincitorePartita(int puntiCpu, int puntiGiocatore);
