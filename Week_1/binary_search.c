#include<stdio.h>
int binarySearch(int[],int,int,int);
void readArray(int[], int);
int main(){
    int n,ele,low,high;
    int result;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    int a[n];
    readArray(a, n);
    printf("enter the value or key to search:");
    scanf("%d",&x);
    low = 0;
    high = n - 1;
    result=binarySearch(a,x,low,high);
    if(result == -1){
        printf("element is not found");
    }
    else{
        printf("element is found at %d position",result);
    }
}
void readArray(int a[], int n){
    printf("Enter the elements of the array:");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
}
int binarySearch(int a[],int key,int low,int high){
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] < key){
            low = mid + 1;
        }
        else if(a[mid] > key){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
  return -1;
}
