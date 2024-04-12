#include<iostream>
#include<vector>
using namespace std;
int N;
int dp[10];
//题目描述
//对于一个长度为 K 的整数数列：A1, A2, . . ., AK，我们称之为接龙数列当且仅当 Ai 的首位数字恰好等于 Ai−1 的末位数字(2 ≤ i ≤ K)。
//例如 12, 23, 35, 56, 61, 11 是接龙数列；12, 23, 34, 56 不是接龙数列，因为 56的首位数字不等于 34 的末位数字。所有长度为 1 的整数数列都是接龙数列。
//现在给定一个长度为 N 的数列 A1, A2, . . ., AN，请你计算最少从中删除多少个数，可以使剩下的序列是接龙序列？
//输入格式
//第一行包含一个整数 N。
//第二行包含 N 个整数 A1, A2, . . ., AN。
//输出格式
//一个整数代表答案。
//样例输入
//5
//11 121 22 12 2023
//样例输出
//1
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		vector<int>d;
		while (A) {
			d.push_back(A % 10);
			A /= 10;
		}
		//123
		//321
		int start = d.back();
		int tail = *d.begin();
		dp[tail] = max(dp[tail],dp[start]+1);
	}

	int len = 0;
	for (int i = 0; i < 10; i++) {
		len = max(len, dp[i]);
	}
	cout<<N - len;
	return 0;
}
