#include "console.h"

string console::stabilization(const string& command)
{
	string result = "";
	int count_space = 0;
	for (int i = 0;i < command.size();i++)
	{
		if (command[i] != ' ')
		{
			result += command[i];
			count_space = 0;
		}
		else
		{
			count_space++;
			if (count_space == 1)
			{
				result += command[i];
			}
		}
	}
	return result + " ";
}

void console::initialization(const string& command)
{
	com.clear();
	string str = "";
	for (int i = 0;i < command.size();i++)
	{
		if (command[i] != ' ')
		{
			str += command[i];
		}
		else
		{
			com.push_back(str);
			str = "";
		}
	}
}

void console::execute()
{
	string comm;
	for (int i = 0;i < com.size();i++)
	{
		comm = com[i];
		if (comm == "version")
		{
			version();
		}
		else if (comm == "help")
		{
			help();
		}
		else if (comm == "setting")
		{
			setting();
		}
		else if (comm == "stat")
		{
			print_statistics();
		}
		else if (comm == "calc")
		{
			calculate();
		}
	}
	}
