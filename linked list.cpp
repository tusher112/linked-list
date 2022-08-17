#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int value;
	Node *Next;
	
	//Construction creation
	Node(int val){
		value=val;
		Next = NULL;
	}
};


void insertAtTail(Node* &head,int val ){
	Node *newNode = new Node(val);
	if(head==NULL){
		head=newNode;
		return;
	}
	Node *temp= head;
	while(temp->Next != NULL){
		temp= temp->Next;
	}
	temp->Next=newNode;
}


void display(Node* n){
	while(n !=NULL){
		cout<<n->value;
		
		if(n->Next != NULL){
			 cout<<" -> ";
		}
		n=n->Next;
	}
}

int main(){
	Node* head= NULL;
	int n;
	
	char choice= 'Y';
	
	while(choice=='Y'){
		cout<<"Please enter the value ";
		cin>>n;
		
		insertAtTail(head, n);
		cout<<"Do you want to continue: Y/N ";
		cin>>choice;
	}
	
	
	//insertAtTail(head, 2);
	//insertAtTail(head, 3);
	/*Node* second= new Node();
	Node* third= new Node();
	Node* fourth= new Node();
	
	head -> value=1;
	second ->value=2;
	third ->value=4;
	fourth ->value=5;
	
	head->Next=second;
	second->Next=third;
	third->Next=fourth;
	fourth->Next=NULL; */
	
	display(head);
	
	return 0;
	
}
