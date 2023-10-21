#include<stdio.h>

int BinarySearch(a,n,data);
int main(){
    BinarySearch();
    return 0;

    }

int BinarySearch(a,n,data){
        
        int a[]={5,9,17,23,25,45,59,63,71,89};
        int n=10;
        int l=0,r=n-1;

        printf("Enter the element you want to search:");
        scanf("%d",&data);
        while (l<r)
        {
            mid=(l+r)/2;
            if(data==a[mid]){
                return mid;
            }
            else if (data<a[mid])
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            return -1;
            
        }

}
