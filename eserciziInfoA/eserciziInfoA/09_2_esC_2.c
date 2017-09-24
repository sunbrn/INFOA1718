//
//  09_2_esC_2.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 24/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>

int main()  {
    int N, elemento, max, posmax, i=1;
    printf("Inserire numero di valori:\n"); scanf("%d", &N);
    if(N>0) {
        printf("Inserire il primo valore:"); scanf("%d", &elemento);
        max=elemento;
        posmax=i;
        while(i<N) {
            printf("Inserire un altro valore:"); scanf("%d", &elemento);
            i=i+1;
            if(elemento>max) { max=elemento; posmax=i; }
        }
        printf("Il massimo e': %d\n", max);
        printf("La posizione del massimo e': %d\n", posmax);
    }
    else
        printf("Il valore di N non e' accettabile\n");
    return 0;
}

