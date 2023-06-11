#pragma once
#include <iostream>
#include <map>

class ArgumentParser
{

public:

	ArgumentParser();
	void SetFlag(const std::string& flag);
	void Parse(int argc, char* argv[]);
	bool GetFlag(const std::string& flag) const;

private:
	std::map<std::string, bool> m_flags;

public:
	std::map<std::string, bool> GetFlags() const { return m_flags; }
};
