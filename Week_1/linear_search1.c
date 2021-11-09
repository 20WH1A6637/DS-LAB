#include<stdio.h>
int LinearSearch1(int[],int,int, int);
void readArray(int[], int);
int main(){
    int a[100],n,ele;
    int result;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    readArray(a, n);
    printf("enter the value or key to search:");
    scanf("%d",&ele);
    result = LinearSearch1(a,n,ele,0);
    if(result==-1){
        printf("Element is not found");
    }
    else{
        printf("Element is found at %d position",result);
    }
}
void readArray(int a[], int n){
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int LinearSearch1(int a[],int n,int key, int i){
    if(a[i] == key){
        return i;
    }
    else if(i > n){
        return -1;
    }
    i += 1;
    return LinearSearch1(a, n, key, i);
}
