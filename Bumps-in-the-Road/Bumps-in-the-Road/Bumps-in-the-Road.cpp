// Bumps-in-the-Road.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
std::string bumps(std::string road) {
	//your code here
	return count(road.begin(), road.end(), 'n') > 15?"Car Dead":"Woohoo!";
}

int main()
{
	cout << bumps("_nnnnnnn_n__n______nn__nn_nnn") << endl;
	system("pause");
    return 0;
}

