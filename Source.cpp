#include <iostream>
#include <string>
#include "console.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string command;
	console comms;
	while (command != "exit")
	{
		cout << endl;
		cout << "User >> ";
		getline(cin, command);
		command = comms.stabilization(command);
		comms.initialization(command);
		comms.execute();
		cout << "your command : " << command << endl;
	}
	return 0;
}