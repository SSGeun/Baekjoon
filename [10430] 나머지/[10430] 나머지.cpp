#include <iostream>

using namespace std;

int main() {

	int A, B, C;

	// A, B, C 입력
	cin >> A >> B >> C;

	// 결과 출력
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	return 0;
}