#pragma once
#include "D:\Pokemon\include\Utility\Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

using namespace N_Utility;

void Utility::clearConsole() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void Utility::waitForEnter() { cin.get(); }

void Utility::clearInputBuffer() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}