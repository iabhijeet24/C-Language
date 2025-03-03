#include <stdio.h>
int main() {
    int x, y, z, big;
    printf("Enter the value of x ,y ,z:");
    scanf("%d %d %d", &x, &y, &z);
    
    if(x>y){
        if(x>z){
            big=x;
        }
    }
    
     else if(y>x){
        if(y>z){
            big=y;
        }
    }
    
     else if(z>y){
        if(z>x){
            big=z;
        }
    }
    
    printf("%d is the largest.",big);
    

    printf("After swapping value of x=%d and y=%d", x , y);

    return 0;
}