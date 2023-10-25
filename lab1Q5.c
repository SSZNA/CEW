
#include<stdio.h>

int fibo(int a,int b,int num){
int z;
if (num==0)
{
    printf("\nEnd of series.");
    return 0;
}
else
{
    z=(a+b);
    printf("%d",z);
    return fibo(b,z,num-1);

}
}
int main()
{
    int num;
    printf("Fibonacci series:\nEnter nth term of the series: ");
    scanf("%d",&num);
    if (num>0){
        printf("0");
    }
    if (num>1){
        printf("1");
    }
    fibo(0,1,num-2);
    return 0;
}
