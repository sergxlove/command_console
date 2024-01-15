#include "comands.h"

statistics::statistics()
{
	this->quantyti_command = 0;
	this->quantyti_done_command = 0;
	this->quantyti_error_command = 0;
}

void statistics::print_statistics()
{
	cout << "Всего команд - \t\t" << this->quantyti_command << endl;
	cout << "Количество верных команд - \t\t" << this->quantyti_done_command << endl;
	cout << "Количество ошибочных команд - \t\t" << this->quantyti_error_command << endl;
}

void info_command::version()
{
	cout << "developer sergxlove, 2024" << endl;
	cout << "version 1.0" << endl;
}

void info_command::help()
{
	cout << "Доступные команды: " << endl << endl;
	cout << "help - \t\t отображает доступные команды;" << endl;
	cout << "setting - \t\t отображает настройки пользователя" << endl;
	cout << "version -\t\t отображает версию консоли;" << endl;
	cout << "stat - \t\t отображает статистику" << endl;
}

void setting_comand::setting()
{
	cout << "Настройки пользователя: " << endl;
	cout << "Имя - \t\t" << name << endl;
	cout << "Язык - \t\t" << language << endl;
}
