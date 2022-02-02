<h1 align='center'>C Programming</h1>

- C programming is a general-purpose, procedural, imperative computer programming language developed in 1972 by Dennis M. Ritchie to develop the UNIX operating system.\
- C is a successor of 'Basic Combined Programming Language' (BCPL) called B language.\
- C has been written in assembly language.

***

## Basic Program Structure
**Syntax:**
```C
  #include <stdio.h>  // Preprocessor Command tells a C compiler to include stdio.h file before
                     // going to actual compilation
  int main()        // Main function where the program execution begins
  {
    /* Multiple Line
       Comments in C */         
    ... .. ...
    ... .. ... // Functions, Statements & Expressions
    ... .. ...
    return 0;// Terminates the main() function and returns the value 0
  }
```
***

## Token
TOKEN is the smallest unit in a ‘C’ program which proceeds to the various stages of the compilation.
> **C supports six types of tokens.**
> - [Keywords](#Keywords)
> - [Identifiers](#Identifiers)
> - [Constants](#Constants)
> - [Strings](#Strings)
> - [Operators](#Operators)
> - [Special Symbols](#Special-Symbols)

### Keywords
Keywords are predefined, reserved words used in programming that have special meanings to the compiler and cannot be used as an identifier. There are a total of 32 keywords in ‘C’.

Keywords in C Programming Language |
--- |
`int` &nbsp;`float` &nbsp; &nbsp; &nbsp;`char` &nbsp; &nbsp; &nbsp;`double` &nbsp; &nbsp;`long` &nbsp; &nbsp; &nbsp; &nbsp;`short` &nbsp; &nbsp; `unsigned` &nbsp; `signed` |
`if` &nbsp; &nbsp; `else` &nbsp; `continue` &nbsp; &nbsp;`goto` &nbsp; &nbsp; `break` &nbsp; &nbsp; &nbsp;`switch` &nbsp; &nbsp; &nbsp; `case` &nbsp; &nbsp; &nbsp;`default` |
`for` &nbsp; &nbsp; `do` &nbsp; &nbsp; &nbsp; `while` &nbsp; &nbsp; &nbsp; `auto` &nbsp; &nbsp; &nbsp;`const` &nbsp; &nbsp; &nbsp;`static` &nbsp; &nbsp; `struct` &nbsp; &nbsp; &nbsp;`union` |
`void` &nbsp;`enum` &nbsp; &nbsp;`sizeof` &nbsp; &nbsp;`return` &nbsp;`register` &nbsp;`typedef` &nbsp; `extern` &nbsp; `volatile` |

### Identifiers
Identifiers are names given to different entities such as constants, variables, structures, functions, etc.
> **Rules for naming the Identifiers:**
> - An identifier can only have alphanumeric characters and underscore symbol.
> - The first character must be an alphabet or underscore and It must not contain white spaces.
> - Identifier names must be unique
> - Identifiers are case-sensitive.

**Example:**
```C
  dataType variableName; // variableName is an identifier
```
### Constants
A variable is an identifier which is used to store some value. Constants are like a variable, except that their value never changes during execution once defined.\
**Syntax:**
```C
  int const SIDE = 10; / const int SIDE = 10;
```
### Strings
Strings are one-dimensional array of characters terminated by a null character '\0'.\
**Syntax:**
```C
  char name[]; / char *name;
```
### Operators
C programming language offers eight types of operators having different functioning capabilities.

Operator Types | Operator
--- | ---
Arithmetic Operators | addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`) and modulus (`%`)
Relational Operators | Is equal to (`==`),	Is not equal to (`!=`), Greater/Less than (`>, <`), Greater than or equal to (`>=`), Less than or equal to (`<=`)
Logical Operators | And operator (`&&`), OR operator (`ll`), Not operator (`!`)
Assignment Operators | Assign (`=`),	Increments/Decrements/Multiplies/Divides/Modulus then assign (`+=, -=, *=, /=, %=`), Left/Right shift and assign (`<<=, >>=`), Bitwise AND/exclusive OR/inclusive OR and assign (`&=, ^=, l=`)
Increment and Decrement Operators | Increment (`++`), Decrement (`--`)
Conditional Operator | Conditional (`?:`)
Bitwise Operators | Binary Left/Right Shift (`<<, >>`), Binary Ones Complement (`~`),	Binary AND/OR/XOR (`&, l, ^`)
Special Operators | comma (`,`), size of a memory location (`sizeof()`), address of a memory location (`&`), pointer (`*`)

### Special Symbols
Special Symbols in C |
--- |
Parenthesis `( )`, Braces `{ }`, Brackerts `[ ]`, doller `$`, pound `#`, Single Quote `' '`, Double Quote `" "`, Colon `:`, Semicolon `;`

***

## C Variables
Variables are simple names that point to some memory location.
> **One can think of a Variable as a Glass of Water:**
> - Glass = variable
> - Water = value

> **Rules for naming the Variables:**
> - Can’t start variable name with a number or underscore
> - Variables are case-sensitive. Means Uppercase and Lowercase letters are different.
> - C Keywords are not allowed as variable name.
> - Blank or white space are not allowed. Instate use underscore.
> - Special Characters are not allowed.

> **Every variable in C programming has two properties:**
> - [Type](#Data-Types)
> - [Storage class](#Storage-Class)

### Data Types
C data types are declarations for variables that determines the type and size of data associated with variables.\
**Syntax:**
```C
  dataType variableName;
```
Type | Size (bytes) | Format Specifier | Type | Size (bytes) | Format Specifier
--- | :--- | :---: | --- | :--- | :---:
char |1	| %c	| signed/unsigned char | 1 | %c
int |at least 2, usually 4 | %d, %i	| unsigned int	| at least 2, usually 4 |	%u
short int | 2 usually | %hd | float| 4 | %f
double | 8	| %lf | long double | at least 10, usually 12 or 16 | %Lf
long int | at least 4, usually 8 |%ld, %li | unsigned long int |at least 4 | %lu
long long int | at least 8 | %lld, %lli | unsigned long long int |	at least 8 | %llu

### Storage Class
C storage class determines the scope, visibility and lifetime of a variable.
> **There are four types of storage class:**
> - [Automatic](#Automatic-or-Local-Variable)
> - [External](#External-or-Global-Variable)
> - [Static](#Static-Variable)
> - [Register](#Register-Variable)

#### Automatic or Local Variable
The variable defined with auto storage class are local to the function block inside which they are defined. A variable declared inside a function without any storage class specification, is by default an automatic variable. They are created when a function is called and are destroyed automatically when the function's execution is completed. By default they are assigned garbage value by the compiler.\
**Example:**
```C
  #include <stdio.h>  
  void func() {
     int n2; / auto int n2; // n2 is a local variable to func()
  }
  int main(){
      int n1; // n1 is a local variable to main()
      ++n2; // Error: n2 is not declared at this point
  }
```
#### External or Global Variable
The variable that is declared outside of all functions are known as external or global variables.These variables are not bound by any function, they are available everywhere throughout the program execution. By default, initial value of the Global variable is 0(zero).\
**Example:**
```C
  #include <stdio.h>
  int n = 5;  // global variable
  void display(){
      ++n;   
      printf("n = %d", n); // Output: 7
  }
  int main(){
      ++n;     
      display();
      return 0;
  }
```
The `extern` keyword is used with a variable to inform the compiler that this variable is declared somewhere else. The extern declaration does not allocate storage for variables.
**Example:**
```C
// file1.c
#include <stdio.h>
int a = 10;
void func(){
  ... .. ...
  ... .. ...
  ... .. ...
}
// file2.c
#include "file1.c"
int main(){
  extern int a;
  func();
  return 0;
}
```
#### Static Variable
A static variable is declared by using the static keyword if it's value got changed by any operation then it remains updated. A static variable tells the compiler to persist/save the variable until the end of program. Instead of creating and destroying a variable every time when it comes into and goes out of scope, static variable is initialized only once and remains into existence till the end of the program. By default,they are assigned 0(zero) by the compiler.\
**Example:**
```C
  #include <stdio.h>
  void display(){
    static int c = 1;
    c += 5;
    printf("%d",c);
  }
  int main(){
    display();  // Output: 6
    display(); // Output: 11
  }
```
#### Register Variable
The register keyword is used to declare register variables that were supposed to be faster than local variables. Register variables inform the compiler to store the variable in CPU register instead of memory. Register variables have faster accessibility than a normal variable.\
**Syntax:**
```C
  register int i;
```
***

## C Input Output (I/O)
In C programming, printf() is one of the main output function that sends formatted output to the screen and scanf() is the commonly used input function that reads formatted input from the standard input such as keyboards.\
**Syntax:**
```C
  printf("Any text");                           // Display text
  scanf("format specifier", &varName);         // Read data from stdin
  printf("format specifier", varName);        // Display data to stdout
  varName = getchar();                       // Read a character
  putchar(varName);                         // Display characters, but one at a time
  fgets(varName, sizeof(varName), stdin);  // Read string
  char *gets(char *varName);              // Read a line from stdin
  int puts(const char *varName);         // Write a string to stdout, but it does not include null characters.  
  int getc(FILE *stream);               // Accept a character from standard input  
  int putc(int c, FILE *stream);       // Send a single character to the standard output.
```
***

## C Type Casting
Type Casting in C is used to convert a variable from one data type to another data type, and after type casting compiler treats the variable as of the new data type.\
**Syntax:**
```C
  (type_name)expression;
```
**Example:**
```C
  #include <stdio.h>
  int main(){
    int a;
    a = 15/6;
    printf("%d",a);   // Output: 2
    a = (float)15/6;
    printf("%f",a);   // Output: 2.500000
    return 0;
  }
```
***

## C Decision and Flow Control Structure
### C Conditional Statement
C if-else statement is used to execute a block of code while checking condition.
> **C programming supports four types of If statement:**
> - [Simple if statement](#Simple-If-Statement)
> - [If-else statement](#If-else-Statement)
> - [Nested if-else statement](#Nested-If-else-Statement)
> - [Else-if ladder](#Else-if-Ladder)

#### Simple If Statement
**Syntax:**
```C
  if(condition){
    statement;
  }
```
#### If-else Statement
**Syntax:**
```C
  if(condition){
      statement;
  }
  else {
      statement;
  }
```
#### Nested If-else Statement
**Syntax:**
```C
  if(condition1){
    if(condition2){
       statement;
    }
    else{
       statement;
    }
  }
  else{
    statement;
  }
```
#### Else-if Ladder
**Syntax:**
```C
  if (condition1){
   statement;
  }
  else if(condition2){
    statement;
  }
  else if(condition3){
    statement;
  }
  ...
  ...
  else{
    statement;
  }
```
---
### C Loops
In programming, loops are used to repeat a block of code until a specified condition is met.
> **C programming has three types of Loops:**
> - [For loop](#For-Loop)
> - [While loop](#While-Loop)
> - [Do-while loop](#Do-while-Loop)

#### For Loop
**Syntax:**
```C
  for(initializationStatement; testExpression; updateStatement){
    statement;
  }
```
#### While Loop
**Syntax:**
```C
  while (testExpression) {
    statement;
  }
```
#### Do-while Loop
**Syntax:**
```C
  do{
    statement;  //  The body of do-while loop is executed at least once.
  }while(testExpression);
```
---
### C Break, Continue and Goto Statement
#### C Break Statement
The break statement ends the loop immediately when it is encountered.\
**Syntax:**
```C
  while(testExpression){
    if(condition){
      break;
    }
  }
```
#### C Continue Statement
The continue statement skips the current iteration of the loop and continues with the next iteration.\
**Syntax:**
```C
  while(testExpression){
    if(condition){
      continue;
    }
  }
```
#### C Goto Statement
The goto statement allows to transfer control of the program to the specified label.\
**Syntax:**
```C
  goto label;
  ...
  ...
  label:
    statement;
```
---
### C Switch Statement
The switch statement allows to execute one code block among many alternatives.\
**Syntax:**
```C
  switch(testExpression){
    case constant1:
      statement;
      break;
    case constant2:
      statement;
      break;
    ...
    ...
    ...
    default:
      default statement;
  }
```
***

## C Functions
A function is a block of code that performs a specific task. Dividing a complex problem into smaller chunks makes the program easy to understand and reuse.
> There are two types of Function in C programming:
> - [Standard library functions](#Standard-Library-Functions)
> - [User-defined functions](#User-defined-Functions)

### Standard Library Functions
The standard library functions are built-in functions in C programming. These functions are defined in header files.\
**Example:**
```C
  scanf(); printf();  // defined stdio.h header file
```
Or
```C
  rand(); alloc(); malloc(); calloc(); exit() // defined stdlib.h header file
```
Or
```C
  sqrt(), cbrt(), pow(), ceil(), floor(), fabs()  // defined math.h header file
  cos(), cosh(), acos(), acosh(), sin(), sinh(), asin(), asinh()
  tan(), tanh(), atan(), atanh(), atan2(), log(), log10(), exp(), hypot()
```
Or
```C
  isalnum(), isalpha(), isdigit(), isxdigit() // defined ctype.h header file
  isgraph(), iscntrl(), isprint(), isspace(), ispunct(), isupper(), tolower(), islower(), toupper()
```
Or
```C
  strcat(), strcmp(), strcpy(), strlen() // defined string.h header file
```
### User-defined Functions
The user-defined functions are  created by the user as per the program need.
#### No Arguments Passed and No Return Value
**Syntax:**
```C
  void functionName(); // Function prototype
  int main(){
    ...
    functionName(); // Function call
    ...
  }
  void functionName(){ // Function definition
    statement;
  }
```
#### No Arguments Passed but a Return Value
**Syntax:**
```C
  int functionName();
  int main(){
    ...
    functionName();
    ...
  }
  int functionName(){
    statement;
    return statement;
  }
```
#### Argument Passed but No Return Value
**Syntax:**
```C
  void functionName(type1 argument1, type2 argument2, ...);
  int main(){
    ...
    functionName(argument1, argument2, ...);
    ...
  }
  void functionName(type1 argument1, type2 argument2, ...){
    statement;
  }
```
#### Argument Passed and a Return Value
**Syntax:**
```C
  int functionName(type1 argument1, type2 argument2, ...);
  int main(){
    ...
    functionName(argument1, argument2, ...);
    ...
  }
  int functionName(type1 argument1, type2 argument2, ...){
    statement;
    return statement;
  }
```
---
### C Function Call
#### Call by Value
**Example:**
```C
  void swap(int n1, int n2);
  int main()
  {
    int num1 = 5, num2 = 10;
    swap(num1, num2);
    return 0;
  }
```
#### Call by Reference
**Example:**
```C
  void swap(int *n1, int *n2);
  int main()
  {
    int num1 = 5, num2 = 10;
    swap(&num1, &num2);
    return 0;
  }
```
Or
```C
  void swap(int *n1, int *n2);
  int main()
  {
    int *ptr1, *ptr2, num1 = 5, num2 = 10;
    ptr1 = &num1;
    ptr2 = &num2;
    swap(ptr1, ptr2);
    return 0;
  }
```
---
### C Recursion
A function that calls itself is known as a recursive function. And, this technique is known as recursion.
The recursion continues until some condition is met to prevent it.\
**Syntax:**
```C
  void recurse(){
    if(baseCondition){
      return statement; // To prevent infinite recursion
    }
    ...
    recurse();
    ...
  }
  int main(){
    ...
    recurse();
    ...
  }
```
***

## C Preprocessors and Headers
### C Preprocessors
The preprocessor is a program invoked by the compiler that modifies the source code before the actual composition takes place.
#### All Preprocessor Directives are Categorized in Three Section
**Macro Substitution Division:**

Directive | Description
--- | ---
`#include` | File include
`#define`, `#undif`	| Macro define, Macro undefine
`#ifdef`, `#ifndef`	| If macro defined, If macro not defined

**File Inclusion Division:**
Directive | Description
--- | ---
`#if`, `#elif`, `#else`, `#endif`	| If, Else, ifElse, End if

**Compiler Control Division:**
Directive | Description
--- | ---
`#line`, `#error`, `#pragma` | Set line number, Abort compilation, Set compiler option

**Syntax:**
```C
  #include <stdio.h>  // Tell the compiler to add stdio.h file from System Libraries to the current source file
  #include "header.h" // Tell the compiler to get header.h from the local directory
```
Or
```C
  #define LIMIT 10  // #define macro_name character_sequence
```
Or
```C
  #undef  LIMIT
  #define  LIMIT 20 // Tell the compiler to undefine existing LIMIT and set it as 20.
```C
  #ifndef LIMIT
  #define LIMIT 50 // Tell the compiler to define LIMIT, only if LIMIT isn't already defined
  #endif
```
---
### C Headers
Header files are helping file in C program which holds the definitions of various functions and their associated variables that needs to be imported into a C program with the help of pre-processor #include statement.
#### Create a Custom Header File in C
**Example:**
```C
  void swap (int* a, int* b){ // swap.h file
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
  }
```
```C
  #include <stdio.h> // Both files swap.h and main.c must be in the same folder.
  #include "swap.h" // Instead of writing <swap.h> use this terminology swap.h to include custom header file
  int main(){
    int a=20, b=30;
    swap(&a, &b);
    printf("a=%d\nb=%d\n", a, b);
    return 0;
  }
```
#### Writing of Single and Multiple Uses of Header Files
**Syntax:**
```C
  #ifndef HEADER_FILE_NAME
  #define HEADER_FILE_NAME
    the entire header file  // When a header file needs to be included twice within a program
  #endif
```
Or
```C
  #if FIRST_SYSTEM   // When a program needs several diverse header files based on some requirement
   #include "sys.h"
  #elif SEC_SYSTEM
   #include "sys2.h"
  #elif THRID_SYSTEM
   ....
  #endif
```
***

## C Programming Pointers
Pointers (pointer variables) are special variables that are used to store addresses rather than values.\
**Syntax:**
```C
  dataType* p; / dataType *p; / dataType * p;       // A pointer p of data type dataType
```
**Example:**
```C
  int* ptr, c;
  c = 5;
  ptr = &c;
  printf("%d", *ptr/c);   // Output: 5
  c = 3; / *ptr = 7;
  printf("%d", *ptr/c);   // Output: 7
  printf("%p/%d", &c/ptr); // Output: 1450734460

```
***

## C Programming Arrays
An array is defined as a finite ordered collection of homogeneous data, stored in contiguous memory locations.
> **Here the words**
> - finite means data range must be defined.
> - ordered means data must be stored in continuous memory addresses.
> - homogeneous means data must be of similar data type.

### Array Declaration and Initialization
Arrays must be declared before they are used.
**Example:**
```C
  int arr[5]; // It means array arr can only contain 5 elements of int type indexing from 0 to 4
```
After an array is declared it must be initialized. Otherwise, it will contain garbage value(any random value). An array can be initialized at either compile time or at runtime.
**Example:**
```C
  int arr[]= { 11, 22, 33 };  // Compile time Array initialization
```
Or
```C
  int arr[];
  for(i=0; i<4; i++){
    scanf("%d", &arr[i]); //Run time Array initialization
  }
```
---
### C One Dimensional Arrays
**Syntax:**
```C
  dataType arrayName[arraySize];                        // Array declaration
  dataType arrayName[N] = {elem1, elem2, ...., elemN}; // Array initialization
  arrayName[index];                                   // Access array elements with indices[0 - arraySize-1]
```
---
### C Multi Dimensional Arrays
An array of array is known as multidimensional array.
#### 2d Array
**Syntax:**
```C
  dataType arrayName[rowSize][columnSize];  // Array declaration
  int arr[2][3] = {{1, 3, 0}, {-1, 5, 9}};
  int arr[][3] = {{1, 3, 0},  {-1, 5, 9}}; // Array initialization
  int arr[2][3] = {1, 3, 0, -1, 5, 9};
```
#### 3d Array
**Syntax:**
```C
  dataType arrayName[size][size][size];              // Array declaration
 int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, 3, 9, 1}, {2, 1, 3, 2}},    // Array initialization
    {{5, 4, 6, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}
  };
```
***

## C Memory Allocation
### Static Memory Allocation
In the static memory allocation technique, allocation of memory is done at compilation time, and it stays the same throughout the entire run of a program. Neither any changes will be there in the amount of memory nor any change in the location of memory.
### Dynamic Memory Allocation
In dynamic memory allocation technique, allocation of memory is done at the time of running the program. and it also has the facility to increase/decrease the memory quantity allocated and can also release or free the memory as and when not required or used. Reallocation of memory can also be done when required.
To allocate memory dynamically, library functions malloc(), calloc(), realloc() and free() are used. These functions are defined in the <stdlib.h> header file.
#### C malloc()
The name "malloc" stands for memory allocation which reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.\
**Syntax:**
```C
  ptr = (castType*) malloc(size);
```
**Example:**
```C
  ptr = (float*) malloc(100 * sizeof(float)); //  Allocates 400 bytes of memory or return NULL pointer if the memory cannot be allocated.
```
#### C calloc()
The name "calloc" stands for contiguous allocation which allocates memory and initializes all bits to zero whereas malloc() leaves the memory uninitialized.\
**Syntax:**
```C
  ptr = (castType*)calloc(n, size);
```
**Example:**
```C
  ptr = (float*) calloc(25, sizeof(float)); // Allocates contiguous space in memory for 25 elements of type float.
```
#### C free()
Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own, free() explicitly release the space.\
**Syntax:**
```C
  free(ptr);
```
#### C realloc()
If the dynamically allocated memory is insufficient or more than required, realloc() function can change the size of previously allocated memory.\
**Syntax:**
```C
  ptr = realloc(ptr, x); // ptr is reallocated with a new size x.
```
***

## C Programming Strings
Strings are actually one-dimensional array of characters terminated by a null character '\0'.\
**Syntax:**
```C
  char name[]; / char *name;
```
**Example:**
```C
  char name[] = "Cloud";
  char name[6] = "Cloud";
  char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};
  char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};
  char *name = "Cloud";
```
---
### C String Library Functions
C supports a large number of string handling functions in the standard library "string.h".\
**Syntax:**
```C
  #include <string.h>
```
**Few Commonly Used String Handling Functions:**
Function | Work of Function
--- | ---
strlen() | computes string's length
strcpy() | copies a string to another
strcat() | concatenates(joins) two strings
strcmp() | compares two strings
strrev() | reverse the string
strlwr() | converts string to lowercase
strupr() | converts string to uppercase
***

## Structure And Union
### C Structure
In C programming, a structure (or struct) is a collection of variables (can be of different types) under a single name.\
**Syntax:**
```C
  struct structureName{
    dataType member1;
    ... .. ...          // Structure declaration
    dataType member2;
  };
  int main(){
  struct structureName var1, var2, var[10]; // Variable creation
  var1.member1 = something;                // Access members
  return 0;
}
```
Or
```C
  struct structureName{
    dataType member1;
    ... .. ...            // Structure declaration
    dataType member2;
  }var1, var2, var[10]; // Variable creation
```
**Typedef Keyword:**\
In C the typedef keyword is used to create an alias name for data types.\
**Syntax:**
```C
  typedef struct distance{
    int feet;
    float inch;
  }dist;  // Created alias dist for struct distance
  int main() {
    dist d1, d2;
  }
```
#### Nested Structures
C programming allows to create structures within a structure.\
**Syntax:**
```C
  struct complex{
    int imag;
    float real;
  };
  struct number{
    struct complex comp;    //Nested structure
    int integers;
  }num1;
  int main(){
    num1.comp.imag = 11;    // Access nested member
    return 0;
  }
```
#### C Pointers to Struct
**Syntax:**
```C
  struct structName{
    dataType member1;
    dataType member2;
  };
  int main(){
    struct structName *ptr, var1;   // ptr is a pointer to struct
    ptr = &var1;                   // The address of var1 is stored in the ptr
    ptr->member1 = something;     // Access struct member, ptr->member1 is equivalent to (*ptr).member1
```
#### Dynamic Memory Allocation of Structs
C programming allows structs to allocate memory during run-time.\
**Syntax:**
```C
  typedef struct structName{
    ... .. ...
    ... .. ...
  }s;
  int main(){
    s *ptr;
    ptr = (s*) malloc(n * sizeof(s)); // n is the number of struct variable
```
#### Passing and Returning structs
##### Passing Struct to a Function
**Syntax:**
```C
  struct st{
    ... .. ...               // structure definition
  };
  void func(struct st s); // function prototype
  int main(){
    struct st var;      // creating struct variable
    dis(var);          // passing struct as an argument
    return 0;
  }
```
##### Return Struct from a Function
**Syntax:**
```C
  struct st{
    ... .. ...               // structure definition
  };
  struct st func(){        // function definition
    struct st s;
    ... .. ...
    return s;
  }      
  int main(){
    struct st var;      // creating struct variable
    var = func();      // passing struct as an argument
    return 0;
  }
```
##### Passing Struct by Reference
**Syntax:**
```C
  typedef struct complexNumber{
      float real;
      float imag;
  }comp;
  void add(comp c1, comp c2, comp *result);
  int main(){
    comp c1, c2, result;
    add(ca, c2, &result);
    return 0;
  }
```
---
### C Union
A union is a user-defined type similar to structs in C except for one key difference.
Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time. The size of a union variable will always be the size of its largest element.\
**Syntax:**
```C
  union unionName{
    dataType member[50];
    dataType member2;
  };
  int main(){
    union unionName var1, var2, *var3;
    var3 = &var2;
    var1.member2 / (*var3).member2 / var3->member2;
    return 0;
  }
```
Or
```C
  union unionName{
    dataType member[50];
    dataType member2;
  }var1, var2, *var3;
```
***

## C Programming Files
A file is a container in computer storage devices used for storing data.
### Types of Files
> **When dealing with files, there are two types of files:**
> - Text files
> - Binary files

### File Operations
> **In C, there are four major operations on files, either in text or in binary:**
> - Creating a new file
> - Opening an existing file
> - Closing a file
> - Reading from and writing information to a file

#### Creating/Opening and Closing a File
**Syntax:**
```C
  FILE *fptr = fopen(const char *filePath, const char *mode); // Declaring file type pointer and opening a file
  fclose(FILE *fptr);    // Closing a file
```
#### Opening Modes in Standard I/O
Mode | Meaning of Mode | During Inexistence of file
--- | --- | ---		
r | Open for reading | If the file does not exist, fopen() returns NULL.
rb | Open for reading in binary mode | If the file does not exist, fopen() returns NULL.
w | Open for writing | If the file exists, its contents are overwritten and If the file does not exist, it will be created.
wb | Open for writing in binary mode | 	If the file exists, its contents are overwritten and If the file does not exist, it will be created.
a | Open for append | Data is added to the end of the file and If the file does not exist, it will be created.
ab | Open for append in binary mode | Data is added to the end of the file and If the file does not exist, it will be created.
r+ | Open for both reading and writing | If the file does not exist, fopen() returns NULL.		
rb+ | Open for both reading and writing in binary mode and If the file does not exist, fopen() returns NULL.
w+ | Open for both reading and writing | If the file exists, its contents are overwritten and If the file does not exist, it will be created.
wb+ | Open for both reading and writing in binary mode | If the file exists, its contents are overwritten and If the file does not exist, it will be created.
a+ | Open for both reading and appending | If the file does not exist, it will be created.
ab+ | Open for both reading and appending in binary mode | If the file does not exist, it will be created.

#### Read from and Writing to a Text File
**Syntax:**
```C
  getc(fptr);       // Read a character from the file
  putc(ch, fptr) // Write a character to the file
  getw(FILE *fptr); //  Read an integer from a file
  putw(int c, FILE *fptr );// Write an integer to the file.
  fscanf(fptr, formatSpecifier, &var); // Read formatted input from a file
  fprintf(FILE *fptr, formatSpecifier, var) // Write formatted data to a file.
  fgets(char *str, int n, FILE *fptr) // Read strings 1 line each time
  fputs(char *str, FILE *fptr); // Write string to any particular file
  feof(FILE *fptr) // Determine if the end of the file has been reached or not.
```
#### Reading from and Writing to a Binary File
**Syntax:**
```C
  fread(addressData, sizeData, numbersData, pointerToFile);
  fwrite(addressData, sizeData, numbersData, pointerToFile);
```
#### Getting Data Using fseek()
An easier way to get to the required data from many records inside a file can be achieved using fseek().
As the name suggests, fseek() seeks the cursor to the given record in the file.\
**Syntax:**
```C
  fseek(FILE *stream, long int offset, int whence); //pointer to the file, position if the record, location from where offset start(SEEK_SET, SEEK_END, SEEK_CUR)
```
***
