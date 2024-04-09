#include <stdio.h>

float type_conversion(){
    int a = 5; 
    int b = 3; 
    float c = (float) a/b * 100.0;
    printf("type_conversion_result %.2f \n", c); 
    return c; 

}