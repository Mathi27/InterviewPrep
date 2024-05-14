/* Topic : Declaring & Defining a Pointer */
#include<stdio.h>
int main(){
    char c = 'A';
    char *  c_ptr  =   &    c;

    printf("c = %c and Address of c(&c): %p\n",c,&c); // value of c and address of the c 
    printf("address of c : %p\n",c_ptr); // pointer variable 
    printf("Location of c_ptr : %p\n",&c_ptr);
    // value at c_ptr:
    printf("Value at c_ptr: %c\n",*c_ptr);

    return 0;
}
 
 