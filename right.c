#include <stdio.h>

void main(){

    int i;
    int j;
    int k;

    for(i=1; i<=5; i++){

        for(k=1; k<=i; k++){
            printf("%d", k);
        }
        
        printf("\n");
    }
}