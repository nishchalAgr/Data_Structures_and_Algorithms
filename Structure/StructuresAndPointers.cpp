#include <iostream>
#include <iterator>
#include <array>

using namespace std;

struct Student{

	char name[25];
	int age;

};

int main(){

	Student s1 = {"Mark" , 11};
	Student s2 = {"Bob" , 13};

	int *nameAddress = &s1.age;

	if(s1.age > s2.age){

		cout << s1.name << " is older than " << s2.name <<  endl;

	}else{

		cout << s1.name << " is not older than " <<  s2.name << endl;

	}

	cout << "Memory Address of " << s1.name << " : " << nameAddress << endl;

	return 0;

}
