#include<bits/stdc++.h>
using namespace std;

//creating node
class node{
	public:
		int data;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};

//insert at tail or, end
void insertAtTail(node* &head, int val){
	node* n = new node(val);
	
	if(head == NULL){
		head = n;
		return;
	}

	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}

//display LL
void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

//insert at head
void insertAtHead(node* &head, int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}

//Searching
bool search(node* head, int key){
	node* temp = head;
	while (temp != NULL)
	{
		if(temp->data == key){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

//delete head node
void deleteAtHead(node* &head){
	node* todelete = head;
	head = head->next;
	delete todelete;
}

//delete node
void deletion(node* &head, int val){
	if(head == NULL) return;
	//delete head node
	if(head->data == val || head->next == NULL){
		node* todelete = head;
		head = head->next;
		delete todelete;
		return;
	}
	//delete node from != head
	node* temp = head;
	while(temp->next->data != val){
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}

//reversing LL using iterative way
node* reverse(node* &head){
	node* prev = NULL;
	node* curr = head;
	node* next;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	return prev;
}

//reversing LL using recursive way
node* reverseRecursive(node* &head){

	if(head == NULL || head->next == NULL){
		return head;
	}

	node* newhead = reverseRecursive(head->next);
	head->next->next = head;
	head->next = NULL;
	return newhead;
}

//reverse k nodes in a LL
node* reversek(node* &head, int k){
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;

	int count = 0;
	while(currptr != NULL && count < k){
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
		 count++;
	}
	
	if(nextptr != NULL) head->next = reversek(nextptr, k);

	return prevptr;
}

int main(){
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,0);
	display(head);
	insertAtHead(head, 9);
	insertAtHead(head, 6);
	display(head);
	cout << search(head, 6) << endl;
	// deletion(head, 6);
	display(head);
	/*int k = 2;
	node* newhead = reversek(head, k);
	display(newhead);*/
	

	
	return 0;
}