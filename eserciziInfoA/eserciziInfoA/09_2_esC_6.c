//
//  09_2_esC_6.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 28/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
int main(){
    int n,cont=0;
    do{
        printf("Inserire un numero int positivo: ");
        scanf("%d",&n);
        if(n>-1 && (n%3==0 || n%5==0 || n%7==0)){
            cont++;
        }
    }while(n!=-1);
    printf("Risultato %d",cont);
    return 0;
    
}
