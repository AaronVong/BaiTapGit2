#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int n;
	int tong;

	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << a << "+" << b << "=" << "?" << endl;
	cin >> n;
	if ((a + b) == n)
		cout << " chinh xac " << endl;
	else
		cout << "sai" << "ket qua la " << a + b << endl;

	system("pause");
	return 0;


}