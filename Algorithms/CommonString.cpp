//https://www.hackerrank.com/challenges/common-child/problem

#include <string>
#include <iostream>

using namespace std;

int common();
bool check(char single, string child);

int common(){

	string a;
	string b;

	string child = "";

	int cont = 0;

	cout << "Enter two strings" << endl;
	cout << "1: "; cin >> a;
	cout << "2: "; cin >> b2d;

	if(a.length() != b.length()){

		cout << "Strings not the same length";
		return 0;

	}

	for(int i = 0; i < a.length(); i++){

		cont = 0;

		if(!check(a[i], child)){

			for(int j  = 0; j < b.length(); j++){

				if(a[i] == b[j] && cont == 0){

					child = child + a[i];
					cont = 1;
				}

			}

		}

	}

	return child.length();

}

bool check(char single, string child){

	if(child.compare("") == 0){

		return false;

	}

	for(int i = 0; i < child.length(); i++){

		if(child[i] == single){

			return true;

		}

	}

	return false;

}

int main(){

	cout << common() << endl;

	return 0;
}