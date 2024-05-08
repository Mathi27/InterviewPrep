/*
Get a number from user and check whether the digits are in
ascending order.
*/
#include<stdio.h>
int checkAscending2(int num);
int checkAscending(int num);
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    int x = checkAscending(num);
    if(x){
        printf("Ascending Order\n");
    }else{
        printf("Not Ascending Order\n");
    }
    return 0;
}
int checkAscending(int num){
    int count = 0;
    int digits = 0;
    while (num!=0)
    {
    
        int extract = num % 10;
        digits++;
        /* 
        1234 -> asscending
        4321.
        first digit smaller than seconddigit. -> asscending.
         */
        int tens = (num/10)%10;
        if(extract>tens){
            count++;
        }
        

        num = num / 10;
    }
    if(count == digits){
        return 1;
    }
    return 0;
}
// other approch.
int checkAscending2(int num) {
    int prevDigit = 10; // Initialize with a value greater than any possible digit
    while (num > 0) {
        int digit = num % 10;
        if (digit >= prevDigit) {
            prevDigit = digit;
            num /= 10;
        } else {
            return 0; // Not in ascending order
        }
    }
    return 1; // All digits are in ascending order
}