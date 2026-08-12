#include<stdio.h>

#include<math.h>
double area( double a,double b,double c);
double perimeter( double a,double b,double c);
int main()
{
       double a,b,c;
    printf("Please enter the value of a:\n");
    scanf("%lf",&a); 
    printf("Please enter the value of b:\n");
      scanf("%lf",&b);
   printf("Please enter the value of c:\n");
     scanf("%lf",&c);
double ar=area(a,b,c);
  printf("The area of the triangle is:%lf\n",ar);
  double pr=perimeter(a,b,c);
printf("The perimeter of the triangle is:%lf\n",pr);
return 0;
}
double area( double a,double b,double c)
{
    double s=(a+b+c)/2.0;

    double result=sqrt(s*(s-a)*(s-b)*(s-c));
    return result;
}
double perimeter( double a,double b,double c)
{
    double s=a+b+c;
    return s;
}