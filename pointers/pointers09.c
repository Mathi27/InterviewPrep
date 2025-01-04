/* Function Pointers - II 
 Here i used Arguments/Parameter
*/
#include<stdio.h>

int function_1(int a,int b){

    return a + b;

}

int function_2(int x, int y){

    return x*y;
}
int main(){
      
      int (*func_ptr)(int x,int y);
      func_ptr = &function_1;
      int result =  func_ptr(2,2);

    
    func_ptr = &function_2;
    int result2 = func_ptr(5,5);

    printf("Result 1 : %d\n",result);
    printf("Result 2 : %d\n",result2);

}