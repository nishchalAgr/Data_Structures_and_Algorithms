#include <iostream>
#include <iterator>
#include <array>

using namespace std;

int arr[] = {2,6,7,9,10,47,66,89};
int brr[6];

void mergesort(int low, int high);
void merge(int low , int mid , int high);


int main(){

	mergesort(0, 7);

	for(int i = 0; i < 8; i++){

		cout << arr[i] << " " ;

	}

	cout << endl;

}


void mergesort(int low, int high){

	int mid;

	if(low < high){

		mid = (low + high)/2;

		mergesort(low , mid);
		mergesort(mid+1 , high);
		merge(low , mid , high);

	}

	else{

		return;

	}

}

void merge(int low , int mid , int high){

	int l1 , l2 , i;

	l1 = low;
	l2 = mid + 1;

	for(i = low; l1 <= mid && l2 <= high; i++){

		if(arr[l1] <= arr[l2]){

			brr[i] = arr[l1];

			l1++;

		}
		else{

			brr[i] = arr[l2];

			l2++;

		}

	}

	while(l1 <= mid){

		brr[i] = arr[l1];

		i++;

		l1++;

	}

	while(l2 <= high){

		brr[i] = arr[l2];

		i++;

		l2++;

	}

	for(i = low; i <= high; i++){

		arr[i] = brr[i];

	}

}
