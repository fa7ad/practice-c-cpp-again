#include <cstdio>
#include <iostream>

int cmain () {
	float x, y, z;
	char op;
	scanf("%f %c %f", &x, &op, &y);
	z = 0;
	if (op == '+') z = x + y;
	if (op == '-') z = x - y;
	if (op == '*') z = x * y;
	if (op == '/') z = x / y;

	printf("%.2f %c %.2f = %.2f\n", x, op, y, z);
	return 0;
}

int cppmain () {
	float x, y, z;
	char op;
	std::cin >> x >> op >> y;
	z = 0;
	if (op == '+') z = x + y;
	if (op == '-') z = x - y;
	if (op == '*') z = x * y;
	if (op == '/') z = x / y;
	std::cout << x << ' ' << op << ' ' << y << " = " << z << std::endl;
	return 0;
}

int main () {
	return cppmain();
}
