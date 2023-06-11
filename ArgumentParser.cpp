#include "ArgumentParser.h"
#include <iostream>

ArgumentParser::ArgumentParser()
{

}

void ArgumentParser::SetFlag(const std::string& flag)
{
	if (flag.empty())
	{
		return;
	}

	GetFlags()[flag] = false;
}

bool ArgumentParser::GetFlag(const std::string& flag) const
{
	if (flag.empty())
	{
		return false;
	}

	std::map<std::string, bool>::iterator flagIt = GetFlags().find(flag);

	if (flagIt != std::end(GetFlags()))
	{
		return flagIt->second;
	}

	return false;
}

void ArgumentParser::Parse(int argc, char* argv[])
{
}
