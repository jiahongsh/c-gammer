#include<iostream>

using  namespace std;


int fin(int n) {
	if (n == 1) {
		return 1;
	}
	return fin(n - 1) + 3;
}
int main() {
	cout << fin(6);

}