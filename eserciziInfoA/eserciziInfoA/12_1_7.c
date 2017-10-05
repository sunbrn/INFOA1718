//
//  12_1_7.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 05/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*Scrivere un programma che acquisisce una sequenza di caratteri terminata dal carattere 'invio' e stabilisce se la sequenza è palindroma oppure no (per esempio, "ada" è palindroma perché si legge allo stesso modo sia da destra sia da sinistra)*/
#include <stdio.h>
#include <string.h>
#define MAX_DIM 100
int main(){
    int i=0, pal=1, lung;
    char s[MAX_DIM];
    lung = strlen(s);
    while(i<lung/2 && pal==1){
        if(s[i]!=s[lung-1-i])
            pal=0;
        i++;
    }
    /*for(i=0;i<lung/2 && pal==1;i++){...}
    if(pal==1)
        printf("Palindromo");
    else
        printf("Non palindromo");*/
}
