 /* 
Write a program to get a number from user and if the last digit of the
number is even print the subtract 1 from LSB (first digit). 
If the last digit of the number is odd then subtract 1 from the last digit (MSB) and print the number.
(Note: Last digit -MSB , First Digit  - LSB)
example : 45678 , Here 4 is MSB and 8 is LSB

Test Case : 
Input : 45678 , Output : 45677
Input : 32169 , Output : 22169
*/
#include<stdio.h>
#include<math.h>
int main(){
    int number,firstDigit,lastDigit,digit=0;
    printf("Enter a number : ");
    scanf("%d",&number);
    // extract LSB
    firstDigit = number % 10;
    // printf("debug first Digit : %d\n",firstDigit);

    int tempStoreNumber= number;
    while (tempStoreNumber >=10)
    {  
        digit++;
        tempStoreNumber = tempStoreNumber / 10;
        lastDigit = tempStoreNumber;
    }
    // printf("debug last Digit : %d\n",lastDigit);
    if(lastDigit % 2 == 0){
         //subtract 1 from LSB (First digit). 
         printf("%d\n",number - 1);
    }else {
        // subtract 1 from MSB (Right Digit).
        int storeSubValue = lastDigit - 1;
        // remove the last digit .
        int removeMSB = pow(10,digit);
        int RemainingNumbers = number % removeMSB;
        printf("%d%d\n",storeSubValue,RemainingNumbers);

 }
    return 0;
}
 