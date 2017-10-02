//
//  09_2_esC_15.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 26/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//



#include <stdio.h> /* inclusione della libreria standard     */
int main( ) {
    char  c;   int accumulator=0, count=0;  float mean;
    do {
        printf("\n Inserisci un carattere: ");
        scanf("%c",&c);
        fflush(stdin);
        
        if ((c >= '0')&&(c <= '9')) {
             accumulator = accumulator + ((int)c-'0');
            
            printf("\n1%d",(int)c-'0');
            printf("\n2%c",(int)c-'0');
            printf("\n3%d",c-'0');
            printf("\n4%c",c-'0');
            
            printf("\n\nc: %d",c);
            printf("\n(int)c: %d",(int)c);
            printf("\nc: %c",c);
            printf("\n(int)c: %c",(int)c);
            printf("\nAccumulatore: %d",accumulator);
             count++;
         }
     } while (c!='#');
     if (count > 0) {
         mean = ((float)accumulator) / ((float)count);
         printf("\n media = %5.2f ",mean);
     } else {
         printf("\n non ci sono caratteri numerici!");
     }
     return 0;
 }
             
             
