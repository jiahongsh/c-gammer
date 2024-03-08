#include<iostream>

using namespace std;


//递归方式实现，时间复杂度大，重复计算
//long long fib(int n) 
//{
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//	int n;
//	cin >> n;
//		cout << fib(n) << endl;
//	
//	
//	return 0;
//}


//时间复杂度低，程序运行时间短
int main() {
	long long arr[60] = { 0 };
	arr[1] = arr[2] = 1;
	 
	for (int i = 3; i < 50; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	for (int i = 1; i <= 50;i++) {
		cout << i << ":" << arr[i] << endl;
	}
	return 0;
}