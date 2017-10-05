//
//  12_1_4.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma C che:
 Legge una sequenza di numeri interi e i numeri compresi tra 0 e 1023 vengono memorizzati in un vettore di nome V. La lettura termina quando nel vettore sono stati inseriti 10 numeri
 Per ogni numero in V il programma esegue la conversione in binario, memorizza i resti ottenuti in un vettore R opportunamente dimensionato e stampa il contenuto di R
*/

#include <stdio.h>
#define N 10
#define MAXVAL 1023
int main(){
    int vett[N],R[N],i=0,j;
    do{
        printf("");scanf("%d",&vett[i]);
        if(vett[i]>=0 && vett[i]<=MAXVAL)
            i++;
    }while(i<N);
    for(i=0;i<N;i++){
        printf("Codifica binaria di %d: ",vett[i]);
        for(j=N-1;j>=0;j--){
            R[j]=vett[i]%2;
            vett[i]=vett[i]/2;
        }
        for(j=0;j<N;j++){
            printf("%d",R[j]);
        }
    }
    
    
}
