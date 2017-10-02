//
//  09_2_esC_10b.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>

int main(){
    int num;
    int i=2;
    int cont=0;
    printf("Inserisci un numero intero: ");
    scanf("%d",&num);
    printf("Scomposizione:\n");
    if(num==1)
        printf("1");
    
    /*while(num>1){
        while(num%i==0){
            printf("%d ",i);
            num = num/i;
        }
        i++;
    }*/
    
    while(num!=1){
        cont=0;
        while(num%i==0){
            cont++;
            num=num/i;
        }
        printf("%d^%d ",i,cont);
        i++;
    }
    
    
    printf("\n");
    return 0;
    
    
    
    
}
