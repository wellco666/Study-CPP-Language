#include<iostream>

int lcm(int num1, int num2) {
	int a = num1;
	int b = num2;
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	int gcd = a;
	return (num1*num2/a);
}
