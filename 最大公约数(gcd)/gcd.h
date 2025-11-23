
int gcd(int num1, int num2) {
	while (num2 != 0) {
		int t = num2;
		num2 = num1 % num2;
		num1 = t;
	}
	return num1;
}
