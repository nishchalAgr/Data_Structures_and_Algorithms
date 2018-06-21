#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int arr[] = {2,1,7,4,3,8,66,11};

void selectionsort(int arr[]);


int main(){

	selectionsort(arr);

	for(int i = 0; i < 8; i++){

		cout << arr[i] << " " ;

	}

	cout << endl;

}

void selectionsort(int arr[]){

	int min;
	for(int i = 0 ; i < 8 ; i++){

		min = i;

		for(int j = min ; j < 8 ; j++){

			if(arr[j] < arr[min]){

				arr[j] = arr[min] + arr[j];
				arr[min] = arr[j] - arr[min];
				arr[j] = arr[j] - arr[min];	

			}

		}

	}

}