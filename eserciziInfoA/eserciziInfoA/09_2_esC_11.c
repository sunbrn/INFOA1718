//
//  09_2_esC_11.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 02/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
int main(){
    int num,fatt;
    do{
        printf("inserisci "); scanf("%d",&num);
    }while(num<=0);
    for(fatt=num-1;fatt>0;fatt--){
        
        if(num%fatt==0){
            printf("%d ",num/fatt); 
            num=fatt;
        }
        
    }
}
