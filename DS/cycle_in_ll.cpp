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

//creating a cycle at postion pos
void makeCycle(node* &head, int pos){
	node* temp = head;
	node* startNode;
	int count = 1;
	while(temp->next != NULL){
		if(count == pos){
			startNode = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next = startNode;
}

//detecting cycle
bool detectCycle(node* &head){
	node* slow = head;
	node* fast = head;

	while(fast != NULL && fast->next !=NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			return true;
		}
	}
	return false;
}

//removeing cycle
void removeCycle(node* &head){
	node* slow = head;
	node* fast = head;

	do
	{
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);

	fast = head;
	while(slow->next != fast->next){
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = NULL;
	
}

int main(){
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,0);
	insertAtTail(head,7);
	insertAtTail(head,6);
	makeCycle(head, 3);
	removeCycle(head);
	display(head);
	cout << detectCycle(head) << endl;
	
	return 0;
}