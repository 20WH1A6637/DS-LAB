#include<stdio.h>
int binarySearch1(int[],int,int,int);
void readArray(int[], int);
int main(){
    int n,ele,low,high;
    int result;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    int a[n];
    readArray(a, n);
    printf("enter the value or key to search:");
    scanf("%d",&ele);
    low = 0;
    high = n - 1;
    result=binarySearch1(a,ele,low,high);
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
int binarySearch1(int a[],int key,int low,int high){
    int mid;
    mid = (low + high) / 2;
    if(a[mid] < key){
        binarySearch1(a, key, mid + 1, high);
    }
    else if(a[mid] > key){
        binarySearch1(a, key, low, mid - 1);
    }
    else if(a[mid] == key){
        return mid;
    }
    else
        return -1;
}

/* OUTPUT 

cse@dbcselab:~/Desktop/20wh1a6637$ gcc binary_search1.c
cse@dbcselab:~/Desktop/20wh1a6637$ ./a.out
enter the no of elements of the array:5
Enter the elements of the array:1 2 3 4 5
enter the value or key to search:5
element is found at 4 position
cse@dbcselab:~/Desktop/20wh1a6637$
*/
