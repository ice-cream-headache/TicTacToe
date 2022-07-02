#include "game.h"
#include <iostream>
#include <windows.h>
using namespace std;

game::game()
{
	self = 'x';
	runing_flag = 1;
	oponent = '\u25EC';

	count = 60;
	for (int i = 0; i < CellNum; i++)
		cell[i] = i + '0';
}

game::~game()
{
}

void game::Display()
{
	for (int i = 0; i < CellNum; i++) {
		cout << "__" << cell[i] << "__";
		if ((i % 3) != 2)
			cout << "|";
		else
			cout << endl;
	}
	cout << "It's yourself :" << self << endl
		<< "It's oppenet :" << oponent << endl
		<< "请输入要落子的位置（0~8）: ";
}

void game::Run()
{
	int input;
	Display();
	cin >> input;

	while (runing_flag) {
		if (input >= 0 && input < 9) {
			cell[input] = 'x';
			system("cls");
			Display();
		}
		else
			cout << "输入有误，请重新输入: ";
		cin >> input;
	}

}
