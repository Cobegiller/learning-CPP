#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0, c = 1;
	cout << "this is a sum calculator\n";
	cout << "please input your first number\n";
	cin >> a;
	cout << "please input your second number\n";
	cin >> b;
	while (c <= b)
	{
		a = a + c;
		++c;
	}
	int d = a - 1;
	cout << d;
	system("pause");
	return 0;
}