#include <iostream>

using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtHead(node*&head,int data){
	node* n = new node(data);
	n->next = head;
	head = n;
}

void display(node* head){
	node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

void insertAtTail(node*&head,int data){
	if(head==NULL){
		insertAtHead(head,data);
		return;
	}

	node* tail = head;

	while(tail->next!=NULL){
		tail = tail->next;
	}

	node* n= new node(data);
	tail->next = n;

}
void deleteAttail(node*&head)
{
	node* tail=head;
	node* prev=NULL;
	while(tail->next!=NULL)
	{
		prev=tail;
		tail=tail->next;

	}
	delete tail;
	prev->next=NULL;
	
}
// void rev(node*&head)
// {
//    node* prev = 

// }
node* merge(node* a, node* b)
{
	node* c;
	if(a->next==NULL )
		return b;
	if(b->next==NULL)
		return a;


	if(a->data>b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;

}
bool search(node*head,int data)
{
	while(head!=NULL)
	{
		if (head->data==data)
		{
			return 1;
		}
		head=head->next;
	}
	return 0;
}
bool recur(node*head,int data)
{
	if (head->next==NULL)
	{
		return 0;
	}
	if (head->data==data)
	{
		return 1;
	}
	else
	{
			return recur(head->next,data);
	}
	
}
node* mid(node*head)
{
	node* prev=head;
	node*temp=head;
	while(temp->next!=NULL && temp->next->next!=NULL)
	{
		prev=prev->next;
		temp=temp->next->next;
	}
	return prev;
}
int main(){

	node* a = NULL;
	node* b = NULL;
	// insertAtTail(head,12);
	// display(head);

	insertAtHead(a,);
	insertAtHead(a,);
	insertAtHead(a,);
	insertAtHead(a,);

	// display(head);

	insertAtTail(a,);
	insertAtTail(a,);


	insertAtHead(b,);
	insertAtHead(b,);
	insertAtHead(b,);
	insertAtHead(b,);

	// display(head);

	insertAtTail(b,);
	insertAtTail(b,);


	

	// deleteAttail(head);

	// display(head);
	// if(recur(head,3)){
	// 	cout<<" found ";
	// }
	// else
	// 	cout<<" not found ";

    // node*temp=mid(head);
    // cout<<temp->data;

    node* h=merge(a,b);
    display(h);


	return 0;
}
