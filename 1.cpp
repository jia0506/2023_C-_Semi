#include<iostream>
using namespace std;

void comparison(int a, int b);

int main()
{
	int a, b;
	//cout << "������ �� ���� �Է��Ͻÿ�:";
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