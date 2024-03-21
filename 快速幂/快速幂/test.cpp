//快速幂，计算2020的100000此方取后四位
#include<iostream>
using namespace std;
int mod = 10000;

int main() {
	long long a, b;
	cin >>a >> b;
	long long ans = 1;
 	while (b) {
		if (b & 1) {
			ans *= a;
			ans = ans % mod;

		}
		b >>= 1;
		a *= a;
		a = a % mod;

	}
	cout<< ans;
}

