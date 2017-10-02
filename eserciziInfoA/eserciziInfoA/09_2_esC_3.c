//
//  09_2_esC_3.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 28/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Si scriva un programma in linguaggio C che letto un numero intero positivo dallo standard input, visualizzi a terminale il quadrato del numero stesso facendo uso soltanto di operazioni di somma.
Si osservi che il quadrato di ogni numero intero positivo N può essere costruito sommando tra loro i primi N numeri dispari.
Esempio: N = 5;  N2 = 1 + 3 + 5 + 7 + 9 = 25.*/

#include <stdio.h>
int main(){
    int N,i=1,S=0,Q=0;
    do{
        printf("Inserisci numero intero positivo: ");
        scanf("%d",&N);
    }while(N<=0);
    while(i<=N){
        S = S + (i+i-1);
        i++;
    }
    i=0;
    while(i<N){
        Q = Q + S;
        i++;
    }
    
    printf("\nIl cubo di %d e' %d\n\n",N,Q);
    return 0;
    

    
}





