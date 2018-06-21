//this demo file includes bubblesort, selectionsort, insertionsort, mergeSort

#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int arr[] = {2,6,7,9,10,47,66,89};

int binarysearch(int arr[], int l, int r, int x);

int main(){

	int result = binarysearch(arr, 0, 7, 66);

	if(result == -1){

		cout << "Element not present" << endl;

	}
	else{

		cout << "Element is present at the index " << result << endl;	

	}	

}

int binarysearch(int arr[], int l, int r, int x){

	if(r > l) {
		
		int mid = (r+l)/2;

		if(arr[mid] == x) {

			return mid;

		}

		if(arr[mid] < x){
		
			return binarysearch(arr, mid + 1, r, x);
		
		}

		return binarysearch(arr, l, mid - 1, x);

	}
	
	else{
		
		return -1;

	}

	return 0;
}

