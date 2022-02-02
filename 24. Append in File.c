// Append the text of one file to another
#include <stdio.h>

int main(){
    FILE *f1, *f2; // Declare file type pointer f1, f2
    char ch;

    f1 = fopen("source.txt","r"); // Open file in read mode
    f2 = fopen("append.txt","a"); // Open file in append mode

    if(f1==NULL){
         printf("File not found\n"); // Write text to stdout
         exit(0);
    }
    while((ch=getc(f1))!=EOF){
        putc(ch,f2);  // Append data from f1 to f2 file
    }

    fclose(f1); // Close the file
    fclose(f2); // Close the file
    printf("File appended.\n");
    return 0;
}
