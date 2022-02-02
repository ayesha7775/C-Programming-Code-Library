// Create an array of elements using pointer
#include <stdio.h>

int main(){
    int size, *p;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int data[size];
    p = data;   // Pointer points to the start of the array
    printf("\nEnter the elements of the array: ");
    while(p<data+size){
        scanf("%d",p);
        p++;
    }
    p = &data[0];
    while(p<=&data[size-1]){
        printf("%5d",*p); // Display array elements to stdout
        p++;
    }
    return 0;
}
