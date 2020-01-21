#include <iostream>
using namespace std;

int main(){
	int denominator;
	int numerator;
	int diagonal = 0;
	int input;
	int num = 1;
	int past = 0;
	int tmp = 0;

	cin >> input;

	while(input >= num){
		tmp++;
		past = num;
		num = num + tmp;
		diagonal++;
	}

	if(input == 1) diagonal = 1;

	if(diagonal%2 == 0){
		denominator = diagonal - (input - past);
		numerator = 1 + (input - past);
	}
	else{
		denominator = 1 + (input - past);
		numerator = diagonal - (input - past);
	}

	cout << numerator << "/" << denominator << endl;
	return 0;
}
