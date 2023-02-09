#include <stdio.h>

int main()
{
    //Variablen Deklaration und Initialisierung
    int values[5] = {1, 2, 4, 1, 3};
    int summe = 0;
    float average = 0;
    
    //Ausgabe von Informationen auf Konsole
    printf("\nDurchschnitt von Zahlen aus einem Array");
    printf("Zahlen: ");
    
    //For-Schleife zur Summenberechnung
    for(int i = 0; i<5; i++){                       //Solange i kleiner 5 ist durchlaufen 
        printf("%i ", values[i]);                   //Ausgabe des Arrays values auf Konsole 
        summe = summe + values[i];                  //Berechnung der Summe
    }
    printf("\nSumme der Zahlen: %i", summe);        //Ausgabe der Summe auf Konsole
   
   //Berechnung des Durchschnitts
    average = summe / 5.0;                          //Berechnung des Durchschnitts
    printf("\nDurchschnitt: %f", average);          //Ausgabe des Durchschnitts auf Konsole
    
    return 0;
}