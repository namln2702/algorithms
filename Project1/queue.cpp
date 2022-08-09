#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
	int n, b; cin >> n >> b;
	queue<int> a;
	vector<int> t, d;
	int k[100] = {};
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		t.push_back(x);
		d.push_back(y);
	}
	a.push(0);
	int tong = t[0] + d[0];
	int dem = 1;
	while (dem <= n - 1) {
		while (a.size() < b+1) {
			a.push(dem);
			dem++;
		}
		if (dem > n - 1) break;
		if (t[dem] >= tong) {
			k[a.front()] = tong;
			a.pop();
			if (tong > t[a.front()]) tong = tong + d[a.front()];
			else tong = t[a.front()] + d[a.front()];
			a.push(dem);
		}
		else {
			k[dem] = -1;
			dem++;
		}
		
	}
	while (a.empty()!=true) {
		k[a.front()] = tong;
		a.pop();
		if (a.size() == 0) break;
		if (tong > t[a.front()]) tong = tong + d[a.front()];
		else tong = t[a.front()] + d[a.front()];
	}
	for (int i = 0; i < n; i++) {
		cout << k[i] << " ";
	}
}