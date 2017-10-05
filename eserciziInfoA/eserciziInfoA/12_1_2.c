//
//  12_1_2.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma in C che legge un vettore di interi di dimensione fissata, inverte il vettore e lo stampa.*/

#include <stdio.h>
#define N 5
int main(){
    int vett[N],i,temp;
    printf("Inserire vettore di interi ");
    for(i=0;i<N;i++){
        scanf("%d",&vett[i]);
    }
    for(i=0;i<N/2;i++){
        temp = vett[i];
        vett[i] = vett[N-1-i];
        vett[N-1-i] = temp;
    }
    printf("Stampa vettore invertito: \n");
    for(i=0;i<N;i++){
        printf("%d ",vett[i]);
    }
    
}
