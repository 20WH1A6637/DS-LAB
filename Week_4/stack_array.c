#include<stdio.h>
#include<stdlib.h>

#define size 5

int top = -1, stack[size];

void push(int ele){
    stack[++top] = ele;
}

int pop(){
    return stack[top--];
}

int peek(){
    return stack[top];
}

void display(){
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    int ch, ele;
    while(1){
        printf("1: push\n2: pop\n3: peek\n4: display\n5: exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:if(top == size - 1){
                        printf("Stack Overflow\n");
                }
                else{
                    printf("Enter the element to be inserted: \n");
                    scanf("%d", &ele);
                    push(ele);
                }
                break;
            case 2:if(top == -1){
                    printf("Stack Underflow\n");
                }
                else{
                    printf("Deleted element: %d\n", pop());
                }
                break;
            case 3:if(top == -1){
                    printf("Stack Underflow\n");
                }
                else{
                    printf("Top element: %d\n", peek());
                }
                break;
            case 4:if(top == -1){
                    printf("Stack Underflow\n");
                }
                else{
                    display();
                }
                break;
            case 5: exit(0);
        }
    }
}

/*   ***   OUTPUT   *** 
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ gcc stack.c
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ ./a.out
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 4
Stack Underflow
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 1
Enter the element to be inserted: 
20
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 1
Enter the element to be inserted: 
30
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 1
Enter the element to be inserted: 
40
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 4
40
30
20
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 2
Deleted element: 40
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 3
Top element: 30
1: push
2: pop
3: peek
4: display
5: exit
Enter your choice: 5
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ 

*/
