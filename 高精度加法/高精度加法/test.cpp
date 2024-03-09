#include<iostream>

using namespace std;



int main() {
	
	string s1, s2;
	int arr1[500] = { 0 }, arr2[500] = { 0 };
	int arr3[500] = { 0 };
	//将数字以字符串的方式读取
	cin >> s1 >> s2;
	int len = s1.size();
	int len2 = s2.size();

	if (len2 > len) {
		len = len2;
	}
	//逆序将字符串数字存入数组
	for (int i = 0; i < len; i++) {
		arr1[i] = s1[len - i - 1]-'0';
		arr2[i] = s2[len - i - 1]-'0';
	}
	
	//将两个数组逆序相加
	for (int i = 0; i < len; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}

	//每位进行进位操作
	for (int i = 0; i < len; i++) {
		if (arr3[i]> 10) {
			arr3[i + 1] = arr3[i + 1] + arr3[i] / 10;
			arr3[i] %= 10;
		}
	}
	
	//判断位数是否增加了一位
	if (arr3[len] != 0) {
		len++;
	}
	//逆序输出，即为正序答案
	while (len--) {
		cout << arr3[len];
	}
	
	return 0;
}