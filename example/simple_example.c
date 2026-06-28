#include <stdio.h>
#include "map.h"
#include "macros.h"

// define a simple function
// that adds integers
void sum(int* input_pointer, int* output_pointer) {
    *output_pointer =  *input_pointer + 1;
};

int main() {
    
    // input array
    int input_array[3] = { 5, 10, 15 };	
    int output_array[3] = {0, 0, 0};

    // points
    int *input_pointer = input_pointer;
    int *output_pointer = output_pointer;
    int length = array_size(output_array);


    map(
        /* input    */ input_array, 
        /* output   */ output_array, 
        /* lenght   */ length, 
        /* function */ sum
    );

    for (int i = 0; i < 3; i++) {
        printf("Original: %d \t New: %d \n", input_array[i], output_array[i]);
    }
        

    return 0;

}