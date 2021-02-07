#include<stdio.h>

int main()
{
    char let;
    printf("Enter any letter:");
    scanf("%c",&let);
    if(let=='a' || let== 'A' ||let=='e' ||let=='i' ||let=='o' 
   ||let=='u' ||let=='E'||let=='I' ||let=='O' ||let=='U'){
    printf(" %c is a vowel letter",let);}
    else 
    printf("You have entered a consonant letter");
    return 0;
}