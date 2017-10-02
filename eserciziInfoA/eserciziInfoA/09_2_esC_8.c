//
//  09_2_esC_8.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 28/09/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
void main(){
    char c;
    int count=0;
    do{
        printf("Inserire un char:");
        scanf("%c",&c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }while(c!='#');
    printf("ris %d",count);
    
}

