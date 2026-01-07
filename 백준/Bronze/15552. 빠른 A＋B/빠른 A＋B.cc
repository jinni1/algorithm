#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); //입출력 묶음 해제
	ios_base::sync_with_stdio(false);
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n ; i++) {
		cin >> a>> b;
		cout << a + b <<'\n';
	}
}