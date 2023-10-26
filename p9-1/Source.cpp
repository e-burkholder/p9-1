#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>

using namespace std;

int main() {
	int randomDigits[10];
	srand(time(0));

	//generate 10 random integers
	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		randomDigits[i] = rand() % 9000 + 1000;
		cout << randomDigits[i] << " ";
	}


	return 0;
}