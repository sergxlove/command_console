#include "comands.h"

statistics::statistics()
{
	this->quantyti_command = 0;
	this->quantyti_done_command = 0;
	this->quantyti_error_command = 0;
}

void statistics::print_statistics()
{
	cout << "����� ������ - \t\t" << this->quantyti_command << endl;
	cout << "���������� ������ ������ - \t\t" << this->quantyti_done_command << endl;
	cout << "���������� ��������� ������ - \t\t" << this->quantyti_error_command << endl;
}

void info_command::version()
{
	cout << "developer sergxlove, 2024" << endl;
	cout << "version 1.0" << endl;
}

void info_command::help()
{
	cout << "��������� �������: " << endl << endl;
	cout << "help - \t\t ���������� ��������� �������;" << endl;
	cout << "setting - \t\t ���������� ��������� ������������" << endl;
	cout << "version -\t\t ���������� ������ �������;" << endl;
	cout << "stat - \t\t ���������� ����������" << endl;
}

void setting_comand::setting()
{
	cout << "��������� ������������: " << endl;
	cout << "��� - \t\t" << name << endl;
	cout << "���� - \t\t" << language << endl;
}
