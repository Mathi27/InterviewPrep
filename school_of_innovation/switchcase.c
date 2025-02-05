#include<stdio.h>
/**
 *   1- addition
 *   2 - sub
 *    3-  multiply
 *    4- divide (give quotient)
 *    5 - modulus (give remainder)
 *    default: 
 * 
 */
int main(){
    
     int choice;  // you can get the number 1, 2, 3,4,5 from the user
     printf("1. Addition\n");
     printf("2. SUb\n");
     printf("3. Mul\n");
     printf("4. divide ( qoutinet )\n");
     printf("5. modulus (reminder )\n");
     printf("Enter your choice: ");
     scanf("%d",&choice);
     int a,b , result;
     print("Enter the number 1:");
     scanf("%d",&a);
     printf("Enter the number 2:");
     scanf("%d",&b);

     switch(choice){
         case 1:
            result = a + b;
            printf("The result of addition is : %d",result);
            break;
        case 2:
            result = a  - b;
            printf("The result of sub is : %d",result);
            break;
        case 3:
            result = a * b ;
            printf("The Result of multiplication is :%d",result);
            break;
        case 4:
            result = a / b;
            printf("The result of division is : %d",result);
            break;
        case 5:    
            result = a % b;
            printf("The result of modulus is : %d",result);
            break;
        default:
            printf("Invalid choice");
            break;
     }


}

