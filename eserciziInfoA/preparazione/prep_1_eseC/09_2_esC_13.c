//
//  09_2_esC_13.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>

int main(){
    int Q,n=0,d=1,i;
    
    printf("Inserisci numero da convertire ");
    scanf("%d",&Q);
    
    while(Q>=d){
        d=d*2;
        n++;
    }
    //ora d contiene la potenza di 2 piu grande di Q e n l'esponente che indica il numero di bit necessari
    printf("\nsono necessari %d bit\n",n);
    
    i=n-1;
    while(i>=0){
        d=d/2;
        if(Q>=d){
            printf("1");
            Q=Q-d;
        }
        else
            printf("0");
        i--;
    }
    
    printf("\n");
    return 0;
    
}
