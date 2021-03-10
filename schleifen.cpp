#include <iostream>
#include <cmath>

int sum(int n) {
	return n * (n + 1) / 2;
}

int sum2(int n) {
	if (n & 1) {
		return (n + 1)/2 * n;
	} else {
		return n/2 * (n + 1);
	}
}

int sum3(int n) {
	auto un { static_cast<unsigned>(n) };
	return static_cast<int>(
		un * (un + 1) / 2
	);
}

int main() {
	std::cout << sum(46341) << '\n';
	std::cout << sum2(46341) << '\n';
	std::cout << sum3(46341) << '\n';
}
