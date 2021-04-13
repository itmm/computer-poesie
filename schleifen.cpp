#include <iostream>
#include <chrono>

inline int sum(int n) {
	int res { 0 };
	for (int i { 1 }; i <= n; ++i) {
		res += i;
	}
	return res;
}

inline int sum2(int n) {
	if (n & 1) {
		return (n + 1)/2 * n;
	} else {
		return n/2 * (n + 1);
	}
}

inline int sum3(int n) {
	auto un { static_cast<unsigned>(n) };
	return static_cast<int>(
		un * (un + 1) / 2
	);
}

inline int failed_sum(int n) {
	return n * (n + 1) / 2;
}

template<int F(int)> void run_test(int runs) {
	auto start { std::chrono::high_resolution_clock::now() };
	int sum { 0 };
	for (int j { runs }; j; --j) {
	for (int i { 10000 }; i; --i) {
		sum += F(46341 - i);
	}
	}
	auto stop { std::chrono::high_resolution_clock::now() };
	auto duration { std::chrono::duration_cast<std::chrono::microseconds>(stop - start) };
	std::cout << sum << ": " << duration.count() << '\n';
}

int main() {
	run_test<sum>(1);
	run_test<sum2>(100);
	run_test<sum3>(100);
	for (int i {46341}; i <= 65535; ++i) {
		if (sum3(i) == failed_sum(i)) {
			std::cout << i << ": " << sum3(i) << "\n";
		}
	}
}
