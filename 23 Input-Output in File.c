// File operation - read and write
#include <stdio.h>

int main()
{
    FILE *fptr; // Declare file type pointer fptr
    char ch;

    fptr=fopen("inputOutput.txt","w"); // Open file in write mode

    printf("Data input:\n");
    while((ch=getchar())!=EOF) // Read from stdin till ctrl-z / ctrl-d
        putc(ch,fptr);  // Write character to file

    fclose(fptr); // Close the file

    fptr=fopen("inputOutput.txt","r"); // Open file in read mode

    printf("\nData output:\n");
    while((ch=getc(fptr))!=EOF) // Read character from file till end of file
        printf("%c",ch); // Write character to stdout

    fclose(fptr); // Close the file

    return 0;
}
