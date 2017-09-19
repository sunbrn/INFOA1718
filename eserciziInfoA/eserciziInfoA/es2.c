#include <stdio.h>
#define LUNG 7

int main(){
    int vett[LUNG],i,temp;
    printf("Inserire vettore di interi di dimensione %d\n",LUNG);
    for(i=0;i<LUNG;i++)
        scanf("%d",&vett[i]);
    
    /*Inverti vettore*/
    for(i=0;i<LUNG/2;i++){
        temp=vett[i];
        vett[i]=vett[LUNG-1-i];
        vett[LUNG-1-i]=temp;
    }
    
    /*STampa*/
    for(i=0;i<LUNG;i++)
        printf("%d %d\n",i,vett[i]);
    
    return 0;
}



