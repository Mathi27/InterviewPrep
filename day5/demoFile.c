#include<stdio.h>
int main(){
    int num;char ch;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Enter a Character : ");
    fflush(stdin);
    scanf("%c",&ch);

    return 0;
}