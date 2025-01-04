#include<stdio.h>
#include<stdlib.h>

int main(){
    char *p[10];

    printf("p: %p\n",p);

    for(int i=0;i<10;i++){
     p[i] = (char *)malloc(1);
     *p[i] = (10-i);
     printf("*p[%d]: %p\n",i,*p[i]);
    }

    for(int i=0;i<10;i++){
        free(p[i]);
    }
}