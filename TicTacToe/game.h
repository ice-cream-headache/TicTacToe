#pragma once
#define CellNum 9
#include <string>
using namespace std;

class game
{
private:
	wchar_t oponent;
	char cell[CellNum];
	char self;
	int count,runing_flag;
public:
	game();
	~game();
	void Display();
	void Run();

};

