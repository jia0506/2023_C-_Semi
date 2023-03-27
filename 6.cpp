#include<iostream>
using namespace std;

int main() {
	int H, M , T;	
	cin >> H >> M ;
	cin >> T ;
	//int Time(int H, int M);
	int L ,l ;
	L = (T + M) / 60;
	l = (T + M) % 60; 
	if (((L + H) <= 23) && ((L + H) > 0)) {
		H = L + H;
		M = l;
	}
	else if (((L + H) > 23)) {
		H = L + H - 24;
		M = l;
	}
	cout << H << " " << M;
	return 0;
	
	// ㅋㅋ 나 정준범
}