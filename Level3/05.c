/*
Get a number from user and count the number of zeros in that number
and print. Write your code inside the function. Do not Change the
format.
Input: 100 Output: 2 . Input: 1060030 Output: 4.
*/
#include<stdio.h>
int countZeros(int val);
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int result = countZeros(num);
    printf("Number of zeros in that number : %d\n",result);
}
int countZeros(int val){
    int count = 0;
   while (val!=0)
   {
     int extract = val % 10;
     if(extract == 0){
        count ++;
     }
     val = val / 10;
   }
   return count;
}
 // give pull request for handling corner cases.