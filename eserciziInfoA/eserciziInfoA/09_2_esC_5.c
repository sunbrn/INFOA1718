//
//  09_2_esC_5.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 28/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

/*Scrivere i primi 30 elementi di una serie così definita: i primi tre elementi valgono 1,i successivi (i>=4) valgono la somma degli elementi i-1 e i-3
1 1 1 2 3 4 6 9 13 19 28 41 60 …*/

#include <stdio.h>
int main(){
    int N = 30, elem3=1,elem2=1,elem1=1,elem,i=4;
    printf("\n\nSequenza: %d %d %d",1,1,1);
    while(i<=N){
        elem=elem3+elem1;
        printf(" %d",elem);
        elem3=elem2;
        elem2=elem1;
        elem1=elem;
        i++;
    }
    return 0;
    
}

