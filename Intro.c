// This is a boiler plate code for a C program that prints "Hello world" to the console.
/*
# include<stdio.h>

int main() {
    printf("Hello world");      // In C, the main function is the entry point of the program.
    return 0;
}

*/


// Chapter 1: Introduction to C Language

// Variables and Data Types

/*
# include<stdio.h>

int main () {

    int number = 10;         // Integer data type
    char character = 'A';    // Character data type
    float decimal = 3.14;   // Floating-point data type
    double largeDecimal = 1.124387985413; // Double precision floating-point data type
    printf("Integer: %d\n", number);
    printf("Character: %c\n", character);
    printf("Float: %.2f\n", decimal);
    printf("Double: %.15f\n", largeDecimal);
    return 0; 
}
*/

// Rules for declaring variables in C:
// 1. Variable names must start with a letter (a-z, A-Z) or an underscore (_).
// 2. The rest of the variable name can contain letters, digits (0-9), and underscores.
// 3. Variable names are case-sensitive (e.g., `myVar` and `myvar` are different).
// 4. Avoid using reserved keywords (e.g., `int`, `return`, `if`, etc.) as variable names.
// 5. Variable names should be descriptive to enhance code readability (e.g., `totalAmount` instead of `ta`).
// 6. Variable names should not contain spaces or special characters (e.g., `@`, `#`, etc.).
// 7. Variable names should not start with a digit (e.g., `1stNumber` is invalid).
// 8. Use meaningful names that reflect the purpose of the variable (e.g., `count`, `userName`).
// 9. Use camelCase or snake_case for multi-word variable names (e.g., `totalAmount` or `total_amount`).
// 10. Keep variable names concise but clear to avoid confusion (e.g., `temp` for temporary values).
// 11. Avoid using single-letter variable names except in small scopes (e.g., `i` for loop counters).
// 12. Use underscores to separate words in variable names for better readability (e.g., `user_age`).
// 13. Be consistent with naming conventions throughout the codebase (e.g., always use camelCase or snake_case).


// Redeclaring Variables

/*
# include<stdio.h>  
int main() {
    int number = 10;         // Initial declaration
    printf("Initial Number: %d\n", number);
    
    // Redeclaring the variable with a new value
    number = 20;             // Redeclaration with a new value
    printf("Redeclared Number: %d\n", number);
    
    return 0;
}
*/

// Constants in C
/*
# include<stdio.h>
int main() {
    const int MAX_VALUE = 100; // Constant declaration
    printf("Max Value: %d\n", MAX_VALUE);
    
    // MAX_VALUE = 200; // Uncommenting this line will cause a compilation error because MAX_VALUE is a constant.
    
    return 0;
}
*/

// Keywords in C

/*
auto
break
case
char
const
continue
default
do
double
else
enum
extern
float
for
goto
if
inline
int
long
register
restrict
return
short
signed
sizeof
static
struct
switch
typedef
union
unsigned
void
volatile
while
_Alignas
_Alignof
_Atomic
_Bool
_Complex
_Generic
_Imaginary
_Noreturn
_Static_assert
_Thread_local
*/


// The boiler plate code


/*
#include<stdio.h>

int main() {
    printf("This is me");
    return 0;
}
*/

// Case in C

/*
For the intergers %d
For the characters %c
For the floating point numbers %f
For the double precision floating point numbers %lf
For the strings %s
For the hexadecimal numbers %x
For the octal numbers %o
For the unsigned integers %u
For the pointer addresses %p
For the long integers %ld
For the long long integers %lld
For the scientific notation %e
For the percentage sign %% (to print a literal % sign)
For the boolean values %d (0 for false, 1 for true)
For the wide characters %lc
For the wide strings %ls
*/

/*
#include<stdio.h>
int main() {
    int number = 10;
    printf("Integer: %d\n", number); // %d for integers
}
*/

// Inputs and Outputs in C

// In C for taking in // inputs we use the scanf function and for printing we use the printf function.

/*
#include<stdio.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);
    return 0;
}
*/



