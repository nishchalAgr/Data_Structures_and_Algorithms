#include <iostream>	
#include <iterator>
#include <array>

using namespace std;

int multiArr[3][5] = {{3,6,8,9,11}, 
			   		  {4,5,7,8,10},
			   		  {1,2,7,13,14}};

int arr[15];
int brr[15];

void mergesort(int low, int high);
void merge(int low , int mid , int high);
//mergeArrays merges multiArr
void mergeArrays(int r , int c);
//prints multi-dimensional arrays
void printMultiArray(int r , int c);

int main(){

	cout << "Before" << endl;

	printMultiArray(3 , 5);

	mergeArrays(3 , 5);

	cout << "After" << endl;

	printMultiArray(3 , 5);

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

void mergeArrays(int r , int c){

	int place = 0;

	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

			arr[place] = multiArr[i][j];
			place++;

		}

	}

	mergesort(0 , r * c - 1);

	place = 0;

	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

			multiArr[i][j] = arr[place];
			place++;

		}

	}

}

void printMultiArray(int r , int c){

	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

			cout << multiArr[i][j] << " ";

		}

		cout << endl;

	}

}