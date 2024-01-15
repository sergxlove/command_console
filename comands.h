#pragma once
#include <iostream>
#include <string>
#include "interface.h"
using namespace std;
class statistics
{
public:
	statistics();
	void print_statistics();
protected:
	int quantyti_command;
	int quantyti_done_command;
	int quantyti_error_command;
};
class info_command
{
public:
	void version();
	void help();
private:
};
class setting_comand
{
public:
	void setting();
protected:
	string name;
	string language;
private:
};
class all_command :public stabilization_command,
	public initialization_command,
	public execute_command,
	public info_command,
	public setting_comand,
	public statistics
{
public:
private:
};