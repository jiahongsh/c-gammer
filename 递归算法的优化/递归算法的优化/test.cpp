#include<iostream>

using namespace std;

int fib(int n,int*data) {

	
	if (n == 1 || n == 2) {
		data[n] = 1;
		return data[n];
	}

	if (data[n] != 0)
	{
		return data[n];
	}
	data[n] = fib(n - 1,data) + fib(n - 2,data);//将已经计算过的数据保存起来，避免重复计算
	return data[n];
	
}
int main() {
	int data[50] = {0};
	int num;
	cin >> num;
	cout << fib(num,data);
	return 0;
}

