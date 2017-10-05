//
//  12_1_5.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
#define MAXDIM 20
#include <stdio.h>
int main(){
    int n,vett[MAXDIM],i;
    do{
        printf("inserire dimensione");
        scanf("%d",&n);
    }while(n<0 || n>MAXDIM);
    printf("Inserire vettore di interi ");
    for(i=0;i<n;i++){
        scanf("%d",&vett[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",vett[i]);
    }
    printf("\n");
    for(i=1;i<n;i++){
        if(vett[i-1]%2==0)
            printf("%d",vett[i]);
    }
}
