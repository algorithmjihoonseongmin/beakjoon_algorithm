#include <iostream>
using namespace std;

int main(){
	int sugar;
	int bag = 0;
	int tmp;

	cin >> sugar;

	while(sugar >= 3){
		if(sugar%5 == 0){
			tmp = sugar/5;
			bag = bag + tmp;
			sugar = 0;
			break;
		}
		sugar = sugar - 3;
		bag++;
	}

	if(sugar != 0) bag = -1;

	cout << bag << endl;
	return 0;
}
