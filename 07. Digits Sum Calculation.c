// Calculate the sum of all the digits in a number
#include <stdio.h>

int main(){
    int n, sum=0; // Variable  declaration and initialization
    printf("Enter an natural number: ");  // Display text to stdout
    scanf("%d", &n);  // Read data from stdin
    while(n>0){
        sum += n%10;  // Digits sum calculation
        n /= 10;
    }
    printf("\nSum of the digits of the number is: %d\n",sum); // Display data to stdout
    return 0;
}
