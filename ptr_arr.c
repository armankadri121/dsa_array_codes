#include<stdio.h>

int main(){
    int a[5],i;
    int *q=a;
    printf("Enter the elements of array:");
    for(i=0;i<5;i++){
        scanf("%d",(a+i)); //&a[i],(i+a),(q+i),&q[i]
    }

    printf("Elements of array are:");
    for(i=0;i<5;i++){
        printf(" %d",*(q+i));  //a[i],*(a+i),i[a],i[q]
    }
    return 0;
}