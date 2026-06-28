#ifndef __MAP__
#define __MAP__

void map( 
    int input[], 
    int output[],
    int length,
    void (*function)(int* input, int* output)
);

#endif