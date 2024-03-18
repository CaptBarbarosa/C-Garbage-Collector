#include <stdio.h>
#include <stdarg.h>

void print_int_value(int value){ //Prints the integer value
    printf("Integer value: %d\n", value);
}

void print_double_value(double value){ //Prints the double value
    printf("Double value: %lf\n", value);
}

void print_value(char *value){ //Prints the string.
    printf("String value: %s\n", value);
}

//THe generic functions allows us to kind of overload a function. I am thinking of maybe overloading malloc to get the each of the allocated memory maybe.
#define print_generic(x) _Generic((x),\
        int: print_int_value, \
        double: print_double_value, \
        char *: print_value \
)(x)

void print_values(char *received, ...){ //I'm working with the vairadic functions here and sending it to the generic.
    va_list args;
    char *current=received;
    va_start(args, received);
    while(*current != '\0'){
        if(*current == 'i'){
            print_int_value(va_arg(args,int));
        }
        else if(*current == 'd'){
            print_double_value(va_arg(args,double));
        }
        else{
            print_value(va_arg(args,char *));
        }
        current++;
    }

    va_end(args);
}

int main(){
    //If we want to use generic functions directly.
    print_generic(10);
    print_generic(3.14);
    print_generic("Hello, world!");
    print_values("ids", 10, 3.14, "Hello, world!"); //If we want to use the variadic functions.

    return 0;
}
