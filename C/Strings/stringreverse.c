#include <stdio.h>
int main()
{
    char string[]="Game";
    int i=0,j;
    char temp;

    while(string[i]!='\0'){
    i++;
    }
    for(j=0; j<i/2 ; j++){
    temp=string[j];    
    string[j]=string[i-1-j];    
    string[i-1-j]=temp;    

    }
    printf("Reversed string: %s\n",string);
}