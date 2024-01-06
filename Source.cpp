#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class stabilization_command
{
public:
	virtual string stabilization(const string &command) = 0;
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
class console : public stabilization_command, public initialization_command
{
public:
	string stabilization(const string &command) override
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
	void initialization(const string& command) override
	{
		bool write_command = true;
		bool write_mod = false;
		bool write_text = false;
		int count = 0;
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
					write_command = false;
				}
				else
				{
					this->mod += command[i];
				}
			}
			if (!write_text && command[i] == '"')
			{
				write_text = true;
			}
			if (write_text)
			{
				if (command[i] == '"')
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
private:
};

int main()
{
	string command;
	console comms;
	while (command != "exit")
	{
		cout << "User >> ";
		getline(cin, command);
		command = comms.stabilization(command);
		comms.initialization(command);
		cout << "your command : " << command << endl;
	}
	return 0;
}