//
//  09_2_esC_3.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Si scriva un programma in linguaggio C che letto un numero intero positivo dallo standard input, visualizzi a terminale il quadrato del numero stesso facendo uso soltanto di operazioni di somma.
 Si osservi che il quadrato di ogni numero intero positivo N può essere costruito sommando tra loro i primi N numeri dispari.
 Esempio: N = 5;  N2 = 1 + 3 + 5 + 7 + 9 = 25.
*/
 
#include <stdio.h> /* inclusione della libreria standard     */
int main( ) {
    int i, N, S=0;
    do { /* Finché il numero inserito N non è positivo ripetere */
        printf("\n Inserisci un numero positivo N: ");
        scanf("%d",&N);
    } while (N <= 0 );
    i=0;
    while(i < N) {
        S = S + (i+i+1);
        i++;
    }
    printf("Il quadrato del numero inserito e': %d \n",S);
           return 0;
           }
           
           

