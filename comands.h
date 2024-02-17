#pragma once
#ifndef _COMANDS_H_
#define _COMANDS_H_
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <fstream>
#include "interface.h"
#include "enums.h"
#include "file_system.h"
using namespace std;
class statistics 
{
public:
	statistics();
	void print_statistics();
	void read_statistics();
	void write_statistics();
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
class calculate_comand
{
public:
	void calculate();
private:
	string expression;
	bool check_correct(std::string& str);//�������� ����������� ��������� �����
	bool check_scobs(std::string& str);//�������� �� ������������ ������
	double math_operation(double value1, double value2, char opr);//���������� �������������� ��������
	bool check_value(char symbol);//����������� �����
	bool check_operator(char symbol);//����������� ���������
	void get_attribute(const std::string& str, std::string& value_str, int& condition, size_t& pozition);//��������� ���������� ��������
	int get_priority(char opr);//����������� ���������� ���������
	int get_quantity_value(const std::string& str);
	int get_quantity_operator(const std::string& str);
	double calc(std::string expression);//�������� ������� �������
};
class all_command :
	public stabilization_command,
	public initialization_command,
	public execute_command,
	public info_command,
	public setting_comand,
	public statistics,
	public calculate_comand,
	public file_sys
{
public:
private:
};
#endif // !_COMANDS_H_
