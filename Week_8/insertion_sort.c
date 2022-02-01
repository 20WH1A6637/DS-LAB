#include<stdio.h>
void InsertionSort(int[],int);
int writeArray(int[],int);
int readArray(int[],int);
int main(){
    int arr[100],n;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    readArray(arr,n);
    printf("\n Elements before sorting");
    writeArray(arr,n);
    InsertionSort(arr,n);
    printf("\n Elements after sorting");
    writeArray(arr,n);
}
void InsertionSort(int a[],int n){
    int i,j,key;
    int max;
    for(i=0;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }a[j+1]=key;
    }
}

int writeArray(int a[],int n){
    int i;
    printf("\n Array elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
int readArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}


/*   ***OUTPUT***

enter the no of elements of the array:7
enter the elements of the array:56 12 32 74 85 96 33

 Elements before sorting
 Array elements are:56  12      32      74      85      96      33
 Elements after sorting
 Array elements are:12  32      33      56      74      85      96
Process returned 0 (0x0)   execution time : 11.261 s
Press any key to continue.

*/
