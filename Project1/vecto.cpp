#include<vector>
#include<iostream>
// khai bao vector<data_tyde> variable;
// them phan tu v.push_back(x)    (duoc them vao cuoi mang)
// chen vao vt iterator: vector<data_tyde> :: iterator a= v.begin();(bien a kieu con tro)
// xoa phan tu cuoi khoi mang:   v.pop_back();
// xoa phan tu bat ky: vector<int> :: iterator it=.....; v.erase(it);
// tang giam kich thuoc phan tu mang: v.resize(const);
// 

using namespace std;
int main() {
	/*vector<int> v;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}*/
	vector<int> v;
	for (int i = 0; i < 4; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	//vector<int> :: iterator it = v.begin() + 2;
	//v.erase(it);
	///*for (int x : v) {
	//	cout << x << endl;
	//}*/
	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i] << endl;
	//}
	v.resize(7);
	for (int x : v) {
		cout << x << endl;
	}
	//kiem tra coi chuoi co rong khong
	if (v.empty()) {
		cout << "yes" << endl;
	}
	else cout << "no" << endl;
	

}