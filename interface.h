#pragma once
#include <string>
using namespace std;
class stabilization_command
{
public:
	virtual string stabilization(const string& command) = 0;
private:
};
class initialization_command
{
public:
	virtual void initialization(const string& command) = 0;
protected:
	string comm;
	string mod;
	string text;
};
class execute_command
{
public:
	virtual void execute() = 0;
private:
};