#include <iostream>
#include <iterator>
#include <iomanip>

using namespace std;

 // void heapify(node *top);
 // void isMax(node *top);
 // void swap(node* one, node* two);

struct node{

	int data;
	node *left;
	node *right;

};

void swap(node* one, node* two){

	//cout << 5 << endl;

	one->data = one->data + two->data;
	two->data = one->data - two->data;
	one->data = one->data - two->data; 

}


void isMax(node *top){

	if(top->left == NULL){

		if(top->right->data > top->data){

			swap(top->right, top);
			return;

		}

	}else if(top->right == NULL){

		//cout << 3 << endl;

		if(top->left->data > top->data){

			//cout << 4 << endl;

			swap(top, top->left);
			return;

		}

	}else if(top->left->data > top->data || top->right->data > top->data){

		if(top->left->data > top->right->data){

			swap(top->left, top);
			return;

		}else if(top->right->data >= top->left->data){

			swap(top->right, top);
			return;

		}

	}

	return;

}


void heapify(node *parent){

	//cout << 3 << endl;

	if(parent->right == NULL && parent->left == NULL){
		//cout << 3.25 << endl;
		return;

	}else{

		//cout << 3.5 << endl;

		isMax(parent);
	
		if(parent->left != NULL){
			
			//cout << 4 << endl;
			heapify(parent->left);
		
		}
		
		if(parent->right != NULL){
			
			//cout << 5 << endl;
			heapify(parent->right);
		
		}
	
	}

}

node* nodeCreator(int value){

	node *temp = new node;

	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;

	cout << 1 << endl;

	return temp;

}

node* nodeCreator(int value, node *top){

	node *temp = new node;

	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;

	cout << 2 << endl;

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

int main(){


	node *root = nodeCreator(56);
	root->left = nodeCreator(95, root); heapify(root);
	root->right = nodeCreator(100, root); heapify(root);
	//root->left->left = nodeCreator(22, root);
	//root->left->right = nodeCreator(68, root);

	//isMax(root);

	//swap(root, root->left);

	heapify(root);

	cout << "root: " << root->data << endl;
	cout << "left: " << root->left->data << endl;
	cout << "right: " << root->right->data << endl;

	cout << endl;

	return 0;

}