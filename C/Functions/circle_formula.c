#include<stdio.h>

#include<math.h>

double circle(double a);
double cir(double x);
int main()
{
    double r;
    printf("Please enter the radius:\n");
    scanf("%lf",&r);
double result=circle(r);
printf("The area of the circle is=%.2lf\n",result);
double res=cir(r);
printf("The circumference of the circle is=%.2lf\n",res);
}
double circle(double a)
{
   const double pi=3.1416;
   double result=pi*(pow(a,2));
    return result ;
}
double cir(double x)
{
    const double pi=3.1416;
    double circ=2*pi*x;
    return circ;
}