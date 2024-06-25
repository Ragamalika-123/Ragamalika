#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
struct node *insertAtbegin(struct node *head,int val){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
	return head;
}
struct node *insertAtEnd(struct node *head,int val){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return head;
}
struct node *deleteAtBegin(struct node *head){
	struct node *temp=head;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
		return NULL;
	}
	else{
		head=head->next;
		free(temp);
		return head;
	}
}
struct node *deleteAtEnd(struct node *head){
	if(head==NULL){
		printf("LInked list is empty");
		return NULL;
	}
	else if(head->next==NULL){
		free(head);
		return head;
	}
	else{
		struct node *temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		return head;
	}
}
void printList(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%c->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main(){
	struct node *head,*node1,*node2,*node3;
	head = insertAtbegin(head,'u');
	head = insertAtbegin(head,'g');
	head = insertAtbegin(head,'r');
	printf("Initial linked list :");
	printList(head);
	printf("After inserting two nodes at end :\n");
	head = insertAtEnd(head,'k');
	head = insertAtEnd(head,'t');
	printList(head);
	printf("After deleting two nodes at begin :\n");
	head = deleteAtBegin(head);
	head = deleteAtBegin(head);
	printList(head);
	printf("After deleting two nodes at end :\n");
	head = deleteAtEnd(head);
	head = deleteAtEnd(head);
	printList(head);


}