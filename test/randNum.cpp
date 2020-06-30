#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	while (true) {
		int mod;
		std::cin >> mod;
		srand(mod + 345);
		std::cout << rand() % mod << std::endl;
	}
}
