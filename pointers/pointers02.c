#include<stdio.h>

int main(){
    int i = 0xAA; // 1010 1010
    char c = 3;  // 3

    int x;   
    char *cptr; 

    printf("\n");
    printf("Address of c (&c) = %p \n");
    printf("(Garbage) x=%d\n",x); // x not initialized with value
    printf("(Garbage) cptr= %p\n",cptr);// not initalized or mapped
    printf("(Garbage) cptr= 0x%llx \n\n",(long long unsigned int)cptr);
    x = i &c;
    printf("x = i &c;-> %d\n\n",x);
}
/**
 * 1. use of & before the variable in non pointer assignment .
   x = i &c; // it is logicalAND , it is not a pointer.
  becz i = 0xAA  1010 1010
       c = 3            11
  Logical AND           10 -> ans is 2

  2.use of & before the variable in non pointer assignment .
  cptr = &c;
  x = i & cptr; // we cant AND intger and pointer.
  printf("x = i & cptr; -> %d\n\n",x);
  x = i & &c; // we also cant do this it is 
               int and char pointer
               first & is logical AND
               second & is address of

  i = 0xff //  
  x = i & (int)&c; // typeCasting
 Here anding operation worked by typecasting with warning.
  
  3. Assign pointer a valid address 
  cptr = &c 

  4. The use of * with a pointer variable 
  i = 2
  x=i * cptr; // it is seen as multiplication first.
  print("x=i * cptr; => %d\n\n",x);
  ERROR : invalid operands to binary * (have 'int' and 'char *');
  
  5. The use of * with a pointer variable 
  x = i * *cptr;
  first * is taken as multiplication operator
  second * is taken as DeReferencing operator

  6. The Use of * with a pointer variable 
  x = i * (*cptr); it is same as above but it is 
  given in the parenthesis for readability purpose.
  printf("x= i * (*cptr); => %d\n\n",x);
 */ 