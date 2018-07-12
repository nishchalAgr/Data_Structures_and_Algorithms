#include <iostream>
#include <iterator>

using namespace std;

const int MAX = 10;

struct doubleNode{

	int data;
	doubleNode *next;
	doubleNode *back;

};

struct node{

	int data;
	node *next;

};

class queues{

	private:
		int front;
		int rear;
		node *head, *tail;

	public:
		queues(){
			front = -1;
			rear = -1;
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

			//cout << head->data << endl;

		}

		void enqueue(int value){

			if(rear == MAX - 1){

				cout << "Queue overflow" << endl;
				return;

			}else if(front == -1){

				front = 0;

			}

			rear++;
			createnode(value);

		}

		void display(){

			if(front < 0 || front > rear || head == NULL){

				cout << "No elements in queue" << endl;
				return;

			}

			node *temp = new node;
			
			temp = head;

			int i = 0;

			while(temp != NULL){

				//prints out the value temp is pointing to, and then makes temp point to the next node
				if(i >= front && i <= rear){

					cout << temp->data << endl;

				}

				temp = temp->next;
				i++;

			}

			cout << endl;

		}

		void dequeue(){

			if(front < 0 || front > rear){

				cout << "Queue underflow" << endl;
				return;

			}

			cout << "element dequeued" << endl << endl;
			front++;

		}

};


class stacks{
	//in here, the top is equal to the tail
	private:

		doubleNode *head, *top;

	public:
	stacks(){
		
		head = NULL;
		top = NULL;

	}

	int numOfElements(){

		doubleNode *temp = new doubleNode;

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

		doubleNode *temp = new doubleNode;
		doubleNode *previous = new doubleNode;

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

		doubleNode *temp = new doubleNode;
		
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

	queues arr;

	arr.enqueue(4);
	arr.enqueue(2);
	arr.enqueue(8);
	arr.enqueue(6);
	arr.enqueue(7);	
	arr.enqueue(0);

	arr.display();

	cout << endl;

	arr.dequeue();

	cout << endl;

	arr.display();

	return 0;

}

