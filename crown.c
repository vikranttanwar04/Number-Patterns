#include <stdio.h>

void main(){
    int i,j,k,l,m;

    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){
            printf("%d", j);
        }

        for(k=5;k>=i;k--){
            printf(" ");
        }

        for(l=5;l>=i;l--){
            printf(" ");
        }

        for(m=i;m>=1;m--){
            printf("%d", m);
        }

        printf("\n");
    }
}