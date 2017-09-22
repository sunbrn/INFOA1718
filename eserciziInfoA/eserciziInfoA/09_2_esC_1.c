//
//  09_2_esC_1.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 22/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//
/*
 Scrivere un programma in linguaggio C che, letti tre numeri interi a, b, c dallo standard input, stampi a terminale la sequenza dei tre numeri in ordine monotono non decrescente.
 Esempio: a = 10, b = 7, c = 9 deve dare in uscita 7 9 10.
 */

#include <stdio.h>

int main( ) {
    int a,b,c;
    printf("\n Inserisci il numero a: ");
    scanf("%d",&a);
    printf("\n Inserisci il numero b: ");
    scanf("%d",&b);
    printf("\n Inserisci il numero c: ");
    scanf("%d",&c);
    if (a < b) {
        if (b < c) { printf("\n L’ordine voluto e’: %d, %d, %d",a,b,c);  }
        else {
            if (a < c) { printf("\n L’ordine voluto e’: %d, %d, %d",a,c,b); }
            else { printf("\n L’ordine voluto e’: %d, %d, %d",c,a,b); }
        }
    }
    else {
        if (c < b) { printf("\n L’ordine voluto e’: %d, %d, %d",c,b,a); }
        else {
            if (a < c) { printf("\n L’ordine voluto e’: %d, %d, %d",b,a,c); }
            else { printf("\n L’ordine voluto e’: %d, %d, %d",b,c,a); }
        }
    }
    return 0;
}

    
