//
//  14_2_4.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 09/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma C che legge una sequenza di numeri interi e li mette nella prima riga della matrice M. La lettura della sequenza termina quando alla prima riga della matrice M sono stati assegnati 50 interi oppure quando viene letto il secondo numero intero negativo.
 
 */
#include <stdio.h>
#define N 3
#define M 100
#define MAXINPUT 50
int main(){
    int mat[N][M],j=0,neg=0;
    
    do{
        scanf("%d",&mat[0][j]);
        if(mat[0][j]<0)
            neg++;
        j++;
    }while(neg<2 && j<MAXINPUT);
    
}
