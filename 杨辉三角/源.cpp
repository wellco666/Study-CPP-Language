#include<iostream>
int main() {
	int yanghui[15][15] = { 0 };
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		yanghui[i][0] = 1;
		yanghui[i][i] = 1;
		for (int j = 1; j < i; j++) {
			yanghui[i][j] = yanghui[i - 1][j] + yanghui[i - 1][j - 1];

		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << yanghui[i][j] << " ";
		}
		std::cout << std::endl;
	}
}