#include<stdio.h>
#include<stdlib.h>

#define REQUEST 2*1024*1024*1025
int main(){


    int *p =(int *) malloc(REQUEST);

    printf("Value : %p\n",p);
    // *p = 4;

    free(p);

    return 0;
}
/**
 * 
 * if malloc() failes , it will return 
 * (void *)0x0 -> it mean NULL
 * p would be pointing to memory location 0x0
 * 
 * 
 * malloc (size_t size)
 *   size_t -> UnSigned int.
 *    -> size_t is a type def.
 * 
 */