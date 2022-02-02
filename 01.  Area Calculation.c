// Calculate the area of a circle
#include <stdio.h>
#define PI 3.1416   // Macro definition of pi value

int main(){
    float r, a;  // Variable  declaration
    printf("Enter radius: "); // Display text to stdout
    scanf("%f", &r); // Read data from stdin
    a = PI*r*r; // Formula of calculating the area of a circle
    printf("\nArea of the circle: %.2f\n", a); // Display data to stdout
    return 0;
}
