#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if((n%2)==0)
    { printf("You have entered an even number!");
    }
    else
         printf("You have entered an odd number!");
    
    return 0;
}