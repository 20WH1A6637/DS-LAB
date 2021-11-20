#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL, *cur, *temp, *temp1, *t1;

struct node* create(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the value to be entered into the data of the node:\n ");
    for(int i = 0; i < n; i++){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &cur->data);
        cur->link = NULL;
        if(head == NULL){
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != NULL){
                temp = temp->link;
            }
        temp->link = cur;
        }
    }
    return head;
}

struct node* insert_begin(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = head;
    head = cur;
    return head;
}
struct node* insert_end(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = cur;
    return head;
}

struct node* insert_pos(int pos, int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    int c = 1;
    while(c < pos - 1){
        temp = temp->link;
        c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
}

struct node* delete_begin(struct node* head){
    temp = head;
    head = temp->link;
    printf("deleted element %d\n", temp->data);
    free(temp);
    return head;
}

struct node* delete_end(struct node* head){
    temp = head;
    while(temp->link != NULL){
        temp1 = temp;
        temp = temp->link;
    }
    temp->link = NULL;
    printf("deleted element %d\n", temp->data);
    free(temp);
    return head;
}

struct node* delete_pos(struct node* head, int pos){
    int c = 1;
    temp = head;
    while(c < pos){
        temp1 = temp;
        temp = temp->link;
        c++;
    }
   temp1->link = temp->link;
    printf("deleted element %d\n",temp->data);
    free(temp);
    return head;
}

void display(struct node* head){
    temp = head;
    while(temp != NULL){
        printf("%d \n", (temp->data));
        temp = temp->link;
    }
}

void reverse_display(struct node* head){
    if(head != NULL){
        reverse_display(head->link);
        printf("%d \t", head->data);
    }
}

int searching(struct node* head, int key){
    int c = 1;
    temp = head;
    while(temp != NULL){
        if(key == temp->data){
            return c;
        }
        temp = temp->link;
        c++;
    }
    return -1;
}

struct node* sorting(struct node* head){
    temp = head;
    int x;
    while(temp != NULL){
        t1 = head;
        while(t1 != NULL){
            if(t1->data > t1->link->data){
                x = t1->data;
                t1->data = t1->link->data;
                t1->link->data = x;
            }
            t1 = t1->link;
        }
        temp = temp->link;
    }
    return head;
}



int main(){
    int ch, ele, pos, key;

    while(1){
        printf("Enter your choice\n");
        printf("1: create\n2: insert_begin\n3: insert_end\n4: insert_pos\n5: delete_begin\n6: delete_end\n7: delete_pos\n8: display\n9: reverse_display\n10: search \n11: sort\n 12:exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:head = create();
                break;
            case 2:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                insert_begin(ele);
                break;
            case 3:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                insert_end(ele);
                break;
            case 4:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                printf("Enter the position: ");
                scanf("%d", &pos);
                insert_pos(pos , ele);
                break;
            case 5:head = delete_begin(head);
                break;
            case 6:head = delete_end(head);
                break;
            case 7:printf("Enter the position\n");
                scanf("%d", &pos);
                head = delete_pos(head, pos);
                break;
            case 8:display(head);
                break;
            case 9:reverse_display(head);
                break;
            case 10:printf("Enter the key to be searched: ");
                scanf("%d", &key);
                pos = searching(head, key);
                if(pos == -1){
                    printf("Element is NOT found");
                }
                else{
                    printf("Element found at %d", pos);
                }
                break;
            case 11:head = sorting(head);
                break;
            case 12:exit(0);
        }
    }

}


/*
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ gcc sll.c
harshi@LAPTOP-F7TFL89L:/mnt/c/WISE Files/ds_lab$ ./a.out
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
1
Enter the number of nodes: 5
Enter the value to be entered into the data of the node:
 10 15 20 25 30
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
2
Enter the element to be inserted: 5
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
3
Enter the element to be inserted: 35
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
4
Enter the element to be inserted: 85
Enter the position: 4
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
8
5 
10 
15 
85 
20 
25 
30 
35 
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
5
deleted element 5
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
6
deleted element 35
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
7
Enter the position
3
deleted element 85
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
8
10 
15 
20 
25 
30 
-966567072 
3 
Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
9
3       -966567072      30      25      20      15      10      Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
10
Enter the key to be searched: 30
Element found at 5Enter your choice
1: create
2: insert_begin
3: insert_end
4: insert_pos
5: delete_begin
6: delete_end
7: delete_pos
8: display
9: reverse_display
10: search 
11: sort
11
Segmentation fault
*/


