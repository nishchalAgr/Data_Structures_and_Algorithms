#include <iostream>
#include <iterator>

using namespace std;


struct node{

	int data;
	node *left;
	node *right;

};

node* nodeCreator(int value){

	node *temp = new node;

	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;

	return temp;

}

void inOrderTraversal(node *top){

	if(top == NULL){

		return;

	}

	inOrderTraversal(top->left);
	cout << top->data << "\t";
	inOrderTraversal(top->right);

}

void preOrderTraversal(node *top){

	if(top == NULL){

		return;

	}

	cout << top->data << "\t";
	inOrderTraversal(top->left);
	inOrderTraversal(top->right);

}

void postOrderTraversal(node *top){

	if(top == NULL){

		return;

	}
	
	inOrderTraversal(top->left);
	inOrderTraversal(top->right);
	cout << top->data << "\t";	

}

int main(){

	node *root = nodeCreator(56);
	root->left = nodeCreator(95);
	root->right = nodeCreator(27);
	root->left->left = nodeCreator(22);

	inOrderTraversal(root);

	cout << endl;

	return 0;

}