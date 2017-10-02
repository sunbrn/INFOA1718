//
//  09_2_esC_11.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 25/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, div;
    do {
        printf("Scrivi il numero che vuoi scomporre (positivo)\n");
        scanf("%d", &num);
    } while (num<=0);
    printf("La sua scomposizione in fattori primi e':\n");
    for(div=num-1;div>0;div--){
        if (num%div==0){
            printf("  %d  ", num/div);
            num=div;
        }
    }
    return 0;
}

