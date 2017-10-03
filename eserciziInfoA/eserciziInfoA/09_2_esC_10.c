//
//  09_2_esC_10.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 02/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma C, completo delle opportune dichiarazioni di variabili, in grado di acquisire in ingresso dall'utente un valore intero positivo num. Il programma deve stampare a video tutti i fattori primi di num.
*/

#include <stdio.h>
int main(){
    int num,fatt,cont;
    do{
        printf("inserisci "); scanf("%d",&num);
    }while(num<=0);
    for(fatt=num;fatt>1;fatt--){ //è giusto num-1?
        
        if(num%fatt==0){
            cont=fatt-1;
            while(cont>1 && fatt%cont!=0){
                cont--;
            }
            if(cont==1){
                printf("%d \n",fatt);
            }
        }
        
    }
}
