// MASH.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<sstream>
#include<Windows.h>

using namespace std;

void draw(vector<string>& house, vector<string>& cars, vector<string>& kids, vector<string>& names);

int main()
{
	vector<string> mash, names, cars, house, kids;
	int num, num_t = 0, count = 0, ih, ik, in, ic, jj;
	string temp;

	house.push_back("mansion");
	house.push_back("apartment");
	house.push_back("shack");
	house.push_back("house");

	mash.push_back("mansion");
	mash.push_back("apartment");
	mash.push_back("shack");
	mash.push_back("house");

	cout << "Enter four car names." << endl;

	for (int i = 0; i < 4; i++)
	{
		getline(cin, temp);
		cars.push_back(temp);
		mash.push_back(temp);
	}

	cout << "Enter four of your favorite one digit numbers." << endl;

	for (int i = 0; i < 4; i++)
	{
		getline(cin, temp);
		kids.push_back(temp);
		mash.push_back(temp);
	}

	cout << "Enter four names of the opposite gender." << endl;

	for (int i = 0; i < 4; i++)
	{
		getline(cin, temp);
		names.push_back(temp);
		mash.push_back(temp);
	}

	cout << "What month were you born in?\n1-January\n2-February\n3-March\n4-April\n5-May" << endl;
	cout << "6-June\n7-July\n8-August\n9-September\n10-October\n11-November\n12-December" << endl;

	cin >> num;

	draw(house, cars, kids, names);

	while (mash.size() != 0)
	{
		num_t = num_t + num - 1;
		num_t = num_t % mash.size();

		mash.erase(mash.begin() + num_t);

		count = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < mash.size(); j++)
			{
				if (house[i] == mash[j])
				{
					ih = i;
					jj = j;
					count++;
					continue;
				}
			}
			if (count == 4)
			{
				continue;
			}
		}
		if (count == 1)
		{
			mash.erase(mash.begin() + jj);
		}

		count = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < mash.size(); j++)
			{
				if (cars[i] == mash[j])
				{
					ic = i;
					jj = j;
					count++;
					continue;
				}
			}
			if (count == 4)
			{
				continue;
			}
		}
		if (count == 1)
		{
			mash.erase(mash.begin() + jj);
		}

		count = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < mash.size(); j++)
			{
				if (kids[i] == mash[j])
				{
					ik = i;
					jj = j;
					count++;
					continue;
				}
			}
			if (count == 4)
			{
				continue;
			}
		}
		if (count == 1)
		{
			mash.erase(mash.begin() + jj);
		}

		count = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < mash.size(); j++)
			{
				if (names[i] == mash[j])
				{
					in = i;
					jj = j;
					count++;
					continue;
				}
			}
			if (count == 4)
			{
				continue;
			}
		}
		if (count == 1)
		{
			mash.erase(mash.begin() + jj);
		}
	}

	cout << "You will marry " << names[in] << " and live in a";
	if (house[ih] == "apartment")
	{
		cout << "n " << house[ih];
	}
	else
	{
		cout << " " << house[ih];
	}

	cout << ". You will have " << kids[ik] << " kids with " << names[in] << ".\nYou and your family will take roadtrips in your ";
	cout << cars[ic] << ".\nAnd you will all live happily ever after!";

	Sleep(10000);

	return 0;
}


void draw(vector<string>& house, vector<string>& cars, vector<string>& kids, vector<string>& names)
{
	cout << "\n MASH \n______" << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << (i+1)<< ") "<< house[i] << endl;
	}
	cout << "Cars:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << (i + 1) << ") " << cars[i] << endl;
	}
	cout << "Number of kids:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << (i + 1) << ") " << kids[i] << endl;
	}
	cout << "Crushes:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << (i + 1) << ") " << names[i] << endl;
	}
}
