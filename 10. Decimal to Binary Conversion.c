// Convert a decimal number to binary
#include <stdio.h>

int main(){
    int n, i=-1, j, arr[100]; // Variable  declaration and initialization
    printf("Enter a natural number: "); // Display text to stdout
    scanf("%d", &n);  // Read data from stdin
    while(n>0){
        i++;
        arr[i] = n%2;   //Decimal to binary conversion
        n /= 2;
    }
    printf("\nBinary representation: "); // Display text to stdout
    for(j=i; j>=0; --j){
        printf("%d", arr[j]); // Display data to stdout
    }
    printf("\n");
    return 0;
}
