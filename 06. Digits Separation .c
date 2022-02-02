// Separate all the digits from a number
#include <stdio.h>

int main(){
    int n, i=-1, j, dgt[50]; // Variable  declaration and initialization
    printf("Enter a natural number: "); // Display text to stdout
    scanf("%d", &n); // Read data from stdin
    while(n>0){
        i++;
        dgt[i] = n%10;  //Storing digits in an array
        n /= 10;
    }
    printf("\n\tDigits are: ");  // Display text to stdout
    for(j=i; j>=0; --j){
        printf("%d ",dgt[j]); // Display data to stdout
    }
    printf("\n"); // Display newline to stdout
    return 0;
}
