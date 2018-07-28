
#include <iostream>
#include <iterator>

using namespace std;

const int MAX = 10;

struct node{

	std::string name;
	int age;
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


		void createnode(std::string names , int ages){

			node *temp = new node;

			temp->name = names;
			temp->age = ages;
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

			//cout << head->name << endl;

		}

		void enqueue(std::string names , int ages){

			if(rear == MAX - 1){

				cout << "Queue overflow" << endl;
				return;

			}else if(front == -1){

				front = 0;

			}

			rear++;
			createnode(names , ages);

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

					cout << temp->name << " age: " << temp->age << endl;

				}

				temp = temp->next;
				i++;

			}

			cout << endl;

		}

		int findMaxAgeIndex(){

			node *temp = new node;

			temp = head;

			int i = front;
			int max = temp->age;

			int place = 0; 

			while(i <= rear){

				if(temp->age > max){

					max = temp->age;
					place = i;

				}

				temp = temp->next;
				i++;

			}

			return place;

		}

		void dequeue(){

			if(front < 0 || front > rear){

				cout << "Queue underflow" << endl;
				return;

			}

			node *temp = new node;
			temp = head;

			node *extra = new node;

			node *frontNode = new node;

			int maxIndex = findMaxAgeIndex();

			int i = 0;

			if(maxIndex == front){

				front++;
				return;

			}

			while(temp->next != NULL){

				if(i == front){

					frontNode = temp;

				}

				if(i == maxIndex - 1){

					extra = temp->next;
					temp->next = temp->next->next;
					extra->next = frontNode;

					break;

				}

				temp = temp->next;

				i++;

			}

			if(maxIndex == rear){

				rear--;

			}

			cout << "element dequeued" << endl << endl;

		}
};

int main(){

		queues list;

		list.enqueue("Neil" , 18);
		list.enqueue("Kenny" , 17);
		list.enqueue("Nishi" , 10);
		list.enqueue("Nishchal" , 8);
		list.enqueue("Siya" , 19);

		list.display();

		list.dequeue();

		list.display();



		return 0;
	
}