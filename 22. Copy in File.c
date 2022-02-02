// Copy the text of one file to another
#include <stdio.h>

int main(){
    FILE *f1, *f2; // Declare file type pointer f1, f2
    char ch;

    f1 = fopen("source.txt","r"); // Open file in read mode
    if(f1==NULL){
        puts("File not found"); // Write text to stdout
        exit(0);
    }

    f2 = fopen("copy.txt","w"); // Open file in write mode
    while((ch=getc(f1))!=EOF) // Read one character from file
        putc(ch,f2);  // Write one character to file

    fclose(f1); // Close the file
    fclose(f2); // Close the file

    printf("Successfully copied file contents\n"); // Write text to stdout

    return 0;
}
