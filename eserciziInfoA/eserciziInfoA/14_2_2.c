//
//  14_2_2.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 09/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
#define N 4
#define M 3
int main(){
    int mat[N][M],i,j,trovato=0,count=0;
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
    //PRIMA OCCORRENZA
    for(i=0;i<N && trovato==0;i++){
        for(j=0;j<M && trovato==0;j++){
            if(mat[i][j]==0){
                trovato=1;
                printf("Trovato primo zero in pos %d,%d\n",i,j);
            }
        }
    }
    trovato=0;
    //ULTIMA OCCORRENZA
    for(i=N-1;i>=0 && trovato==0;i--){
        for(j=M-1;j>=0 && trovato==0;j--){
            if(mat[i][j]==0){
                trovato=1;
                printf("Trovato ultimo zero in pos %d,%d\n",i,j);
            }
        }
    }
    //CONTO GLI ZERI DELLA MATRICE
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
           if(mat[i][j]==0){
               count++;
           }
        }
    }
    count=count/2; //posizione mediana  count=2
    for(i=0;i<N && count>=0;i++){
        for(j=0;j<M && count>=0;j++){
            if(mat[i][j]==0){
                count--;
                if(count==-1){
                    printf("Trovato zero mediano %d,%d",i,j);
                }
            }
        }
    }
    
}
