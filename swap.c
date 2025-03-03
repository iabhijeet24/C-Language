// WAP to swap using third variable.
#include <stdio.h>

int main() {
   int x, y, temp;
    printf("Enter the two numbers:");
    scanf("%d %d",&x, &y);
    
    // swapping
    temp=x;
    x=y;
    y=temp;
    
printf("After swapping, x = %d and y = %d\n", x, y);


    return 0;
}