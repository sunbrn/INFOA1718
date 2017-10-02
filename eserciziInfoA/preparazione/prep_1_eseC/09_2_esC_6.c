//
//  09_2_esC_6.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Si scriva un programma che legge una sequenza di interi positivi (la sequenza termina quando viene inserito il valore -1), conta il numero complessivo dei numeri che sono multipli di 3, di 5 oppure di 7 compresi nella sequenza e stampa questo valore. Per esempio, nel caso la sequenza in ingresso fosse "4 8 12 15 14 8", il programma dovrebbe stampare il valore 3.
 */

# include <stdio.h>
int main() {
    int val, contatore=0;
    printf("Inserisci una serie di interi (-1 per terminare):\n");
           do {
               scanf("%d",&val);
               if (val>-1 && (val%3==0 || val%5==0 || val%7==0))
                   contatore++;
           } while(val!=-1);
           printf("Il numero di multipli di 3 o 5 o 7 è %d",contatore);
           return 0;
           }
           
           
