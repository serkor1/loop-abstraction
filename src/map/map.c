#include "map.h"

void map( 
    int input[], 
    int output[],
    int length,
    void (*function)(int* input, int* output)
) {
    // extract pointers to input/output
    // arrays
    int *input_pointer = input;
    int *output_pointer = output;

    for (int i = 0; i < length; i++) {
         function(
            /* input */ input_pointer,
            /* output */ output_pointer
        );

        // increment pointers
        // to move the location 
        // in memory
        output_pointer++;
        input_pointer++;
    } 
}