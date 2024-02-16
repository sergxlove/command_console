#pragma once
#ifndef _FILE_SYSTEM_H_
#define _FILE_SYSTEM_H_
#include <iostream>
#include <fstream>
class file_sys
{
public:
	void starts();
private:
	void create_file();
	bool check_file();
};
#endif // !_FILE_SYSTEM_H_
