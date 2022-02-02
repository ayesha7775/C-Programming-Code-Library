// Calculate the factorial of a given number
#include <stdio.h>

int main (){
    int i, n, f=1;  // Variable  declaration and initialization
    printf("Enter a natural number: ");  // Display text to stdout
    scanf("%d", &n);  // Read data from stdin
    for(i=1; i<=n; i++){
        f=f*i;  //Factorial of n calculation
    }
    printf("\nFactorial of %d or %d! = %d\n", n, n, f);  // Display data to stdout
}
