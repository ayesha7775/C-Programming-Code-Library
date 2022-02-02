// Convert the temperature from cel to fah and vice versa
# include <stdio.h>

int main(){
    float c, f;  // Variable  declaration
    printf("Enter celsius value: ");  // Display text to stdout
    scanf("%f", &c); // Read data from stdin
    f = 1.8*c+32; // Temperature conversion from celsius to fahrenheit
    printf("In fahrenheit: %.2f", f);  // Display data to stdout
    printf("\n\nEnter fahrenheit value: "); // Display text to stdout
    scanf("%f", &f); // Read data from stdin
    c = (f-32)/(float)1.8;  //Temperature conversion from fahrenheit to celsius
    printf("In celsius: %.2f\n", c); // Display data to stdout
    return 0;
}
