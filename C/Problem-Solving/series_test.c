#include<stdio.h>
#include<math.h>
double calcFact(int f);
int calcdenom(int x);
double summation(int n);
int main()
{
    int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    double result=summation(n);

    printf("The sum of the series is: %lf\n",result);
    return 0;
}
double calcFact(int f)
{
    double fact=1.0;
    for (int i=1;i<=f;i++){
        fact*=i;
    }
    return fact;

}
int calcdenom(int x)
{
    return x*x+1;
}
double summation(int n)
{
    double sum=0.0;
    double num=calcFact(n);
    double denom=calcdenom(n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+(num/denom);
    }
    return sum;
}