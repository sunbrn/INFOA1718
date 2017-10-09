//
//  14_2_1.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 09/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma che chiede all’utente di riempire una matrice, la stampa, cerca, se esiste, la prima occorrenza dello 0 e dice in che posizione è stata trovata
 */

#include <stdio.h>
#define N 4
#define M 3
int main(){
    int mat[N][M],i,j,trovato=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Inserire valore in pos %d,%d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%5d ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N && trovato==0;i++){
        for(j=0;j<M && trovato==0;j++){
            if(mat[i][j]==0){
                trovato=1;
                printf("Trovato zero in pos %d,%d\n",i,j);
            }
        }
    }
    if(trovato==0)
        printf("Zero non trovato\n");

}
