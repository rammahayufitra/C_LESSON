#include <stdio.h>
#include "variable_format_specifiers.c"
#include "data_type.c"
#include "constan.c"
#include "boolean.c"

int main(){
    printf("Hello World\n");
    format_specifiers();
    change_values();
    printf("real life example1 -> VARIABLE: %d \n", area_rectangle());
    printf("-----------------data_type-------------------------- \n");
    type_conversion();
    printf("-----------------constan-------------------------- \n");
    constan_example();
    printf("-----------------boolean-------------------------- \n");
    boolean_example(10,20);
    return 0;
}