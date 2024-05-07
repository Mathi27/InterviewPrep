/*
Get a four-digit number from user and only reverse the 
first two digits of the number, then print the number.

Input: 9561 Output 9516. 
Input: 3859 Output: 3895.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter 4 digit number : ");
     // take input from the user.
    scanf("%d",&num);
    int ones = (num%10); // extract and return the ones digit
    int tens = (num/10)%10; // extract and return the tens digit
    int hundred = (num/100)%10; // extract and return the hundred digit
    int thousand = (num/1000)%10; // extract and return the thousand digit . here mod is not mandatory.
    
    int thRes = thousand * 1000;
    int hunRes = hundred * 100;
    int oneRes = ones * 10;
    int addRes = thRes + hunRes + oneRes + tens;
    /*
    Debug :
    printf("Ones digit : %d\n",ones);
    printf("Tens digit : %d\n",tens);
    printf("Hundred Digit : %d\n",hundred);
    printf("Thousand Digit : %d\n",thousand);
    */ 


    printf("%d\n",addRes );
    return 0;
}