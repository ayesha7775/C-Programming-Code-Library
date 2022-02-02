// Separate the integer and fractional part of a decimal number
#include <stdio.h>

int main(){
    float n, frac_part; // Variable
    int int_part;     // declaration
    printf("Enter a floating-point number: ");  // Display text to stdout
    scanf("%f", &n);  // Read data from stdin
    int_part = (int)(n); // Separating integer part
    frac_part = n-int_part; // Separating fractional part
    printf("\n\tInteger part: %d\n\tFractional part: %f\n", int_part, frac_part); // Display data to stdout
    return 0;
}
