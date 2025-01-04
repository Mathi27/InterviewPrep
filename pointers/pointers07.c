#include<stdio.h>

struct myStruct 
{
  long long int a ;
  float b ;
  char c ;

};

int main(){
    struct myStruct variable ;
    variable.a = 10;
    variable.b = 20.5;
    variable.c = 'A';
    printf("-----BEFORE-------\n");
    printf("var.a %lld\n",variable.a);
    printf("var.b %f\n",variable.b);
    printf("var.c %c\n",variable.c); 
    struct myStruct *struct_ptr = &variable;
    // if i want to change the values. 
    (*struct_ptr).a = 20;
    (*struct_ptr).b = 45.3;
    (*struct_ptr).c = 'C';
    printf("-----AFTER-------\n");
    printf("variable.a %lld\n",variable.a);
    printf("variable.b %f\n",variable.b);
    printf("variable.c %c\n",variable.c);
    printf("-----ALTERNATE SYNTAX-------\n");
    
    struct_ptr->a = 20;
    struct_ptr->b = 45.3;
    struct_ptr->c = 'C';
    printf("variable -> a %lld\n",struct_ptr->a);
    printf("variable -> b %f\n",struct_ptr->b);
    printf("variable -> c %c\n",struct_ptr->c);
}
