#include<stdio.h>
int main(){
    int i, j,n,c=0;
    printf("Enter a value :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c=c+1;

            }

        }

        if(c==2)
        printf(" %d\t",i);
    }

    return 0;
}