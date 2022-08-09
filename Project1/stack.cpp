#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int main() {
	vector<int> a;
	int n = -1;
	
	while (n != 0) {
		cin >> n;
		for (int i = n; i >= 1; i--) {
			a.push_back(i);
		}
		while (a.size() != 1) {
			int k = a.size() - 1;
			cout << a[k] << " ";
			a.pop_back();
			a.insert(a.begin(), a[k-1]);
			a.pop_back();
		}
		cout << endl;
		cout << a.front();
		a.clear();
	}
}