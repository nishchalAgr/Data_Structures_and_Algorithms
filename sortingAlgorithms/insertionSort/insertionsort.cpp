#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int arr[] = {2,6,7,9,10,47,66,89};

void insertionsort(int arr[]);


int main(){

	insertionsort(arr);

	for(int i = 0; i < 8; i++){

		cout << arr[i] << " " ;

	}

	cout << endl;

}


void insertionsort(int arr[]){

	int valuetoinsert, holepos, i;

	for(i = 0; i < 8; i++){

		valuetoinsert = arr[i];

		holepos = i;

		while(holepos > 0 && arr[holepos - 1] > valuetoinsert){

			arr[holepos] = arr[holepos - 1];

			holepos--;

		}

		if(holepos != i){

			arr[holepos] = valuetoinsert;

		}

	}

}