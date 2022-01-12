#include <iostream>
#include <cmath>
#include <string>


using namespace std;

double MASS1;
double MASS2;
double DISTANCE;
double GFORCE;
double KENERGY;
double PENERGY;
double MENERGY;
double VECTORI;
double VECTORJ;
double RESULTI;
double RESULTJ;
double GCONST;

double RESULT;



int main()
{
	GCONST = 6.67 * pow(10, -11);

	cout << "\nMass 1:\n";
	cin >> MASS1;

	cout << "\nMass 2:\n";
	cin >> MASS2;

	cout << "\nDistance:\n";
	cin >> DISTANCE;

	cout << "\nVector i\n";
	cin >> VECTORI;

	cout << "\nVector j:\n";
	cin >> VECTORJ;

	GFORCE = -((GCONST * MASS1) / pow(DISTANCE, 2));

	RESULTI = GFORCE * VECTORI;
	RESULTJ = GFORCE * VECTORJ;
	

	if (RESULTJ < 0)
	{
		string sign = " - ";
		string i = " i";
		string j = " j ";
		cout << "\n\n";
		cout << RESULTI << i << sign << RESULTJ*(-1) << j;
		cout << "\n\n";
	}
	else
	{
		string sign = " + ";
		string i = " i";
		string j = " j";
		cout << "\n\n";
		cout << RESULTI << i << sign << RESULTJ << j;
		cout << "\n\n";
	}

}
	
