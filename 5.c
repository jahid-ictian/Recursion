//2=3*1-1
#include<stdio.h>
int N;
int getsum(int i)
{
    if(i>N)
    {
        printf("\n");
        return 0;
    }
    printf("%d",(3*i-1));
    return (3*i-1)+getsum(i+1);
}
int main()
{
    int i,sum;
    scanf("%d",&N);
    printf("Iteration: \n");
    sum=0;
    for(i=1;i<=N;i++)
    {
       printf("%d",(3*i)-1);
       sum+=(3*i-1);
    }
    printf("\n");
    printf("sum= %d\n",sum);
    printf("\nRecursion: \n");
    sum=getsum(1);
    printf("Sum = %d\n",sum);
    return 0;
}
