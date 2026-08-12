#include<stdio.h>

#include<math.h>
int main()
{
    int choice;
    printf("===GAME MENU===\n");
    printf("1.Start new game\n");
    printf("2.Load saved game\n");
    printf("3.Open settings\n");
    printf("4.Exit\n");
    printf("Please enter your choice(1-4)\n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:printf("Starting a new adventure\n");
    break;
     case 2:printf("Loading your last saved file\n");
    break;
     case 3:printf("Opening settings menu\n");
    break;
     case 4:printf("Goodbye!Thanks for playing\n");
    break;
    default:printf("Invalid choice\n");
    break;
    }
return 0;
}