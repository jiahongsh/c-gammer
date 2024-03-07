#include<iostream>

using  namespace std;


#define max 3
int main() {
	int arr[max][max] = { 0 };
	memset(arr, 0, sizeof(arr));
	int num = 1;
	arr[0][max - 1] = num;
	int x = 0;
	int y = max-1;
	while (num < max * max) 
	{
		while (x + 1 < max && arr[x+1][y] == 0)
		{    
			num++; 
			 ++x;
             arr[x][y] = num;
			 
			
		}
		while (y > 0 && arr[x][y-1] == 0) 
		{	
			num++;
			--y;
			arr[x][y] = num;
		
		}
		while (x>0 && arr[x-1][y] == 0) 
		{
			num++;
			--x;
			arr[x][y] = num;
			
		}
		while (y+1<max && arr[x][y+1] == 0)
		{
			num++;
			++y;
			arr[x][y] = num;
			
		}
			

		
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			cout << arr[i][j] << " ";

		}
		cout << "\n";
	}
	cout << "\n";
	return 0;
}