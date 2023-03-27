#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if ((-1000 <= x && x < 0) && (-1000 <= y && y < 0))
		cout << 3;
	else if ((-1000 <= x && x < 0) && (0 < y && y <= 1000))
		cout << 2;
	else if ((0 < x && x <= 1000) && (0 < y && y <= 1000))
		cout << 1;
	else if ((0 < x && x <= 1000) && (-1000 <= y && y < 0))
		cout << 4;
}