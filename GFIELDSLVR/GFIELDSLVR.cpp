#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"

using namespace std;

//GRAVITATIONAL FIELD INTENSITY
int main()
{
	GCONST = 6.67 * pow(10, -11);

	cout << "\nMass 1:\n";
	cin >> MASS1STR;

	cout << "\nMass 2:\n";
	cin >> MASS2STR;

	cout << "\nDistance:\n";
	cin >> DISTANCESTR;

	cout << "\nVector i\n";
	cin >> VECTORISTR;

    cout << "\nVector j:\n";
	cin >> VECTORJSTR;

    double MASS1 = stod(MASS1STR);
    double MASS2 = stod(MASS2STR);
    double DISTANCE = stod(DISTANCESTR);
    double VECTORI = stod(VECTORISTR);
    double VECTORJ = stod(VECTORJSTR);
    double ERPDISTANCE = stod(ERPDISTANCESTR);
    if (MASS1STR == "EARTHMASS")
    {
        MASS1 = 5.97 * pow(10, 24);
    }
    
    if (DISTANCESTR == "EARTHRADIUS PLUS DISTANCE")
    {
        ERADIUS = 6.37 * pow(10, 6);
        cout << "\nInput distance:\n";
        cin >> ERPDISTANCESTR;
        double ERPDISTANCE = stod(ERPDISTANCESTR);

        DISTANCE = ERADIUS + ERPDISTANCE;
    }


	GFORCE = -((GCONST * MASS1) / pow(DISTANCE, 2));

	RESULTI = GFORCE * VECTORI;
	RESULTJ = GFORCE * VECTORJ;
	

	if (RESULTJ >= 0)
	{
		string sign = " + ";
		string i = " i";
		string j = " j ";
		cout << "\n\n";
        cout << RESULTI << i << sign << abs(RESULTJ) << j;
		cout << "\n\n";
	}
	else
	{
		string sign = " - ";
		string i = " i";
		string j = " j";
		cout << "\n\n";
		cout << RESULTI << i << sign << abs(RESULTJ)  << j;
		cout << "\n\n";
	}

}

/*POTENTIAL ENERGY

int main()
{
	GCONST = 6.67 * pow(10, -11);

	cout << "\nMass 1:\n";
	cin >> MASS1STR;

	cout << "\nMass 2:\n";
	cin >> MASS2STR;

	cout << "\nDistance:\n";
	cin >> DISTANCESTR;

	//cout << "\nVector i\n";
	//cin >> VECTORISTR;

	//cout << "\nVector j:\n";
	//cin >> VECTORJSTR;

    double MASS1 = stod(MASS1STR);
    double MASS2 = stod(MASS2STR);
    double DISTANCE = stod(DISTANCESTR);
    double VECTORI = stod(VECTORISTR);
    double VECTORJ = stod(VECTORJSTR);

	//GFORCE = -((GCONST * MASS1) / pow(DISTANCE, 2));

	//RESULTI = GFORCE * VECTORI;
	//RESULTJ = GFORCE * VECTORJ;

    PENERGY = -(GCONST * MASS1 * MASS2) / DISTANCE;
    RESULT = PENERGY;

    cout << "\n\n";
    cout << RESULT << "N";
    cout << "\n\n";
    

}*/

/*MECHANICAL ENERGY OF A ORBITING BODY*/
/*int main()
{
    GCONST = 6.67 * pow(10, -11);

    cout << "\nMass 1:\n";
    cin >> MASS1;
    if (MASS1)

    cout << "\nMass 2:\n";
    cin >> MASS2;

    cout << "\nDistance:\n";
    cin >> DISTANCE;

    //cout << "\nVector i\n";
    //cin >> VECTORI;

    //cout << "\nVector j:\n";
    //cin >> VECTORJ;

    //GFORCE = -((GCONST * MASS1) / pow(DISTANCE, 2));

    //RESULTI = GFORCE * VECTORI;
    //RESULTJ = GFORCE * VECTORJ;

    OMENERGY = -(GCONST * MASS1 * MASS2) / 2*DISTANCE;
    RESULT = OMENERGY;

    cout << "\n\n";
    cout << RESULT << "J";
    cout << "\n\n";


}*/


/* GUIINTERFACEBETA
int variableAdded;
int userOption;

int variableToRemove;


int main()
{
    typedef struct Varstruct
    {
        char name[15] = " ";
        char value[15] = " ";
    };
    Varstruct variable[10];
    
    GCONST = 6.67 * pow(10, -11);

    bool on = true;
	
    while (on)
    {
        cout << "=== Menu ===\n";
        cout << "Enter your option:\n";
        cout << "1- Add variable\n2- Calculate!\n3- Show variables\n4- Exit\n";
        cout << "=== ==== ===\n";
        cout << "> ";
        cin >> userOption;
        switch (userOption)
        {
        default:
            
            break;

        case 1://Add variable
            cout << "\nEnter the name of the variable:\n> ";
            cin >> variable[variableAdded].name;
            cout << "\nEnter value:\n> ";
            cin >> variable[variableAdded].value;
            cout << "\n\n=== Variable " << variable[variableAdded].name << " added succesfully ===\n\n";
            variableAdded++;
            break;
        case 2://calculate!
            cout << 

            break;
        case 3://show variables
                cout << "\n== variables list ==\n";
                for (size_t i = 0; i < 5; i++)
                {
                    if (variable[i].value > 0)
                    {
                        cout << i + 1 << ". " << variable[i].name << "    :    " << variable[i].value << ".\n";
                    }
                }
                cout << endl;
                break;
            
            break;
        case 4:
            on = false;
            break;//==alt+f4
        }
    }

}*/
	
