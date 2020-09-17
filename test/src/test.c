#include <stdio.h>

int main() {

    // Comments are used to tell the developer what the program is doing.
    // Comments are used to disable some portion of code without removing it. 
    /*
        This is multi line comments
        you can add many lines in this way 
    */
    printf("Hi, my name is Haresh Bhuriya\n");

    char str[100];
    int i;
    double x;

    printf("Enter a value : ");
    scanf("%d %s %lf", &i, str, &x);
    printf("\nYou entered : %d and %s and %lf\n", i, str, x);
    return 0;
}
