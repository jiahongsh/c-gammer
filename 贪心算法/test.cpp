#include <iostream>
#include<algorithm>
using namespace std;

int cmp(const void* a, const void* b) {
	return *((int*)a) - *((int*)b);
}
int main() {
	int arr[4] = {0};
	int r,n,s = 0;
	
	cin >> n >> r;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	qsort(arr,4,sizeof(int),cmp);

	for (int i = 0; i < n; i++) {
		if (i >=r) {
			arr[i] = arr[i] + arr[i - r];
		}
		s += arr[i];
	}
	cout << s;
}