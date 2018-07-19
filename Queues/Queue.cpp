#include <iostream>
#include <iterator>
#include <array>

using namespace std;

void enqueue(int value);
void dequeue();
void display();

const int MAX = 7;
int qArr[MAX];

class queues{

	private:
		int front;
		int rear;

	public:
		queues(){
			front = -1;
			rear = -1;
		}

		void enqueue(int value){

			if(rear == MAX - 1){

				cout << "Queue overflow" << endl;
				return;

			}else if(front == -1){

				front = 0;

			}

			rear++;
			qArr[rear] = value; 

		}

		void display(){

			if(front < 0 || front > rear){

				cout << "No elements in queue" << endl;
				return;

			}

			cout << "current queue:" << endl;

			for(int i = front; i <= rear; i++){

				cout << qArr[i] << endl;

			}

			cout << endl;

		}

		void dequeue(){

			if(front < 0 || front > rear){

				cout << "Queue underflow" << endl;
				return;

			}

			cout << "----" << qArr[front] << " dequeued" << endl << endl;
			front++;

		}
};

int main(){

	queues arr;

	arr.enqueue(4);
	arr.enqueue(7);	
	arr.enqueue(1);

	arr.dequeue();

	arr.display();

	return 0;

}
