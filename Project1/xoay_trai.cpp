#include<iostream>

using namespace std;
int main() {
	int arr1[100000];
	int arr2[100000];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++) {
		if (i >= m) arr2[i - m] = arr1[i];
		else arr2[i - m + n] = arr1[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr2[i] << " ";
	}
}