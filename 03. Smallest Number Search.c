// Find the smallest number among three number
#include <stdio.h>

int main(){
    int a, b, c, min;  // Variable  declaration
    printf("Enter three number: "); // Display text to stdout
    scanf("%d %d %d", &a, &b, &c); // Read data from stdin
    if(a<b && a<c) min = a;       // If else ladder to search
    else if(b<a && b<c) min = b; // for minimum number
    else min = c;               // among three numbers
    printf("\nSmallest number is: %d\n", min); // Display data to stdout
    return 0;
}
