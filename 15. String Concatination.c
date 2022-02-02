// Concatenate three string into one
#include <stdio.h>
#include <string.h>

int main(){
    char name[50], f_n[15], m_n[15], l_n[15];
    printf("Enter first name: ");
    gets(f_n);
    printf("Enter middle name: ");
    gets(m_n);
    printf("Enter last name: ");
    gets(l_n);
    strcpy(name, f_n);  // Concatenate f_n to name
    strcat(name, " ");  // Concatenate " " to name
    strcat(name, m_n);  // Concatenate m_n to name
    strcat(name, " ");  // Concatenate " " to name
    strcat(name, l_n);  // Concatenate l_n to name
    printf("\nFull name: %s", name);
    return 0;
}
