#include <stdio.h>

int main() {
    int x [100], sum = 0, i, n;
    printf("Enter the no. of values");
    scanf("%d",&n);
    printf("Enter the values:");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        sum = sum + x[i];
    }
    printf("The sum is %d", sum);

    return 0;
}