#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int money;

	if (a == b && b == c) {
		money = 10000 + a * 1000;
	}
	else if ((a == b) || (b == c) || (a == c)) {
		if (a == b)
			money = 1000 + a * 100;
		else
			money = 1000 + c * 100;
	}
	else{
		if (a > b && a > c)
			money = a * 100;
		else if (a < b && b > c)
			money = b * 100;
		else
			money = c * 100;
	}
	cout << money;
}
