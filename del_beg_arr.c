#include<stdio.h>

int main(){
    int a[50],size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    if(size<1 || size>50){
        printf("Enter valid size between 1-50");
        return 1;
    }

    printf("Enter the elements in array:");
    for(i=0; i<size;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<size-1;i++){
        a[i]=a[i+1];
    }
    
    size--;

    printf("Your new array is: ");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }
    printf("\n");

    return 0;

    
}