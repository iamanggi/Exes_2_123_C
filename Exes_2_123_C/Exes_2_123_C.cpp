#include <iostream>
using namespace std;

void binary(int n, int anggi[], int x)
{
	int lowerbound = 0;
	int upperbound = n - 1;
	int mid;

	while (lowerbound <= upperbound) {
		mid = (lowerbound + upperbound) / 2;

		if (anggi[mid] == x) {
			cout << "-----" << endl;
			cout << "found" << endl;
			break;
		}
		else if (x < anggi[mid]) {
			upperbound = mid - 1;
		}
		else {
			lowerbound = mid + 1;
		}
	}

		if (anggi[mid] != x){
			cout << "---------" << endl;
			cout << "not found" << endl;
		}
	
}

 
int main() {
	int n;
	cout << "masukan panjang array :" << endl;
	cin >> n;

	int anggi[19];
	cout << "masukan element array :" << endl;
	for (int i = 0; i < n; i++) {
		cin >> anggi[i];
	}

	int x;
	cout << "masukan element array yang ingin dicari :" << endl;
	cin >> x;


	binary(n, anggi, x);
	return 0;
}