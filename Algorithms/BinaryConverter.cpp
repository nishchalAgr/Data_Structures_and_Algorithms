#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryConvertor(int bin){

	string strBin = to_string(bin);
	string temp;

	string backward = strBin;
	int index = 0;

	for(int i = strBin.length() - 1; i >= 0; i--){

		backward[index] = strBin[i];
		index++;

	}

	int len = strBin.length();
	int ans = 0;

	for(int i = 0; i < len; i++){

		temp = backward[i];
		
		if(temp.compare("1") == 0){

			ans += pow(2,	i);

		}else if(temp.compare("0") != 0 && temp.compare("1") != 0){

			cout << "incorrect input" << endl;
			return -1;

		}
		

	}

	return ans;

}

int main(){

	int bin;
	cout << "Enter a binary number: " ;
	cin >> bin;

	int ans = binaryConvertor(bin);
	cout << ans << endl;

	return 0;
}