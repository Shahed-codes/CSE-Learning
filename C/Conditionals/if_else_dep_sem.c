#include<stdio.h>
int main()
{
    char department;
    printf("Please enter your department:\nC/c=CSE\nE/e=EEE\n");

    scanf("%c",&department);
    int semester;
     printf("Please enter your semester(1-2):\n");
     scanf("%d",&semester);
    if(department=='C' || department=='c')
    {  
    printf("CSE\n") ;   
    }
    else if(department=='E' || department=='e')
    {  
    printf("EEE\n") ;   
    }
    else if(semester==1)printf("First Semester\n");
    else if(semester==2)printf("Second semester\n");
    else printf("Please enter valid information\n");
    return 0;
}