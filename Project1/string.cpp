#include<iostream>
#include<string>
//size()/length() lay kich thuoc cua chuoi
//empty(): kiem tra chuoi rong
//clear(): xoa toan bo chuoi
//str1.insert(pos,str2): chen chuoi str2 vao vi tri pos cua str 1
//str1.erase(pos,const): pos xoa tai vi tri, const so ky tu can xoa 
//str1.find(str2): tim kiem chuoi str2 trong str 1;
//int number=atoi(s.c_str()) : chuyen chuoi thanh so nguyen
//s=to_string(number); : chuyen so thanh chuoi
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int a = atoi(s.c_str());;
	cout << a;
}