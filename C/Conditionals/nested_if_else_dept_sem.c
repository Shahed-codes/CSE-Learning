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
        if (semester==1)
        {
        printf("CSE-First Semester\n") ; 
        }
        else if(semester==2)
        {
        printf("CSE-Second Semester\n") ;
        }
        else printf("CSE-Invalid Semester\n");
    }
    else if(department=='E' || department=='e')
    {  
        
    if (semester==1)    
    {
        printf("EEE-First Semester\n");
    }  
    else if(semester==2)
    {
        printf("EEE-Second Semester\n");
    }
    else printf("EEE-Invalid Semester\n");
    }
    else printf("Invalid Department\n");
    return 0;
}