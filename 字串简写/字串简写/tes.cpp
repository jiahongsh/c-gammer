#include<iostream>

using namespace std;
string S;
char c1, c2;//c1开始字符，c2结束字符
int K;
//程序猿圈子里正在流行一种很新的简写方法：对于一个字符串，只保留首尾字符，将首尾字符之间的所有字符用这部分的长度代替。例如 internation - alization 简写成 i18n，Kubernetes （注意连字符不是字符串的一部分）简写成 K8s, Lanqiao 简写成 L5o 等。
//在本题中，我们规定长度大于等于 K 的字符串都可以采用这种简写方法（长度小于 K 的字符串不配使用这种简写）。
//给定一个字符串 S 和两个字符 c1 和 c2，请你计算 S 有多少个以 c1 开头c2 结尾的子串可以采用这种简写？
//输入格式
//第一行包含一个整数 K。
//第二行包含一个字符串 S 和两个字符 c1 和 c2。
//输出格式
//一个整数代表答案。
//样例输入
//4
//abababdb a b
int main() {
   
	cin >> K;

	cin >> S>>c1>>c2;
	int n = S.size();
	//cout << n;
	
	long long ans = 0;
	long long  i = 0;
	long long  j = K - 1;
	int num_c1 = 0; 
	while(j<n) {
		
		if (S[i] == c1)++num_c1;
		if (S[j] == c2)ans += num_c1;
		i++;
		j++;
	}
	cout << ans;
	return 0;
}
//abababdb