#include<stdio.h>
void SelectionSort(int[],int);
void swap(int *,int *);
int writeArray(int[],int);
int readArray(int[],int);
int main(){
    int arr[100],n,i,round;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    readArray(arr,n);
    printf("\n Elements before sorting");
    writeArray(arr,n);
    SelectionSort(arr,n);
    printf("\n Elements after sorting");
    writeArray(arr,n);
}
void SelectionSort(int a[],int n){
    int i,j;
    int max;
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(a[j]>a[max])
                max=j;
        }
    swap(&a[i],&a[max]);
    }
}
void swap(int* n1,int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
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
enter the elements of the array:45 52 63 51 69 96 33

 Elements before sorting
 Array elements are:45  52      63      51      69      96      33
 Elements after sorting
 Array elements are:96  69      63      52      51      45      33
Process returned 0 (0x0)   execution time : 14.989 s
Press any key to continue.

*/
