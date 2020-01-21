#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int data;
	int H;
	int W;
	int N;
	
	cin >> data;

	int* d = (int*)malloc(sizeof(int)*data*3);

	for(int n = 0; n<data; n++){
		cin >> H >> W >> N;
		d[n*3] = H;
		d[n*3+1] = W;
		d[n*3+2] = N;
	}

	for(int n = 0; n<data; n++){
		H = (d[n*3+2]-1)%d[n*3]+1;
		W = (d[n*3+2]-1)/d[n*3]+1;
		cout << H;
		cout.width(2);
		cout.fill('0');
		cout << W << endl;
	}
	return 0;
}
