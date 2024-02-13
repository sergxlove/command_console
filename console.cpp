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
	return result;
}

void console::initialization(const string& command)
{
	bool write_command = true;
	bool write_mod = false;
	bool write_text = false;
	int count = 0;
	this->comm = "";
	this->mod = "";
	this->text = "";
	for (int i = 0;i < command.size();i++)
	{
		if (write_command)
		{
			if (command[i] == ' ')
			{
				write_command = false;
			}
			else
			{
				this->comm += command[i];
			}
		}
		if (!write_mod && command[i] == '-')
		{
			write_mod = true;
		}
		if (write_mod)
		{
			if (command[i] == ' ')
			{
				write_mod = false;
			}
			else
			{
				this->mod += command[i];
			}
		}
		if (!write_text && command[i] == '`')
		{
			write_text = true;
		}
		if (write_text)
		{
			if (command[i] == '`')
			{
				count++;
			}
			else
			{
				this->text += command[i];
			}
			if (count == 2)
			{
				write_text = false;
				break;
			}
		}
	}
}

void console::execute()
{
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
