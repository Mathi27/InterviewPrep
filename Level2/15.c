/* 
Write a program to get a number from user and if the last digit of the
number is even print the same number. If the last digit of the number is
odd then subtract 1 from the last digit and print the number.
(Note: Last digit -MSB)

Input : 123456 - Output – 023456 
Input : 96895439- Output – 86895439
Input : 675 – Output - 675
Input : 575 – Output - 475
*/

#include<stdio.h>
#include<math.h>
int main(){
    int number,firstDigit,lastDigit;
    printf("Enter a number :");
    scanf("%d",&number);
    //extract first Digit (unit digit) -> LSB
    firstDigit = number%10;
    // printf("Debug print First Digit %d\n",firstDigit);
    //extract last Digit 
    // check if there is more than one digit present in number.
    
    int digit =0;
    int temp = number;
    while (temp >=10)
    {
        digit++;
        temp =  temp /10;
        lastDigit = temp;
             
    }
//   printf("Debug print Last Digit : %d\n",lastDigit);
    if(lastDigit % 2 == 0){
        printf("%d\n",number);
    }else{
        int storeSubValue = lastDigit - 1;
        // printf("debug:(sub value) %d\n",storeSubValue);
        // remove the MSB:
        int removeLastDigit = pow(10,digit);
        //    printf("debug print :(1) %d\n",removeLastDigit); 
     
        int RemainingNumber = number % removeLastDigit; 
        //    printf("debug print:(RemainingNumber) %d\n",RemainingNumber); 
        
           printf("%d%d\n",storeSubValue,RemainingNumber);
    }
    
    
}
 