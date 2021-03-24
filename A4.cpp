#include<iostream>
using namespace std;

int main(){
	int p = 10;
	int* p1= new int;
	p1=&p;
	delete p1;
	cout << p;
	return 0;
}
