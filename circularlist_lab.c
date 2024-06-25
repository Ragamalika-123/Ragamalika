
#include<stdio.h>
#include<stdlib.h>
struct node {
	char data;
	struct node *next;
};

int main(){
	struct node *node1=(struct node *)malloc(sizeof(struct node));
	struct node *node2=(struct node *)malloc(sizeof(struct node));
	struct node *node3=(struct node *)malloc(sizeof(struct node));
	struct node *node4=(struct node *)malloc(sizeof(struct node));
	struct node *node5=(struct node *)malloc(sizeof(struct node));
	node1->data='g';
	node2->data='u';
	node3->data='k';
	node4->data='t';
	node5->data='r';
	struct node* head=node5;
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next = node5;
	node5->next=node1;
	printf("\nCreation of Basic Circular LinkedList : ");
	struct node *temp=head;
		do
    		{
      			 printf("%c->",temp->data);
     			 temp=temp->next;
		 }
   		 while(temp!=head);       
   		 printf("\n");
}