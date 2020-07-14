#include"Train.h"



void Train::Set_Time(short h, short  m, short s)
{
	departureTime.h = h;
	departureTime.m = m;
	departureTime.s = s;
}


string Train::Get_destination()
{
	return  destination;
}

int Train:: Get_number()
{
	return  number;
}

Train::Train()
{
	number = 0;
	departureTime.h = 0;
	departureTime.m = 0;
	departureTime.s = 0;
	destination = "no_destination";
}

Train:: Train(int number, short h, short m, short s, string destination)
{
	this->number = number;
	this->departureTime.h = h;
	this->departureTime.m = m;
	this->departureTime.s = s;
	this->destination = destination;
}

void Train::Show_info()const
{
	cout << "Number: " << number << endl;
	cout << "DepartureTime.h: " << departureTime.h << endl;
	cout << "DepartureTime.m: " << departureTime.m << endl;
	cout << "DepartureTime.s: " << departureTime.s << endl;
	cout << "destination: " << destination << endl;
}

bool Train::  operator<(Train number)
{
	if (this->departureTime.h != number.departureTime.h)
	{
		return (this->departureTime.h < number.departureTime.h);
	}

	if (this->departureTime.m != number.departureTime.m)
	{
		return(this->departureTime.m < number.departureTime.m);
	}

	if (this->departureTime.h != number.departureTime.h)
	{
		return(this->departureTime.h < number.departureTime.h);
	}

}



ofstream& operator<<(ofstream& of, const Train& train)
{
	of << train.number << endl;
	of << train.departureTime.h << endl;
	of << train.departureTime.m << endl;
	of << train.departureTime.s << endl;
	of << train.destination << endl;

	return of;
}

ifstream& operator>>(ifstream& fin, Train& train)
{
	fin >> train.number;
	fin >> train.departureTime.h;
	fin >> train.departureTime.m;
	fin >> train.departureTime.s;
	fin >> train.destination;

	return fin;
}