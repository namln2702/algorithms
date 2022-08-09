#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//struct people {
//	int tuoi;
//	string ten;
//};
//typedef struct people people;
//void nhap(people &a) {
//	cout << "nhap tuoi cua ban: ";
//	cin >> a.tuoi;
//	cin.ignore();
//	cout << "nhap ten cua ban: ";
//	getline(cin, a.ten);
//}
//void xuat(people &a) {
//	cout <<"tuoi cua ban la: "<<a.tuoi << endl;
//	cout << "ten cua ban la: " << a.ten << endl;
//}
//void swap(people &a, people &b) {
//	people temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	people a[3];
//	for (int i = 0; i < 3; i++) {
//		nhap(a[i]);
//	}
//	for (int i = 0; i < 2; i++) {
//		for (int j = i + 1; j < 3; j++) {
//			if (a[i].tuoi > a[j].tuoi) swap(a[i], a[j]);
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		xuat(a[i]);
//	}
//}
void nhap(vector<int>* a) {
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		a->push_back(x);
	}
}
int main() {
	vector<int> a;
	nhap(a);
	for (int x : a) {
		cout << x << endl;
	}

}