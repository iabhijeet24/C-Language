#include <stdio.h>

int main() {
    int x [50], s, i, n, flag=0;
    printf("Enter the no. of values:");
    scanf("%d",&n);
    printf("Enter the values:");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter the value you want to search:");
    scanf("%d", &s);
    
    for(i=0; i<n; i++)
    {
        if(x[i] == s)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        printf("Present");
    }
    else{
        printf(" Not Present");
    }

    return 0;
}