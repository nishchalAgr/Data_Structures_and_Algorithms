//https://www.codechef.com/problems/GDOG

#include <iostream>
#include <iterator>
#include <array>

using namespace std;

struct dog{

	int coins;
	int numPeople;

};

dog maxCoins(int coins, int maxPeople){

	int maxCoins = 0;
	int index = -1;

	for(int i = 1; i <= maxPeople; i++){

		if(coins % i > maxCoins){

			maxCoins = coins % i;
			index = i;

		}

	}

	dog greedy;
	greedy.coins = maxCoins;
	greedy.numPeople = index;

	return greedy;

}

int main(){

	int coins;
	int people;

	cout << "Enter the number of coins in the treasure chest: " ;
	cin >> coins;
	cout << endl << endl;

	cout << "Enter the maximum number of people the dog will attract: " ;
	cin >> people;
	cout << endl << endl;

	dog ans = maxCoins(coins, people);

	cout << "The dog will get the most coins (" << ans.coins << " coins) by attracting " << ans.numPeople << " people" << endl;

	return 0;
}