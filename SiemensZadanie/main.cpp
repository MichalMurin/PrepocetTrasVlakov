// SiemensZadanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include "ZoznamStanic.h"

using namespace std;
int main(int argc, char* argv[])
{
	string nazovSuboru;
	cout << "Zadajte pros�m cestu k vstupn�mu s�boru: ";
	cin >> nazovSuboru;	
	ZoznamMiest zoznam(nazovSuboru);
	zoznam.vyhodnotSubor(nazovSuboru);
}
