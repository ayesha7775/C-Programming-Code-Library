// Make the inverted pyramid of a given number
#include<stdio.h>

int reverse(int n){ // Reverse the number 1234 to 4321
    int r=0;
    while(n>0){
        r = r*10+n%10;
        n /= 10;
    }
    return r;
}

int main(){
    int n, r;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    r = reverse(n);                 //  1234
    while(r>0){                     //  234
        printf("%d\n",reverse(r));  //  34
        r /= 10;                    //  4
    }
    printf("\n");
    return 0;
}
