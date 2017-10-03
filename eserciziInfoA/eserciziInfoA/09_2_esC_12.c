//
//  09_2_esC_12.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 02/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
int main(){
    int Q,i=0,S=0;
    printf("Inserire numero: ");
    scanf("%d",&Q); //Q=12
    do{
        i++; //i=1,2,3,4,5
        S = S + i; //S=1,3,6,10,15
    }while(S<Q);
    if(S==Q){
        printf("Num %d triangolare, N=%d \n",Q,i);
    }else{
        printf("Num %d NON triangolare\n",Q);
    }
    
}
