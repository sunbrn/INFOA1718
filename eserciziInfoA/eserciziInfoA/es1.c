#include <stdio.h>
#define LUNG 5

int main(){
    int vett[LUNG],i,sum=0;
    printf("Inserire vettore di interi di dimensione %d\n",LUNG);
    for(i=0;i<LUNG;i++){
        scanf("%d",&vett[i]);
        sum=sum+vett[i];
    }
    
    printf("Somma: %d\n",sum);
    
}
