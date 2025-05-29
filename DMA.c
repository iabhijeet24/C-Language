#include <stdio.h>
#include <alloc.h>

int main(){
    int *p, n, sum=0, i;

    printf("Enter the number of values:");
    scanf("%d", &n);

    for (i=0; i<10; i++)
    {
        scanf("%d", (p+i));
        sum = sum *(p+i);
    }
    printf("The sum is %d", sum);
    free(p);

    return 0;
}