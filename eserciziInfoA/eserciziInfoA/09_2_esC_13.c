//
//  09_2_esC_13.c
//  eserciziInfoA
//
//  Created by Anna Bernasconi on 02/10/2017.
//  Copyright © 2017 abernasconi. All rights reserved.
//

#include <stdio.h>
int main(){
    int Q,n=0,d=1,esp;
    do{
        printf("Ins"); scanf("%d ",&Q);
    } while(Q<=0);
    while(Q>=d){
        n++;  //5
        d=d*2; //2^5
    }
    esp = n-1; //4
    //d = d/2; //2^4
    while(esp>=0){
        d=d/2; //2^4, 2^3, 2^2, 2^1, 2^0
        if(Q>=d){ //
            printf("1");
            Q = Q-d; //29-16=13, 5, 1
        }
        else{
            printf("0");
        }
        
        esp--;
        
        
    }
    
    
}
