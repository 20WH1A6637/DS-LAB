#include<stdio.h>
int LinearSearch(int[],int,int);
void readArray(int[], int);
int main(){
    int a[100],n,i,ele;
    int result;
    printf("enter the no of elements of the array:");
    scanf("%d",&n);
    readArray(a, n);
    printf("enter the value or key to search:");
    scanf("%d",&ele);
    result=LinearSearch(a,n,ele);
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
int LinearSearch(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if (a[i]==key){
            return i;
        }
    }return -1;
}

/*OUTPUT

cse@dbcselab:~/Desktop/20wh1a6637$ ./a.out
enter the no of elements of the array:6
Enter the elements of the array:1 8 3 9 6 2 
enter the value or key to search:9
Element is found at 3 position
cse@dbcselab:~/Desktop/20wh1a6637$ ./a.out
enter the no of elements of the array:5
Enter the elements of the array:41 52 63 98 74
enter the value or key to search:100
Element is not found
cse@dbcselab:~/Desktop/20wh1a6637$ 

*/
