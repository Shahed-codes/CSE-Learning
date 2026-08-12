#include<stdio.h>
#include<math.h>

double square(double a);
int main()
{
    double x;
    printf("Please enter the value:\n");
    scanf("%lf",&x);
double result=square(x);
printf("The square is=%.2lf\n",result);
}
double square(double a)
{
    double sqr=pow(a,2);
    return sqr;
}