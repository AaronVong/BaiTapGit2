#include <stdio.h>     
#include <stdlib.h>    
#include <time.h> 
#include< iostream>
using namespace std;

int main() {

	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	int c = a - b;
	int n;
	cout << a << "-" << b << " =" << endl;

	cout << " nhap ket qua ";
	cin >> n;
	
	if (n = c)
		cout << " chinh xac " << endl;
	else
		cout << " sai ket qua la " << c;


	system("pause");
}