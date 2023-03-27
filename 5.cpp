#include<iostream>
using namespace std;

int main() {
	int H, M;	
	cin >> H >> M;
	//int Time(int H, int M);
	if (45 <= M && M <= 59)
		M = M - 45;
	else if (45 > M && M >= 0) {
		M = 15 + M;
		if (23 >= H && H > 0) {
			H = H - 1;
		}
		else if (H == 0) {
			H = 23;
		}
	}
	cout << H << " " << M;
	return 0;
}
/*
void Time(int H, int M) {
	if (45 <= M && M <= 59)
		M= M - 45;
	else if (45 > M && M > 0) {
		if (23 >= H && H > 0) {
			H= H - 1;
		}
		else if (H == 0) {
			H == 23;
		}
		M=15 + M;
	}
	cout << H <<" "<< M;
}
*/