#include <stdio.h>
int main() {
    int side, perimeter, area;
    printf("Enter the value of side of square:");
    scanf("%d", &side);
    
    area = side*side;
    perimeter = 4* side;
    
    printf("The area of square is %d and perimeter is %d",area, perimeter);

    return 0;
}