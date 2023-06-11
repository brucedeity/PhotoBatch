#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "Argument count: " << argc << std::endl;
	
	if (argc < 2)
	{
		std::cout << "Please provide the arguments!" << std::endl;
	}

	for (size_t i = 0; i < argc; i++)
	{
		std::cout << "Arg in position " << i << " :" << argv[i] << std::endl;
	}
	
	return 0;
}