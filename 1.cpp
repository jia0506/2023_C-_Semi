#include<iostream>
using namespace std;

void comparison(int a, int b);

int main()
{
	int a, b;
	//cout << "정수인 두 수를 입력하시오:";
	cin >> a >> b;
	comparison(a,b);

	return 0;
}

void comparison(int a, int b)
{
	if (a == b)
		cout << "==";
	else if (a > b)
		cout << ">";
	else if (a < b)
		cout << "<";
}