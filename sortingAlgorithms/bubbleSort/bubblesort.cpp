#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int arr[] = {2,6,7,9,10,47,66,89};

void bubblesort(int arr[]);


int main(){

	bubblesort(arr);

	for(int i = 0; i < 8; i++){

		cout << arr[i] << " " ;

	}

	cout << endl;

}


void bubblesort(int arr[]){
	
	int swapCount;

	for(int i = 0; i < 6 - 1; i++){

		swapCount = 0;

		for(int j = 0; j < 6 - i - 1; j++){

			if(arr[j] > arr[j+1]){

				swapCount++;

				//cout << "before swap func" << endl;

				//printArr(arr);

				arr[j] = arr[j+1] + arr[j];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];

				//cout << "after swap func" << endl;

				//printArr(arr);

			}

		}

		if(swapCount == 0){

			break;

		}

	}

}
