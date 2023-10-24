#include<stdio.h>
int main(){
float height,width;
    printf("Enter height of rectangle: ");
    scanf("%f",&height);
    printf("Enter width of rectangle: ");
    scanf("%f",&width);
    printf("Perimeter of Rectangle: %.2f units",2*(height+width));
    printf("\nArea of rectangle: %.2f square units",height*width);
    return 0;
}

