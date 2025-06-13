#include <stdio.h>

int main() {
    int n, i, j, temp=0, arr[50];

printf("Enter the number of terms:");
scanf("%d", &n);

printf("Enter the values:");
    for(i=0; i<n; i++)
    {
scanf("%d", &arr[i]);
    }

    for(i=0; i< (n-1) ; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
            }
        }
    }

printf("Final sorted array: ");
    for (i = 0; i< n; i++) {
printf("%d ", arr[i]);
    }
    return 0;
}
