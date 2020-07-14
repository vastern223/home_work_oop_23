#pragma once
#include <iostream>
#include <fstream>
#include "Railway.h"
#include "Train.h"
using namespace std;

int main()
{
	Railway ra;
	Train t1(52111111,5,30,15,"forvard");
	Train t2(58767, 4, 35, 35, "maink");
	Train t3(5834367, 6, 30, 53, "lokek");
	Train t4(583435645, 1, 30, 33, "lokek");
	ra.Add_train(t1);
	ra.Add_train(t2);
	ra.Add_train(t3);
	ra.Add_train(t4);


	ra.Sort_list_trains_by_time();
	ra.Information_about_all_train();
	cout << "\n\n\n\n";
	ofstream fout("file.txt");


	fout << ra;

	fout.close();

	Railway ra1;

	ifstream fin("file.txt");

	fin >> ra1;

	ra1.Sort_list_trains_by_time();
	ra1.Information_about_all_train();
	fin.close();
	system("pause");
	return 0;
}