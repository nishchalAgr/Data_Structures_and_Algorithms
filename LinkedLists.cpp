#include <iostream>
#include <iterator>
#include <array>

using namespace std;

void createnode(int value);

struct node{

	int data;
	node *next;

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

	list arr;

	arr.createnode(10);
	arr.createnode(14);
	arr.createnode(2);
	arr.createnode(7);
	arr.createnode(3);
	arr.createnode(8);

	arr.display();

	arr.linearSearch(8);

	return 0;

}

