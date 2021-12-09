#include <stdio.h>

int main() {
    int i,n,j;

    for(i=0;;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        else{
            printf("1");
            for(j=2;j<=n;j++){

                printf(" %d",j);
            }
            printf("\n");

        }
    }

    return 0;
}
