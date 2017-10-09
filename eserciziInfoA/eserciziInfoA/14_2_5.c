//
//  14_2_5.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 09/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma che chiede all’utente di inserire una matrice 20x30, poi (dopo aver terminato la fase di inserimento) copia gli elementi dispari in una seconda matrice 20x30 senza lasciare buchi, se non in fondo.
 Gli elementi in fondo (i "buchi") siano messi a zero.
 */
#include <stdio.h>
#define N 2
#define M 2
int main(){
    int A[N][M],B[N][M],i,j,k=0,l=0;
    
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("Inserire valore in pos %d,%d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //SOLUZIONE PIGRA PER RIEMPIRE TUTTO A ZERO
  /*  for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            B[i][j]=0;
        }
    }*/
    for(i=0;i<N;i++){ //i=1
        for(j=0;j<M;j++){ //j=0, valore 7
            if(A[i][j]%2!=0){
                
                B[k][l]=A[i][j]; //B[0][1]=7
                l++; //l=2
                if(l>=M){ //2>=2
                    l=0; //l=0
                    k++; //k=1
                }
                
            }
        }
    }
    
    
    
    
    
}
