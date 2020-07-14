#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Train
{
private:

	struct Time
	{
		short h, m, s;
	};

	int number;
	Time departureTime;
	string destination;

public:

	void Set_Time(short h, short  m, short s);

	string Get_destination();
	
	int Get_number();
	
	Train();
	
	Train(int number, short h, short m, short s, string destination);
	
	void Show_info()const;


	bool operator<(Train number);

	friend ofstream& operator<<(ofstream& of, const Train& lap);
	friend ifstream& operator>>(ifstream& ifs, Train& lap);
};

