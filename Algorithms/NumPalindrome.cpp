#include <iostream>
#include <string>

using namespace std;

void palindrome(int num){

	string strInt = to_string(num);
	
	string backward = strInt;	

	int index = 0;

	for(int i = strInt.length() - 1; i >= 0; i--){

		backward[index] = strInt[i];
		index++;

	}

	if(strInt.compare(backward) != 0){

		cout << "losses" << endl;
		return;

	}else if(strInt.compare(backward) == 0){

		cout << "wins" << endl;
		return;

	}

}

int main(){

	int cases;
	cin >> cases; cout << endl;

	int arr[cases];

	for(int i = 0; i < cases; i++){

		cin >> arr[i];

	}

	for(int i = 0; i < cases; i++){

		palindrome(arr[i]);

	}

	return 0;
}