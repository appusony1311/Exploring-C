
#include<stdio.h>
#include<stdlib.h>
#include<process.h>

struct node
{
	int info;
	struct node *llink;
	struct node *rlink;
};

typedef struct node* NODE

void main()
{
	NODE root, temp;
	int choice, item;

	for(;;)
	{
		printf("1:Insert 2:Inorder 3:Preorder\n");
		printf("4:Delete 5:Exit\n");
		printf("Enter the Choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				printf("Enter the item to be inserted\n",
				       scanf("%d", &item);
				       root = iterative_insert(item, root);
				       break;
			case 2:
				if(root == NULL)
					printf("Tree is empty\n");
				else {
				
					printf("The given tree in tree form is\n");
						display(root, 1);
						printf("Inorder traversal is\n");
						inorder(root);
						printf("\n");
				}
                                break;


			case 3: 
				if(root == NULL)
					printf("Tree is empty\n");
				else {
					printf("The given tree is tree form is\n");
					display(root, 1);
					printf("Preorder traversal is\n");
					preorder(root);
					printf("\n");
				}
				break;
			case 4:
				printf("Enter the item to be deleted\n");
				scanf("%d", &item);
				root = delete_item(item, root);
				break;
			default: exit(0);
		}
	}
}

