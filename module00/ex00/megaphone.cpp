#include <iostream>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\a' << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		for (int j = 0; j < argv[i][j]; j++) {
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
	}
	return (0);
}
