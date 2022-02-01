#include<stdio.h>
void bubblesort(int[],int);
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
    bubblesort(arr,n);
    printf("\n Elements after sorting");
    writeArray(arr,n);
}
void bubblesort(int a[],int n){
    int i,j;
    int swapped = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                swapped += 1;
            }
        }
    if(swapped==0)
        break;

    printf("\n After round = %d",i+1);
    writeArray(a,n);
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
enter the elements of the array:56 23 41 89 10 24 33

 Elements before sorting
 Array elements are:56  23      41      89      10      24      33
 After round = 1
 Array elements are:23  41      56      10      24      33      89
 After round = 2
 Array elements are:23  41      10      24      33      56      89
 After round = 3
 Array elements are:23  10      24      33      41      56      89
 After round = 4
 Array elements are:10  23      24      33      41      56      89
 After round = 5
 Array elements are:10  23      24      33      41      56      89
 After round = 6
 Array elements are:10  23      24      33      41      56      89
 After round = 7
 Array elements are:10  23      24      33      41      56      89
 Elements after sorting
 Array elements are:10  23      24      33      41      56      89
Process returned 0 (0x0)   execution time : 23.911 s
Press any key to continue.

*/
