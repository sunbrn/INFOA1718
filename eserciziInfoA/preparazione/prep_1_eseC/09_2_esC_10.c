//
//  09_2_esC_10.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Scrivere un programma C, completo delle opportune dichiarazioni di variabili,
 in grado di acquisire in ingresso dall'utente un valore intero positivo num.
 Il programma deve stampare a video tutti i fattori primi di num.*/

#include <stdio.h>

int main(){
    int num, fatt,primo;
    
    printf("Inserire numero intero positivo: ");
    scanf("%d",&num);
    for(fatt=num;fatt>1;fatt--){ //trovo i divisori di num e li chiamo fatt
        if(num%fatt==0){
            primo = fatt - 1;
            while(primo>1 && fatt%primo!=0){
                primo--;
            }
            if(primo==1)
                printf("\nFattore primo di %d è: %d\n",num,fatt);
        }
    }
    
    
    
}
