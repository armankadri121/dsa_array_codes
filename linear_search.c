#include<stdio.h>

int main(){
    int a[]={15,5,20,35,2,42,67,17};
    int n=8;
    int found=0;
    int data,i;

    printf("Enter the element to find:");
    scanf("%d",&data);

    for(i=0;i<n;i++){
        if(a[i]==data){
            printf("Element found at index: %d",i);
            found=1;
            break;
        }
    }

    // if(i==n){
    //     printf("Element not found");
    // }

    if(found==0){
        printf("Element not found");
    }
    return 0;
}