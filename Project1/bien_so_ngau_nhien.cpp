#include<iostream>
#include<cstdlib>// d�ng cho srand() v� rand()
#include<ctime>	// l?y th?i gian th?c 
#include<random>//th� vi?n d�ng bi?n ng?u nhi�n hay d�ng 
using namespace std;

int main() { 
	/*srand(time(NULL));
	int a = rand()%10+1;
	int b;
	do {
		
		cout << "nhap so cua ban" << endl;
		cin >> b;
		if (a > b) cout << "lon hon";
		if (a < b) cout << "be hon";
		if (a == b) cout << "dung roi";
		cout << endl;

	} while (a != b);*/
	random_device a;
	mt19937 rng(a());
	uniform_int_distribution<int> uni(1,10);//t?o kho?ng cho bi?n ng?y nhi�n
	auto b = uni(rng);
	cout << b;

}