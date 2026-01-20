#include<stdio.h>
// Function prototype:
int add(int number1 , int number2 );
void add2(int n1 , int n2);
int add3();
int add4();

int main(){
   int a = 10;
   int b = 234;
   int total = add(a,b);  // 244
   printf("%d",total);

}
// function with parameter and with return type.
int add(int number1 , int number2 ){
     int res = number1 + number2;
     return res;
}
// function with parameter and without return type
void add2(int n1 , int n2){
     int x = n1 + n2;
     printf("%d",x);
}
// Function without parameter and with return type
int add3(){
  int a = 12;
  int b = 34;
  int x = a + b;
  return x;
}
// Function without parameter and without return type
int add4( ){
  int a = 12;
  int b = 34;
  int x = a + b;
  return x;
}
// Functions: it is a code block which present outside the main .

/**
 *  syntax: 
 *   datatype: void , int, char , float , whatever , 
 *       dataType functionName(parameters if needed)
 *       {
 * 
 *       }
 * 
 * 
 */