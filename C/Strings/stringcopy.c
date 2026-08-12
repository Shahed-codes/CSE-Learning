#include<stdio.h>
int main()
{
    char string[]="Game";
    char string2[50];
    int i=0;
    while (string[i] != '\0'){
    string2[i]=string[i];
    i++;
    }
    string2[i]='\0';
    printf("Copied string: %s\n",string2);
    return 0;
}