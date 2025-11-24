#include "bubbleSort&printArr.h"

int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "原来的数组：";
	printArr(arr, n);

	cout << endl << "排后的数组：";
	bubbleSort(arr, n);
	printArr(arr, n);

	system("pause");
}