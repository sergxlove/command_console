#pragma once
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
