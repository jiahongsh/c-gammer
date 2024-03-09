#include<iostream>

using namespace std;

int main() {

	int arr[30][30] = { 0 };
	int m, n;//目标位置
	int x, y;//马的位置
	cin >> m >> n >> x >> y;

	//将吗目标点，左上角棋盘数据全部初始化为1
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <=m; j++) {
			arr[i][j] = 1;
		}
	}
	arr[x][y] = 0;
	if (x + 2 <= n && y - 1 >= 0) { arr[x + 2][y - 1] = 0; }
	if (x + 2 <= n && y + 1 <= m) { arr[x + 2][y + 1] = 0; }
	if (x + 1 <= n && y + 2 <= m) { arr[x + 1][y + 2] = 0; }
	if (x - 1 >= 0 && y + 2 >= 0) { arr[x - 1][y + 2] = 0; }
	if (x - 2 >= 0 && y + 1 >= 0) { arr[x - 2][y + 1] = 0; }
	if (x - 2 >= 0 && y - 1 >= 0) { arr[x - 2][y - 1] = 0; }
	if (x - 1 >= 0 && y - 2 >= 0) { arr[x - 1][y - 2] = 0; }
	if (x + 1 <= n && y - 2 >= 0) { arr[x + 1][y - 2] = 0; }
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 && j == 0) {
				continue;
			 }
			if (arr[i][j] == 0) {
				continue;
			}
			 if (i == 0) {
				arr[i][j] = arr[i][j - 1];
			}
			 else if (j == 0) {
				 arr[i][j] = arr[i - 1][j];
			 }
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	} 


	//cout << arr[n][m];
	for (int i = 0; i <=m; i++) {
		for (int j = 0; j <=n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}