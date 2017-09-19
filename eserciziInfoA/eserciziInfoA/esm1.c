#include <stdio.h>
#define N 3
#define M 4

int main(){
    int m[N][M],i,j,si=0,cont=0,cont2=0;
    
    printf("Inizia inserimento dati matrice:\n");
    for(i=0;i<N;i++)
        for(j=0;j<M;j++){
            printf("Inserisci elemento matrice di indici %d,%d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    
    printf("La matrice inserita e':\n");
    
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%10d",m[i][j]);
        }
        printf("\n");
    }
    
    /*Cerchiamo gli 0*/
    
    //prima
    for(i=0;i<N && si==0;i++){
        for(j=0;j<M && si==0;j++){
            if(m[i][j]==0){
                si=1;
                printf("Il primo zero e' stato trovato in posizione %d,%d\n",i,j);
            }
        }
    }
    
    //ultima
    si=0;
    for(i=N-1;i>=0 && si==0;i--){
        for(j=M-1;j>=0 && si==0;j--){
            if(m[i][j]==0){
                si=1;
                printf("L'ultimo zero e' stato trovato in posizione %d,%d\n",i,j);
            }
        }
    }
    
    //mediana
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(m[i][j]==0)
                cont++;
        }
    }
    
    if(cont%2==0)
        cont=cont/2;
    else
        cont=cont/2+1;
    
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            if(m[i][j]==0){
                cont2++;
                if(cont2==cont)
                    printf("Zero in posizione mediana %d,%d",i,j);
            }
    
}
