#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *link;
};

struct node *front = NULL, *rear = NULL, *cur;

void enqueue(){
        cur = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of data: \n");
        scanf("%d", &cur->data);
        cur->link = NULL;
        if(front == NULL){
                front = rear = cur;
        }
        else{
                rear->link = cur;
                rear = cur;
        }
}
void dequeue(){
        if(front == NULL){
                printf("Queue Underflow\n");
        }
        else if(front == rear){
                printf("Deleted element is: %d \n", front->data);
                front = rear = NULL;
        }
        else{
                printf("Deleted element: %d", front->data);
                front = front->link;
        }
}
void display(){
    cur = front;
    while(cur != NULL){
        printf("%d\n", cur->data);
        cur = cur->link;
    }
}

int main(){
	int ch, ele;
	while(1){
		printf("Enter your choice: \n");
		printf("1: enqueue\n2: dequeue\n3: display\n4: exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				if(front == NULL){
                    printf("Queue Underflow\n");
                }
                else{
					display();
				}
				break;
			case 4:
				exit(0);
		}
	}
}

/* ***OUTPUT***
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ gcc queue_sll.c
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ ./a.out
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
1
Enter the value of data: 
5
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Deleted element is: 5 
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
1 
Enter the value of data: 
10
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
1
Enter the value of data: 
20
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
1
Enter the value of data: 
30
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
1
Enter the value of data: 
40
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
3
10
20
30
40
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Deleted element: 10Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Deleted element: 20Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Deleted element: 30Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Deleted element is: 40 
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Queue Underflow
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
2
Queue Underflow
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
3
Queue Underflow
Enter your choice: 
1: enqueue
2: dequeue
3: display
4: exit
4
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ 
*/
