// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{

	for (float val = -10.0; val < 100.0; val = -val * 2)
		cout << "*";
	//cout << k;
	system("pause");
    return 0;
}

