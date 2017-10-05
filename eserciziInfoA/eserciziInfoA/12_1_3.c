//
//  12_1_3.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma C che legge un vettore di lunghezza arbitraria e stampa 1 se il vettore contiene solo valori diversi, 0 altrimenti.*/

#include <stdio.h>
#define N 5
int main(){
    int vett[N],i,j,controllo=1;
    printf("Inserire vettore di interi ");
    for(i=0;i<N && controllo==1;i++){
        scanf("%d",&vett[i]);
        for(j=0;j<i && controllo==1;j++){
            if(vett[i]==vett[j])
                controllo = 0;
        }
    }
    printf("%d",controllo);
}
