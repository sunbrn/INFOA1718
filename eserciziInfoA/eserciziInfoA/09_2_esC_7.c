//
//  09_2esC_7.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 28/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
/*Scrivere un programma C, in grado di acquisire in ingresso dall'utente un valore intero num e una sequenza di interi che termina con uno 0 (zero). Il programma deve stampare a video il numero di valori pari nella sequenza che sono divisori di num.
0 viene considerato come valore sentinella.*/

int main(){
    int num, valore, count=0;
    printf("Inserire num: ");
    scanf("%d",&num);
    do{
        printf("Inserire valore: ");
        scanf("%d",&valore);
        if(valore!=0 && valore%2==0 && num%valore==0)
            count++;
    }while(valore!=0);
    
    printf("cont: %d",count);
    
    
}



