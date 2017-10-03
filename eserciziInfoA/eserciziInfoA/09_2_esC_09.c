//
//  09_2_esC_9.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 02/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>

int main(){
    char carattere;
    int count=0;
    do{
        printf("Inserire carattere sequenza ");
        scanf("%c",&carattere);
        if(carattere >= 'a' && carattere <= 'z')
            count++;
    }while (carattere!='#');
    
    printf("Numero car minuscoli: %d\n",count);
    return 0;
    
    
    
    
}
