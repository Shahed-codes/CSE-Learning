#include<stdio.h>
#include<math.h>

double cube(double a);
int main()
{
    double x;
    printf("Please enter the value:\n");
    scanf("%lf",&x);
double cb=cube(x);
printf("The cube is=%.2lf\n",cb);
}
double cube(double a)
{
    double cb=pow(a,3);
    return cb;
}