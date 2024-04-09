#include <stdio.h>
#include "variable_format_specifiers.c"

int main(){
    printf("Hello World\n");
    format_specifiers();
    change_values();
    printf("real life example1 -> VARIABLE: %d \n", area_rectangle());
    return 0;
}