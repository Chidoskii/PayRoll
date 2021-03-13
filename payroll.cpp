#include <iostream>
#include <string>

using namespace std;

string NAME = "YOUR NAME";
double wage = 15.00;
double hours{ 0 };
double TotalPay = 0;

int MONTH = 0;

int DAY{ 0 };

int YEAR{ 2021 };

int mnth[14];

int day[14];

int hrs[14];

int HOUR;

int j = 0;
int h = 0;
int k = 0;

int main()
{
	cout << "Enter the Month [1-12]: " << endl;
	cin >> MONTH;
	int month = MONTH;

	while ((MONTH < 1) || (MONTH > 12))
	{
		cout << "Enter a valid month \n";
		cin >> MONTH;
	}
	
	cout << "Enter the first day of the pay period [enter a number]: " << endl;
	cin >> DAY;


	while (((MONTH == 1) || (MONTH == 3) || (MONTH == 5) || (MONTH == 7) || (MONTH == 8) || (MONTH == 10) || (MONTH == 12)) && ((DAY > 31) || (DAY < 1)))
	{
		cout << "Enter a valid day \n";
		cin >> DAY;
	}


	while ((MONTH == 2) && ((DAY > 28) || (DAY < 1)))
	{
		cout << "Enter a valid date \n";
		cin >> DAY;
	}

	while (((MONTH == 4) || (MONTH == 6) || (MONTH == 9) || (MONTH == 11)) && ((DAY > 30) || (DAY < 1)))
	{
		cout << "Enter a valid date \n";
		cin >> DAY;
	}


		if (((MONTH == 1) || (MONTH == 3) || (MONTH == 5) || (MONTH == 7) || (MONTH == 8) || (MONTH == 10) || (MONTH == 12)) && (DAY < 32))
		{
			for (int i = 0; i < 14; i++) {
				if (DAY > 31) {
					DAY = 1;
					month++;
				}

				cout << "How man hours spent at work on " << month << "-" << DAY << "-" << YEAR << "?\n";
				cin >> HOUR;
				hours += HOUR;
				mnth[j] = month;
				day[h] = DAY;
				hrs[k] = HOUR;

				++j;
				++h;
				++k;
				DAY++;
			}

			cout << "\n\nPay period: " << mnth[0] << "-" << day[0] << "-" << YEAR << " to " << mnth[13] << "-" << day[13] << "-" << YEAR << "\n\n";

			for (int i = 0; i < 14; i++) {

				cout << mnth[i] << "-" << day[i] << "-" << YEAR << ": " << "\t" << hrs[i] << "hrs" << endl;

			}
		}

		if (((MONTH == 4) || (MONTH == 6) || (MONTH == 9) || (MONTH == 7) || (MONTH == 11)) && (DAY < 31))
		{
			for (int i = 0; i < 14; i++) {
				if (DAY > 30) {
					DAY = 1;
					month++;
				}

				cout << "How many hours spent at work on " << month << "-" << DAY << "-" << YEAR << "?\n";
				cin >> HOUR;
				hours += HOUR;
				mnth[j] = month;
				day[h] = DAY;
				hrs[k] = HOUR;

				j++;
				h++;
				k++;
				DAY++;
			}

			cout << "\n\nPay period: " << mnth[0] << "-" << day[0] << "-" << YEAR << " to " << mnth[13] << "-" << day[13] << "-" << YEAR << "\n\n";

			for (int i = 0; i < 14; i++) {

				cout << mnth[i] << "-" << day[i] << "-" << YEAR << ": " << "\t" << hrs[i] << "hrs" << endl;

			}

		}

		if ((MONTH == 2) && (DAY < 29))
		{
			for (int i = 0; i < 14; i++) {
				if (DAY > 28) {
					DAY = 1;
					month++;
				}

				cout << "How many hours spent at work on " << month << "-" << DAY << "-" << YEAR << "?\n";
				cin >> HOUR;
				hours += HOUR;
				mnth[j] = month;
				day[h] = DAY;
				hrs[k] = HOUR;

				j++;
				h++;
				k++;
				DAY++;
			}

			cout << "\n\nPay period: " << mnth[0] << "-" << day[0] << "-" << YEAR << " to " << mnth[13] << "-" << day[13] << "-" << YEAR << "\n\n";

			for (int i = 0; i < 14; i++) {

				cout << mnth[i] << "-" << day[i] << "-" << YEAR << ": " << "\t" << hrs[i] << "hrs" << endl;

			}
		}



		TotalPay = wage * hours;

		cout << "\n" << NAME << " worked for a total of " << hours << " hours at a rate of $15/hr.\n\n";
	    cout << "The total amount is: $" << TotalPay << endl;


		return 0;
}
