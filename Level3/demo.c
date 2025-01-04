 #include<stdio.h>
 int main(){
    int a = 10;
    int b = 20;
    int addRes = add(a,b);
    int subRes = sub(a,b);
    printf("%d",addRes);
    printf("%d",subRes);
     }

 // function for addition
 int add(int x,int y){
    int result = x + y;
    return result;
 }
 // function for sub 
 int sub(int x , int y ){
    int result = x - y;
    return result;
 }
/*

q: To count no of zeros present in the user entered digit 
  and u need to create function for this.

 //  3 4 5 0 0 8 



  checkForZeros(int num){
     if(....%10){
       count ++

     }
     n = n/10;
  }







 */