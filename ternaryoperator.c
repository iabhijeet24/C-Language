#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter the value of x ,y ,z:");
    scanf("%d %d %d", &x, &y, &z);
    
    if(x>y && x>z)
{
    printf("%d is the largest",x);
}

else if(y>x && y>z)
{
    printf("%d is the largest",y);
}

else if(z>y && x<z)
{
    printf("%d is the largest",z);
}

    return 0;
}