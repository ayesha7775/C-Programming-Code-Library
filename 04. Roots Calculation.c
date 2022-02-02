// Find the roots of the equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, m, n;  // Variable  declaration
    printf("Enter coefficients a, b and c: ");  // Display text to stdout
    scanf("%f %f %f", &a, &b, &c); // Read data from stdin
    d = b*b-4*a*c;  // Formula for discriminant
    printf("Discriminant is: %f", d); // Display data to stdout
    m = -b/(float)(2*a); // Formula for unique root
    if(d==0){ //Real and equal roots
        printf("\nUnique root:\n\troot1 = root2 = %.2f\n", m);
    }
    else if(d>0){ //Real and different roots
        n = ((sqrt)(d))/(float)(2*a);
        printf("\nReal roots are:\n\troot1 = %.2f", m+n);
        printf("\n\troot2 = %.2f\n", m-n);
    }
    else{ //Imaginary roots
        d = d*(-1);
        n = ((sqrt)(d))/(float)(2*a);
        printf("\nImaginary roots are:\n\troot1 = %.2f + %.2fi", m, n);
        printf("\n\troot2 = %.2f - %.2fi\n", m, n);
    }
    return 0;
}
