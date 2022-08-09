#include<iostream>
using namespace std;
int sum(int a[][6], int h, int c) {
	int tong = 0;
	for (int i = c - 1; i <= c + 1; i++) {
		tong += a[h - 1][i] + a[h + 1][i];
	}
	return (tong+a[h][c]);
}
int main() {
	int arr[6][6];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
	}
	int tong = sum(arr,1,1);
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (sum(arr, i, j) > tong) tong = sum(arr, i, j);
		}
	}
	cout << tong;
}