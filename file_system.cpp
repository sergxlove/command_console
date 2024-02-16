#include "file_system.h"

void file_sys::create_file()
{
	std::system("mkdir data");
	std::fstream file_stat;
	std::fstream file_setting;
	file_stat.open("data\\stat.txt", std::fstream::out);
	file_setting.open("data\\setting.txt", std::fstream::out);
	if (file_stat.is_open() && file_setting.is_open())
	{
		file_stat.close();
		file_setting.close();
	}
}

bool file_sys::check_file()
{
	std::fstream file_stat;
	std::fstream file_setting;
	file_stat.open("data\\stat.txt", std::fstream::in);
	file_setting.open("data\\setting.txt", std::fstream::in);
	if (file_stat.is_open() && file_setting.is_open())
	{
		file_stat.close();
		file_setting.close();
		return true;
	}
	else
	{
		return false;
	}
}

void file_sys::starts()
{
	if (!check_file())
	{
		create_file();
	}
}
