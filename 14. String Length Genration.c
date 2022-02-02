// Calculate the length of copied string
#include <stdio.h>
#include <string.h>

int main(){
   char text[100], copy[100];
   printf("Enter a string: ");
   gets(text); // Read string from stdin
   printf("\nCopied text: %s", strcpy(copy,text)); // Display copied string to stdout
   printf("\nThe number of copied characters: %d\n", strlen(copy)); // Display copied string length to stdout
   return 0;
}
