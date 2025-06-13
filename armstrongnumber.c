#include <stdio.h>

int main() {
    int n, i,sum=0, temp=0, digit=0;

printf("Enter the number:");
scanf("%d", &n);

    temp=n;

    while(temp!=0)
    {
        digit=temp%10;
        sum += digit*digit*digit;
        temp=temp/10;
    }

    if(sum==n)
    {printf("An Armstrong number.");}


    else{
printf("%d is not an armstrong number");}

    return 0;
}
