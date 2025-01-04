#include<stdio.h>
int main(){
    int i = 0xAA; 
    char c = 3;

     /* 
    [8 4 2 1 | 8 4 2 1]
    [1 0 1 0 | 1 0 1 0]
       A         A      
    */
    
    int x;
    char *cptr;

    printf("\n");
    printf("address of c: %p\n",&c);
    printf("(Garbage Value ) x = %d\n",x);
    printf("(Garbage) cptr : %p\n",cptr);
    
    // case 1:

    /* Use of & before the variable in non pointer assignment*/
    // x = i & c;
    // printf("value of x is  :%d\n",x);

    // case 2:
    /*Use of & before the variable in non pointer assignment*/
    // cptr = &c;
    
/*  x = i & cptr;  it gives error becz we can't do AND with
integer and Pointer  */ 
    // printf("%d\n",x);
    
    // case 3:
    // x = i & &c;
    // printf("%d",x);
    // invalid operands to binary expression ('int' and 'char *')
    // we cant AND int and Char.

    // case 4:
     x = i & (int)(&c);
     printf("%d\n",x);
     // it will work.but shows warning since the size is diff.

     // case 5:
     // assign pointer a valid address
     cptr = &c;
     printf("cptr = %p, &c = %p \n\n", cptr, &c);
      
      // case 6:
    //   The use of * with a pointer variable
    //  i = 2;
//   x = i * cptr;
//   printf("x = i * cptr; => %d \n\n", x);

// case 7:
 /* 5. The use of * with a pointer variable */
  // cptr = &c;
  // printf("cptr = %p, &c = %p \n\n", cptr, &c);
  // i = 2;
  // x = i * *cptr;
  // printf("x = i ** cptr; → %d \n\n", x);

//   case 8
  /* 6. The use of * with a pointer variable */
  // x = i * (*cptr);
  // printf("x = i * (*cptr); => %d \n\n", x);
  // it will work.
}