#include <stdio.h>

void counterFunction() {
    static int count = 0;  
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counterFunction();  
    counterFunction();  
    counterFunction();  
    return 0;
}







/**
 * count retains its value between calls to counterFunction.
 * Each time the function is called, count is incremented by one.
 */