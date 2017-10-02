//
//  09_2_esC_7.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Scrivere un programma C, in grado di acquisire in ingresso dall'utente un valore intero num e una sequenza di interi che termina con uno 0 (zero). Il programma deve stampare a video il numero di valori pari nella sequenza che sono divisori di num.
 0 viene considerato come valore sentinella.*/

#include <stdio.h>

int main(){
    int num,elem=1,count=0;
    printf("Inserire numero intero: ");
    scanf("%d",&num);
    
    printf("Inserire valori sequenza (0 termina): \n");
    while(elem!=0){
        scanf("%d",&elem);
        if(elem!=0 && elem%2 == 0 && elem%num == 0)
            count++;
    }
    printf("I valori pari divisori di %d sono %d\n",num,count);
    return 0;
}
