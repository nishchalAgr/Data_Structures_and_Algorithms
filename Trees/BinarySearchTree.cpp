#include <iostream>
#include <iterator>

using namespace std;


struct node{

	int data;
	node *left;
	node *right;

};

node *root;

void insert(node *parent, int value){
	//cout << 2 << endl;

	node *temp = new node;
	temp->data = value;

	if(root == NULL){

		root = temp;
		root->right = NULL;
		root->left = NULL;
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

		insert(parent->right, value);

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

	insert(root, 15);
	insert(root, 22);
	insert(root, 8);
	//insert(root, 14);
	//insert(root, 45);
	//insert(root, 11);
	//insert(root, 6);

	cout << root->data << endl;

	cout << root->right->data << endl;	

	cout << root->left->data << endl;	

	//inOrderTraversal(root);

	return 0;	
}