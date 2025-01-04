#include<stdio.h>

int main(){
   
    char c = 'A';
    char * c_ptr; // pointer  - *c_ptr is a pointer.
    c_ptr =&c; 
    
    /* after assigning -> if we use & it is address_of  */


    printf("c=%c \n address of c: %p \n",c ,&c);
    
    // value is 'A'
    // address can be like this : 0x16f85f30b
    printf("c_ptr=%p\n",c_ptr);

    // Let's Print the address of c_ptr 
    printf("Address of c_ptr : %p\n",&c_ptr);
    // address of c_ptr : 0x16b953300
    
    /* 
    during definition it is pointer.
    when we use star anywhere but not before assining it is dereference operator.
      When we use *c_ptr before assigning , then it is called pointer.
      but if we use after assigning , then it is called Dereference 
      operator (value at).


       char * c_ptr = &c; Definition -> becz we are right when we are stating the value.
       or if we do like this:

       chat *c_ptr; // it is called declaration
       *c_ptr = &c; // it is not correct.
       if we are not assigning the value during that time we have to
       use this syntax.
       c_ptr =  &c; //it is like take that variable and just load the value inside
       that variable .and dont use *c_ptr = &c;

    */
    printf("value at c_ptr:%c\n",* c_ptr);
    
    return 0;

}