#include <stdio.h>
int main() {
    int i, n, sum=0;
    printf("Enter the value:");
    scanf("%d", &n);
    
    for(i=2; i<=n; i=i+2)
    {
        sum = sum + i*i;
    }
    
    printf("The sum is %d",sum);

    return 0;
}