#include<iostream>

using namespace std;

int main() {


	string s1, s2;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int arr3[10] = { 0 };
	cin >> s1 >> s2;
	//计算结果正负的标志位
	char flag = '+';
	//保证是大数减去小数，利用标志位解决计算的正负
	if ((s1.size() < s2.size()) || (s1.size() == s2.size()&&s1<s2)) {
		swap(s1, s2);
		flag = '-';
	}
	
	
	//将字符数字逆序存到数组中
	for (int i = 0; i < s1.size(); i++)
	{
		arr1[i] = s1[s1.size() - i - 1] - '0';
	}

	for (int i = 0; i < s2.size(); i++)
	{
		arr2[i] = s2[s2.size() - i - 1]-'0';
	}

	
	//进行借位计算
	for (int i = 0; i<s1.size(); i++) {
		if (arr1[i] < arr2[i]) {
			arr1[i] += 10;
			arr1[i + 1] -= 1;
	   }
	}
    for (int i = 0; i<s1.size(); i++) {
		arr3[i] = arr1[i] - arr2[i];
	}
	//若计算结果为负数，则输出负号
	if (flag == '-') {
		cout << flag;
	}

	//判断减后结果最后一位的位置
	int size = 0;
	for (int i = s1.size()-1; i >= 0; i--) {
		if (arr3[i] != 0) {
			size = i;
			break;
		}
	 }

	//将逆序的数组再次逆序
	for (int i = size; i >= 0;i--) {
		cout << arr3[i];
	}
	
	return 0;
}

