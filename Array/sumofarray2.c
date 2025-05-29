#include <stdio.h>

int main() {
    int x [50], esum = 0, osum=0, i, n;
    printf("Enter the no. of values:");
    scanf("%d",&n);
    printf("Enter the values:");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        if(x[i]%2 == 0){
        esum = esum + x[i];
        }
        
        else{
            osum = osum + x[i];
        }
    }
    printf("The sum of even numbers is %d and odd numbers is %d", esum, osum);

    return 0;
}