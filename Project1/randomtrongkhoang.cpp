#include<iostream>
#include<cmath>
#include<iomanip>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
int getrandom(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0) / (RAND_MAX + 1.0));
}
int main() {
	/*srand(time(NULL));
	for (int i = 0; i < 10; i ++ ) {
		cout << getrandom(1, 6) << endl;
	}*/
	char a[100], * p;
	p = a;
	cin >> p;
	cout << a;
	int i = 0;
	while (*p != '\0') {
		cout << *p;
		p++;;
	}
}