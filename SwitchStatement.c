#include <stdio.h>
#include <conio.h>

void main()
{   int number;
    printf("Please enter a number here:");
    scanf("%d",&number);
    switch(number){
        case 1:printf("\nJanuary");
          break;
        case 2:printf("\nFebruary");
          break;
        case 3:printf("March\n");
          break;
        case 4:printf("April\n");
          break;
        case 5:printf("May\n");
          break;
        case 6:printf("June\n");
          break;
        case 7:printf("July\n");
          break;
        case 8:printf("August\n");
          break;
        case 9:printf("September\n");
          break;
        case 10:printf("October\n");
          break;
        case 11:printf("November\n");
          break;
        case 12:printf("December\n\n\n");
          break;
        default:printf("Invalid Entry!");
    }

 getch();
}
