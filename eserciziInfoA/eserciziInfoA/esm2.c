#include <stdio.h>
#include <math.h>
#define N 3

int main(){
    int i,j,m[N][N],diag,sum=0,dom=1;
    
    for(i=0;i<N;i++)
        for(j=0;j<N;j++){
            scanf("%d",&m[i][j]);
        }
    
    
    for(i=0;i<N && dom==1;i++){
        diag = 0;
        sum = 0;
        
        for(j=0;j<N;j++)
            if(i==j)
                diag = abs(m[i][j]);
            else
                sum += abs(m[i][j]);
        if(diag<=sum)
            dom = 0;
        
    }
    
    if(dom)
        printf("Dominante\n");
    else
        printf("Non dominante\n");
    
    return 35;
}
