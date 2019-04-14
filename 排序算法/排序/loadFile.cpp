#include"loadFile.h"

void loadArray(int*array10000, int * array50000, int*array200000, int*array10000color, int*array50000color, int*array200000color)
{

	std::ifstream infile;

	infile.open("10000.txt");

	int *p = &array10000[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();

	infile.open("50000.txt");

	p = &array50000[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();

	infile.open("200000.txt");

	p = &array200000[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();

	infile.open("10000color.txt");

	p = &array10000color[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();

	infile.open("50000color.txt");

	p = &array50000color[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();

	infile.open("200000color.txt");

	p = &array200000color[0];

	while (!infile.eof())
	{
		infile >> *p;
		p++;
	}

	infile.close();
}
