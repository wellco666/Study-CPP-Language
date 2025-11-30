#include<iostream>
using namespace std;
int main() {
	int m, n, N;
	while (cin >> m >> n >> N) {
		int arr[20][20] = { 0 };
		//可以扫描方向的数组
		int dirs[8][2]{
			{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}
		};

		while (N--) {
			int xi, yi;
			cin >> xi >> yi;
			arr[xi][yi] = -1;
			//对于一个单独的格子，它的八个方向上有-1时，并满足条件时加一
			//int dirs[8][2] = {
			//{-1,-1},  // d=0: 左上
			//{-1, 0},  // d=1: 上
			//{-1, 1},  // d=2: 右上
			//{0, -1},  // d=3: 左
			//{0, 1},   // d=4: 右
			//{1, -1},  // d=5: 左下
			//{1, 0},   // d=6: 下
			//{1, 1}    // d=7: 右下}
			for (int d = 0; d < 8; d++) {
				int x2 = xi + dirs[d][0];
				int y2 = yi + dirs[d][1];
				if (x2 >= 0 and x2 < m and y2 >= 0 and y2 < n and arr[x2][y2] != -1) arr[x2][y2]++;
			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == -1) cout << "*";
				else cout << arr[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
}