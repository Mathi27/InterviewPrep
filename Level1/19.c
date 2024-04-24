/* Get a three-digit number from user and make the one’s digit as 2, then print it.*/
#include<stdio.h>
int main(){
  int num;
  printf("Enter Three Digit Number :");
  scanf("%d",&num);
 
  int hundredPlace = num%1000/100;
  int tensPlace = num%100/10;
  int onesPlace = num%10;
  int res1 = hundredPlace *100;
  int res2 = tensPlace *10;
  int finalResult = res1+res2+2;
  printf("Output : %d\n",finalResult);
}