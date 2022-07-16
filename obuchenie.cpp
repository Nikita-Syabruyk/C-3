#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin >> n>>m;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	for (int q = 0; q < n; q++) {
		for (int w = 0; w < m; w++) {
			cin >> arr[q][w];
			
		}
	
	}
	int kol = 0;
	int k;
	cin >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				kol++;
			}
			else {
				kol = 0;
			}
			if (kol == k) {
				cout << i+1;
				return 0;
			}
		}
		kol = 0;
	}
	cout << 0;
	//for (int i = 0; i < m; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << mas[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	delete[]arr;
}