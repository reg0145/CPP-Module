#include <iostream>

int main(int argc, char *argv[]) {
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\a' << std::endl;
		return 0;
	}
	std::string output = "";
	for (int i = 1; i < argc; i++)
	{
		output.append(argv[i]);
		if ((argc - 1) != i)
			output.append(" ");
	}
	std::transform(output.begin(), output.end(), output.begin(), ::toupper);
	std::cout << output << std::endl;
	return 0;
}
