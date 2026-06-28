#ifndef __MAP__
#define __MAP__

void map( 
    int *restrict input, 
    int *restrict output,
    int length,
    void (*function)(int* input, int* output)
);

#endif