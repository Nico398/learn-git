#include <stdio.h>

int main()
{
    //Variablen deklaration
    int value;
    int percentage;
    float solution;

    //Variablen initialisierung
    value = 90;
    percentage = 11;

    //Berechnung von solution
    solution = value * percentage / 100.0;

    //Ausgabe von percentage, value und solution auf Konsole
    printf("%i%% von %i sind %f", percentage, value, solution);

    return 0;
}