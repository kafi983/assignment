#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf(" Enter a natural number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf(" Total sum = %d",sum);


    return 0;
}