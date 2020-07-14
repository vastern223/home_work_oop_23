#pragma once
#include "Train.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Railway
{
	vector<Train> trains;

public:
	
	void Add_train(Train tr);
	

	void Information_about_all_train();
	
	void Output_by_number(int num);
		
	void Edit_departure_time(int num);


	void Sort_list_trains_by_time();

	void Output_by_destination(string destination);

	
	friend ofstream& operator<<(ofstream& of, const Railway& lap);
	friend ifstream& operator>>(ifstream& ifs, Railway& lap);
};

