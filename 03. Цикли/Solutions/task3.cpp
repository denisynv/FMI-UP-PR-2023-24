#include <iostream>

int main() {
	unsigned int n;
	std::cin >> n;
	unsigned int fact = 1;

	for (unsigned int i = 2; i <= n; i++) {
		fact *= i;
	}

	std::cout << fact << std::endl;
	return 0;
}
