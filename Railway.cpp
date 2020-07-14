#include"Railway.h"

void Railway:: Add_train(Train tr)
{
	trains.push_back(tr);
}

void Railway:: Information_about_all_train()
{

	for (int i = 0; i < trains.size(); i++)
	{
		trains[i].Show_info();
		cout << endl;
	}

}

void Railway:: Output_by_number(int num)
{
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i].Get_number() == num)
		{
			trains[i].Show_info();
		}

	}
}


void Railway:: Edit_departure_time(int num)
{
	short h, m, s;
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i].Get_number() == num)
		{
			cout << "enter hour" << endl;
			cout << "->";
			cin >> h;
			cout << "enter minute" << endl;
			cout << "->";
			cin >> m;
			cout << "enter second" << endl;
			cout << "->";
			cin >> s;

			trains[i].Set_Time(h, m, s);
		}

	}
}

void Railway:: Sort_list_trains_by_time()
{
	sort(trains.begin(), trains.end());
}


void Railway:: Output_by_destination(string destination)
{
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i].Get_destination() == destination)
		{
			trains[i].Show_info();
		}

	}
}


ofstream& operator<<(ofstream& fout, const Railway& rw)
{

	fout << rw.trains.size() << endl;
	for (int i = 0; i < rw.trains.size(); i++)
	{
		fout << rw.trains[i];
	}
	fout.close();

	return fout;
}

ifstream& operator>>(ifstream& fin, Railway& rw)
{
	int size;
	fin >> size;
	for (int i = 0; i < size; i++)
	{
		Train tr;
		fin >> tr;
		rw.trains.push_back(tr);
	}
	return fin;
}