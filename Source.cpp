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
class exucate_command
{
public:
	virtual void exucate(console* coom) = 0;
private:
};
class console : public stabilization_command
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
		cout << "your command : " << command << endl;
	}
	return 0;
}