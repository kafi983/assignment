#include<stdio.h>
int main(){
    int i,sum=0,a[10];
    printf(" Enter 10 values :");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    printf("\nTotal sum   %d ",sum);

    return 0;
}