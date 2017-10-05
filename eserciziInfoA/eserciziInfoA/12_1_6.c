//
//  12_1_6.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma C che legge due stringhe da tastiera, le concatena in un’unica stringa e stampa la stringa così generata
 */
#include <stdio.h>
#include <string.h>
#define LUNG 200
int main(){
    char s1[LUNG],s2[LUNG],o[LUNG*2];
    int i;
    printf("Inserisci stringa 1: ");
    scanf("%s",s1);
    printf("Inserisci stringa 2: ");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        o[i]=s1[i];
    }
    for(i=0;s2[i]!='\0';i++){
        o[i+strlen(s1)]=s2[i];
    }
    o[i+strlen(s1)]='\0';
    printf("%s\n",o);
}
