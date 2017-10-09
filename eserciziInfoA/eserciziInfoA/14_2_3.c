//
//  14_2_3.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 09/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma che riempia una matrice 20x30 chiedendo all’utente di inserire gli elementi, ma inserendo nella matrice solo gli elementi pari.
 Il programma termina quando la matrice è piena.
 */
#include <stdio.h>
#define N 2
#define M 3
int main(){
    int mat[N][M],i=0,j;
    /*while(i<N){
        j=0;
        while(j<M){
            printf("Inserire num in pos %d,%d",i,j);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0){
                j++;
            }
        }
        i++;
    }*/
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            do{
                printf("Inserire num in pos %d,%d",i,j);
                scanf("%d",&mat[i][j]);
            }while(mat[i][j]%2!=0);
        }
    }
    
    
}
