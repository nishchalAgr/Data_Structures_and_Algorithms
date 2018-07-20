#include <iostream>
#include <iterator>

using namespace std;


struct node{

	int data;
	node *left;
	node *right;

};

node *top;

void insert(node *parent, int value){
	cout << 2 << endl;
	node *temp = new node;
	temp->data = value;

	if(top == NULL){

		top = temp;
		top->right = NULL;
		top->left = NULL;
		return;

	}else if(temp->data < parent->data && parent->left == NULL){

		parent->left = temp;
		return;

	}else if(temp->data > parent->data && parent->right == NULL){

		parent->right = temp;
		return;

	}


	if(temp->data < parent->data){

		insert(parent->left, value);

	}
		
	if(temp->data > parent->data){

		insert(temp->right, value);

	}


}

void search(node *parent, int value){

	if(parent->data == value){

		cout << "value found" << endl;
		return;

	}

	if(value < parent->data && parent->left != NULL){

		search(parent->left, value);

	}

	if(value > parent->data && parent->right !=NULL){

		search(parent->right, value);

	}

	if(parent->right == NULL && parent->left == NULL){

		cout << "value not found" << endl;
		return;

	}

}

void inOrderTraversal(node *parent){

	cout << 3 << endl;

	if(parent == NULL){

		return;

	}

	inOrderTraversal(parent->left);
	cout << parent->data << "\t";
	inOrderTraversal(parent->right);

}


int main(){

	insert(top, 15);
	insert(top, 22);
	insert(top, 8);
	insert(top, 14);
	insert(top, 45);
	insert(top, 11);
	insert(top, 6);

	search(top, 6);

	//inOrderTraversal(top);

	return 0;	
}