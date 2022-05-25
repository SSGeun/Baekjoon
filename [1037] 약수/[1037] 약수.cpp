#include <iostream>

using namespace std;

int main() {

	int N;

	// N 입력
	cin >> N;

	// 약수 A, 약수의 최소 최대값
	int A;
	int maxA = 0;
	int minA = 1000001;
	for (int i = 0; i < N; i++) {

		cin >> A;

		if (A > maxA) {

			maxA = A;
		}

		if (A < minA) {

			minA = A;
		}
	}

	cout << (maxA * minA) << endl;

	return 0;
}