#include <iostream>
#include "ArgumentParser.h"

int main(int argc, char* argv[])
{
	ArgumentParser argParser;
	argParser.SetFlag("rename");
	argParser.SetFlag("convert");
	argParser.SetFlag("resize");
	argParser.SetFlag("scale");

	argParser.Parse(argc, argv);

	std::cout << "rename : " << argParser.GetFlag("rename") << std::endl;
	std::cout << "convert : " << argParser.GetFlag("convert") << std::endl;
	std::cout << "resize : " << argParser.GetFlag("resize") << std::endl;
	std::cout << "scale : " << argParser.GetFlag("scale") << std::endl;
	
	return 0;
}