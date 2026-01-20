#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    // To store the value in the array.
    for (int i=0;i<size;i++){
        printf("Enter the value for %d index: ",i);
        scanf("%d",&arr[i]);
    }

    // to print the value from the array
    for (int i=0;i<size;i++){
       printf("The value from index : %d is %d \n" ,i ,arr[i]);
    }
}