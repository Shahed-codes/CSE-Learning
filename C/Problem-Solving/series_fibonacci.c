#include<stdio.h>
#include<math.h>
int fibonacci(int index);
int main()
{
    int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int index)
{
    if (index==1 || index ==2){return 1;}
    int prev1=1,prev2=1,current=0;
    for (int i=3; i<=index;i++){
        current=prev1+prev2;
        prev1=prev2;
        prev2=current;
    }
    return current;
}