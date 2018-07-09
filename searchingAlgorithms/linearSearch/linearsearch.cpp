#include <iostream>

using namespace std;

int arr[] = {4 , 5 , 3 , 17 , 8 , 6 , 13 , 45 , 7 , 88 , 56};

int arrayLen(int arr[]);
int linearsearch(int arr[] , int num , int size);

int main(){

	//cout << arrayLen(arr) << endl;

	int arrSize = sizeof(arr);

	int intSize = sizeof(arr[0]);

	int size = arrSize / intSize;

	int ansIndex = linearsearch(arr , 13 , size);

	if(ansIndex == -1){

		cout << "Number not found in array" << endl;

	}else{

		cout << "Number found at index " << ansIndex << endl;

	}

	return 0;

}

int linearsearch(int arr[] , int num , int size){

	int place = -1;

	cout << "size :" << size << endl;

	for (int  i = 0 ; i < size ; i++){

		if(arr[i] == num){

			place = i;

			break;

		}

	}

	return place;

}