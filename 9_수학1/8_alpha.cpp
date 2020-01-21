#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int data;
	long long x, y, d;
	long long tmp = 0;
	int n = 0;
	int past = 1;

	cin >> data;

	for(int a = 0; a<data; a++){
		cin >> x >> y;
		d = y-x;

		while(d > tmp){
			n++;
			past = tmp;
			tmp = tmp+n*2;
		}

		if(tmp-d+1 <= (tmp-past)/2) cout << n*2 << endl;
		else cout <<  n*2-1 << endl;
		tmp = 0;
		n = 0;
	}
	return 0;
}
