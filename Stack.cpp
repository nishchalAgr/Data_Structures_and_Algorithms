#include <iostream>
#include <iterator>
#include <array>

using namespace std;

void push(int value);
void pop();
void display();

const int MAX = 5;
int stackArr[MAX];

class stacks{

	private:
		int top;
		//int stackArr[];

	public:
		stacks(){

			top = -1;
			//stackArr[] = {0 , 0 , 0 , 0 , 0}

		}

		void push(int value){

			if(top >= MAX - 1){

				cout << "Stack Overflow" << endl;

			}else{

				top++;
				stackArr[top] = value;

			}

		}

		void pop(){

			if(top == -1){

				cout << "Stack underflow" << endl;

			}else{

				cout << "----" << stackArr[top] << " was popped" << endl;
				top--;

			}

		}

		void display(){

				cout << endl;

			if(top == -1){

				cout << "No elements exists" << endl;

			}else{
				
				for(int i = top; i >= 0; i--){

					cout << stackArr[i] << endl;

				}
			
			}

		}

};

int main(){

	stacks arr;

	arr.push(4);
	arr.push(5);
	arr.push(1);
	arr.push(6);
	arr.push(7);
	arr.push(10);
	
	arr.pop();

	arr.display();

 	return 0;

}

