#include<stdio.h>
// Function Prototype:
int add(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main(){
    // Function Call:
    int total = add(10,20);
     
    printf("%d",total);
     
}
// Function Definition:
int add(int a, int b){
    return a+b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}
int modulus(int a, int b){
    return a%b;
}
/**
 * TO avoid repeting we should use : FUNCTIONS
 * 
 * 1. write function outside the main(){}
 * 
 */
/**
 * it used -> Code Reusability 
 *         -> Modularity 

instead of writing the saming logic again and again.!

we write that particular logic in one container. 
we use-> where-ever we want

-> subroutine calls. 
 */