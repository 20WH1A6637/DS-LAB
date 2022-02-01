#include<stdio.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL, *temp, *cur;

struct node* create(){
	cur = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: \n");
	scanf("%d", &cur->data);
	cur->left = NULL;
	cur->right = NULL;
	if(root == NULL){
		root = cur;
	}
	else{
		temp = root;
		while(temp != NULL){
			if(cur->data < temp->data && temp->left == NULL){
				temp->left = cur;
				return root;
			}
			else if(cur->data < temp->data && temp->left != NULL){
				temp = temp->left;

			}
			else if(cur->data >temp->data && temp->right == NULL){
	  			temp->right = cur;
				return root;
			}
			else if(cur->data > temp->data && temp->right != NULL){
				temp = temp->right;

			}
		}
	}
}

void preorder(struct node *root){
	if(root != NULL){
		printf("%d\n", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node *root){
	if(root != NULL){
		inorder(root->left);
		printf("%d\n", root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\n", root->data);
	}
}

int main(){
	int n, ch;
	while(1){
		printf("Enter your choice: \n");
		printf("1: Create\n2: Preorder\n3: Inorder\n4:Postorder\n5: Exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				root = create();
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(0);
		}
	}

}

/* ***OUTPUT***
cse@cselab:~/Desktop$ ./a.out 
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
1
Enter the data: 
5
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
1
Enter the data: 
2
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
1
Enter the data: 
3
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
1
Enter the data: 
6
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
2
5
2
3
6
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
3
2
3
5
6
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
4
3
2
6
5
Enter your choice: 
1: Create
2: Preorder
3: Inorder
4:Postorder
5: Exit
5
cse@cselab:~/Desktop$
*/
