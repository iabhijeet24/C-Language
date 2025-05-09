#include <stdio.h>

int main() {
    int x[100], i, n, s, found = 0;

    printf("Enter the no. of values: ");
    scanf("%d", &n);

    printf("Enter the values:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &s);
    
    for(i = 0; i < n; i++) {
        if(s == x[i]) {
            printf("Present\n");
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Not present\n");
    }

    return 0;
}
