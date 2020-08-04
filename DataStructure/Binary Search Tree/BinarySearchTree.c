/*
11. Write a program to create a binary search tree (BST) by considering the keys in
given order and perform the following operations on it. (a) Minimum key (b)
Maximum key (c) Search for a given key (d) Find predecessor of a node (e) Find
successor of a node (f) delete a node with given key.
*/
#include<stdio.h>
#include<stdlib.h>
//defn of node	
struct node
{
	int info;
	struct node* left;
	struct node* right;
}*tree;
struct node*p,*q,*fp,*rp,*frp;
void insert(int x)
{
	//creating node
	q=(struct node*)malloc(sizeof(struct node));
	q->info=x;
	q->left=NULL;
	q->right=NULL;

	
	if(tree==NULL)
	{
		//inserting as root
		tree=q;
	}
	else	
	{
		//finding place
		p=tree;
		fp=tree;
		while(p!=NULL)
		{
			fp=p;
			if(x<p->info)
				p=p->left;
			else
				p=p->right;
		}
		//adjusting pointers
		if(x<fp->info)	
			fp->left=q;
		else
			fp->right=q;
	}
}
void delete(int key)
{
	int found=0;
	//1.set p and fp
	p=tree;
	fp=tree;

	//2.traverse p and fp
	//making p to point to the required node
	//maintaing fp as father of p
	while((p!=NULL)&&(p->info!=key))
	{
		fp=p;
		if(key<p->info)
			p=p->left;
		else
			p=p->right;
	}
	//key not found
	if(p==NULL)
	{
		printf("Item not found\n");
		return;
	}
	
	//key found
	//deletion starts here
	//case1:no subtree
	if((p->left==NULL)&&(p->right==NULL))
	{
		//pointer adjustment
		if(key<fp->info)	
			fp->left=NULL;
		else
			fp->right=NULL;
		
		//if root is deleted		
		if(p==tree)	
		{
			tree=NULL;
		}			
		free(p);
		return;
	}
	//case2:one subtree
	if(p->left==NULL)
	{
		//pointer adjustment
		if(key<fp->info)
			fp->left=p->right;
		else
			fp->right=p->right;
		
		//if root is deleted		
		if(p==tree)	
		{
			tree=p->right;
		}	
		free(p);
		return;
	}
	//if right subtree is empty
	if(p->right==NULL)
	{
		//pointer adjustment
		if(key<fp->info)
			fp->left=p->left;
		else
			fp->right=p->left;
		
		//if root is deleted		
		if(p==tree)	
		{
			tree=p->left;
		}	
		free(p);
		return;
	}	

	//case3:both subtrees
	if((p->left!=NULL)&&(p->right!=NULL))	
	{
		rp=p->right;//3
		frp=rp;	//3

		while(rp->left!=NULL)	//4
		{
			frp=rp;
			rp=rp->left;
		}	
		
		p->info=rp->info;	//5
		if(rp==p->right)	//6
			p->right=rp->right;
		else
			frp->left=rp->right;
		free(rp);
	}
}
void search(int key)
{	
	int found=0;
	p=tree;
	while(p!=NULL)
	{
		if(p->info==key)
		{
			found=1;
			break;
		}	
		if(key<p->info)
			p=p->left;
		else
			p=p->right;
	}
	if(found==1)
		printf("Item found\n");
	else
		printf("Item not found\n");
}	
void inorder(struct node*p)
{
	if(p==NULL)
		return;
	inorder(p->left);
	printf("%d ",p->info);
	inorder(p->right);	
}	
int main()
{
	int ch;
	//initialization of stack
	tree=NULL;	

	int x;int key;
	printf("\nWelcome to Perform Operaions on BST\n");
	while(1)
	{
		//display menu
		printf("\nMenu:\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		
		//get the choice
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		//perform the specified operation
		switch(ch)
		{
			case 1:	printf("Enter an item to insert\n");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:	printf("Enter an item to delete\n");
				scanf("%d",&key);
				delete(key);
				break;
			case 3:	printf("Enter an item to search\n");
				scanf("%d",&key);
				search(key);
				break;
			case 4:	printf("Inorder Traversal:\n");
				inorder(tree);
				break;
			case 5:	printf("Thank you for using\n\n");
				exit(0);
		}

	}
}
