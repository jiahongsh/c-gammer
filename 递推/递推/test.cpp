#include<iostream>

using namespace std;


//找规律递推算法
int main() {
	
	int level = 1;
	int sum = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		level += i;
		sum += level;
	}
	cout << sum << endl;
	return 0;
}
