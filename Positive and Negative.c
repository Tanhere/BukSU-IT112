#include<stdio.h>

int main()
{
    int n=0;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n>0)
    { printf("YOU HAVE ENTERED POSITIVE NUMBER!");
    }
    else
         printf("YOU HAVE ENTERED NEGATIVE NUMBER!");
    
    return 0;
}