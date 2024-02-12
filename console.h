#pragma once
#ifndef _CONSOLE_H_
#define _CONSOLE_H_
#include <string>
#include <iostream>
#include "comands.h"
#include "interface.h"
class console : public all_command
{
public:
	string stabilization(const string& command) override;
	void initialization(const string& command) override;
	void execute() override;
private:
};
#endif // !_CONSOLE_H_

