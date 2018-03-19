//1+2+3+4.....up to n'th term
#include<stdio.h>
int N;
int getsum(int i)
{
    if(i>N)
    {
        printf("\n");
        return 0;
    }
    printf("%d",i);
    return i+getsum(i+1);
}
int main()
{

    int i,sum;
    scanf("%d",&N);
    printf("Iteration: \n");
    sum=0;
    for(i=1;i<=N;i++)
    {
       printf("%d",i);
       sum+=i;
    }
    printf("\n");
    printf("sum= %d\n",sum);
    printf("\nRecursion: \n");
    sum=getsum(1);
    printf("Sum = %d\n",sum);
    return 0;
}
