#include <stdio.h>
int main(){
    int n;
    printf("Emter the array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    int t;
    printf("Enter the mutiplying number: ");
    scanf("%d",&t);
    for(int j=0;j<n;j++){
        arr[j]=arr[j]*t;
    }
    int temp=0;
    for(int k=0;k<n;k++){
        for(int l=0;l<n-k-1;l++){
            if(arr[l]<arr[l+1]){
                temp=arr[i];
                arr[l]=arr[l+1];
                arr[l+1]=temp;
            }
        }
    }
    printf("The Sorted array is: ");
    for(int m=0;m<n;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}