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

};

int main(){

	list arr;

	arr.createnode(10);
	arr.createnode(14);
	arr.createnode(2);

	arr.display();

	return 0;

}

