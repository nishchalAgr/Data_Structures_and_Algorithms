#include <iostream>
#include <iterator>

using namespace std;

int const MAX = 10;

struct node{

	int data;
	node *next;
	node *back;

};

class stacks{
	//in here, the top is equal to the tail
	private:

		node *head, *top;

	public:
	stacks(){
		
		head = NULL;
		top = NULL;

	}

	int numOfElements(){

		node *temp = new node;

		temp = head;

		int i = 0;

		while(temp != NULL){

			i++;
			temp = temp->next;

		}

		return i;

	}

	void push(int value){

		if(numOfElements() == MAX){

			cout << "Stack Overflow" << endl;

		}

		node *temp = new node;
		node *previous = new node;

		temp->data = value;
		temp->next = NULL;
		temp->back = NULL;

		if(top == NULL){

			head = temp;
			top = temp;
			temp = NULL;

		}else{

			previous = head;
			top->next = temp;
			top = temp;

			while(previous->next != top){

				previous = previous->next;

			}

			top->back = previous;

		}

	}

	void pop(){

		if(top == NULL){

			cout << "Stack Underflow" << endl;
			return;

		}else{

			top = top->back;

		}

	}

	void display(){

		node *temp = new node;
		
		temp = top;

		while(temp != NULL){
			//prints out the value temp is pointing to, and then makes temp point to the next node
			cout << temp->data << endl;
			temp = temp->back;

		}

		cout << endl;

	}

};

class list{

	private:
	node *head, *tail;

	public:
	list(){

		head = NULL;
		tail = NULL;

	}

	void createnode(int value){

		node *temp = new node;

		temp->data = value;
		temp->next = NULL;

		//checks for empty list
		if(head == NULL){

			head = temp;
			tail = temp;
			temp = NULL;

		}else{
			//makes the tail's pointer equal to temp, and then makes temp the new tail	
			tail->next = temp;
			tail = temp;

		}

	}

	void display(){

		cout << "head is :" << head->data << endl;

		node *temp = new node;
		
		temp = head;

		while(temp != NULL){
			//prints out the value temp is pointing to, and then makes temp point to the next node
			cout << temp->data << " ";
			temp = temp->next;

		}

		cout << endl;

	}

	void deleteNode(int index){

		node *previous = new node;
		node *current = new node;

		current = head;

		for(int i = 0; i < index; i++){

			previous = current;
			current = current->next;

		}

		previous->next = current->next;

	}

	void insertNode(int value, int index){

		node *current = new node;
		node *previous = new node;

		previous = head;
		current->data = value;

		for(int i = 0; i < index; i++){

			current->next = current->next;
			
			if(i < index -1){

				previous = previous->next;

			}


		}

		current->next = previous->next;
		previous->next = current;

	}

	void linearSearch(int value){

		int i = 0;	

		if(head == NULL){

			cout << "No elements are in the linked list" << endl;

		}else{

			
			node* current = new node;
			current = head;

			int check = 0;

			while(check == 0){

				if(current->data == value){

					cout << "value found at index " << i << endl;
					return; 

				}

				current = current->next;
				i++;

				if(current->next == NULL){

					check = 1;

				}

			}
		
		}

		if(tail->data == value){

			cout << "value found at index " << i << endl;
			return;

		}

		cout << "value not found in linked list " << endl;

	}



};

int main(){

	stacks arr;

	arr.push(3);
	arr.push(7);
	arr.push(1);
	arr.push(8);
	arr.push(0);
	arr.push(2);

	arr.display();

	arr.pop();

	arr.display();

	return 0;

}

