#include <stdio.h>

void format_specifiers(){
    int a   = 10;
    float b = 15.5; 
    char c  = 'A';
    printf("print data type integer %d, float %f, and char %c \n", a, b,c);
}

void change_values(){
    int a   = 10; 
    int b   = 20; 
    int sum = a + b;
    printf("change values %d \n", sum);
}

int area_rectangle(){
    printf("calculate the area of rectangle \n");
    int length = 4; 
    int width  = 6; 
    int area   = length * area; 
    return area; 
}