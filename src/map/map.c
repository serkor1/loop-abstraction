#include "map.h"

void map( 
    int *restrict input, 
    int *restrict output,
    int length,
    void (*function)(int* input, int* output)
) {

    for (int i = 0; i < length; i++) {
         function(
            /* input */ input,
            /* output */ output
        );

        // increment pointers
        // to move the location 
        // in memory
        output++;
        input++;
    } 

}