#include<stdio.h>
/* Question : Input 5 subj marks and find total and grade it  */
int main(){
    int s1,s2,s3,s4,s5;
    int total;
    printf("Enter the subject 1 Marks: ");
    scanf("%d",&s1);
    printf("Enter the subject 2 Marks: ");
    scanf("%d",&s2);
    printf("Enter the subject 3 Marks: ");
    scanf("%d",&s3);
    printf("Enter the subejct 4 Marks : ");
    scanf("%d",&s4);
    printf("Enter the subject 5 Marks :");
    scanf("%d",&s5);
    total = s1+s2+s3+s4+s5;
    printf("------- Mark Sheet : ------");
    printf("%d\n",total);
    if(total>480){
        printf("A");
    }
    else if (total > 450 && total < 480)
    {
         printf("B");
    }
    else if ( total > 400 && total < 450){
        printf("C");

    }
    else if (total>350 && total <400)
    {
         printf("D");

    }
    else{
        printf("FAIL !!");
    }
    
    

}