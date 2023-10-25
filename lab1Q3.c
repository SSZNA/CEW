#include <stdio.h>
    int main() {
    float Height;

    printf("Enter Height of the Person in centimeters: ");
    scanf("%f",&Height);
    if(Height<150)
        printf("The Person is a DWARF.");
    else if(Height==150)
        printf("The Person is AVERAGE.");
    else if(Height>=165)
        printf("The Person is TALL.");
    return 0;
}
