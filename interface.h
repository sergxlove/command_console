#pragma once
#ifndef _INTERFACE_H_
#define _INTERFACE_H_
#include <string>
#include <vector>
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
	vector<string> com;
};
class execute_command
{
public:
	virtual void execute() = 0;
private:
};
class start_programm
{
public:
	virtual void check_files() = 0;
protected:
	bool have_file;
};
#endif // !_INTERFACE_H_
