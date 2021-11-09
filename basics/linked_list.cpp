#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;

	node(int val){
		data = val;
		next = NULL;
	}
};

void insert_at_tail(node* &head, int val){
	node* n = new node(val);
}

int main()
{


	return 0;
}