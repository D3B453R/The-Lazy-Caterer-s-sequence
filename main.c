//=============================================================
//Autor: Maximilian Müller
//Datum: 29.04.2020
//Funktion: Ausgabe Lazy Caterer's sequence
//=============================================================

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int iZahl1=1, iZahl2=0, i=0;

    iZahl1=1;
    iZahl2=0;
    //do while
    do
    {
        iZahl1=iZahl1+iZahl2;
        iZahl2 ++;
        i++;
        printf("%d, ", iZahl1);
        Sleep(1000);
    }while(i<9);

    //for
    iZahl1=1;
    iZahl2=0;
    printf("\n\n");

for(i=0; i<9; i++) {
	iZahl1=iZahl1+iZahl2;
        iZahl2 ++;
        printf("%d, ", iZahl1);
}
printf("\n\n");
    return 0;
}
