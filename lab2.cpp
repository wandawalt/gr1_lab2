// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
 /* for (int i = 0; i < 10; i++)
  {
	  cout << i << endl;
  }
  return 0;
  */

  //jesli zmienimy <10 na <=10 to program wypisze liczby od 0 do 10 w³¹cznie

	for (int i = 5; i <= 7; i++)
	{
		cout << i << endl;
	}
	cout << endl << endl;

	for (int i = 0; i <= 10; i+=2)
	{
		cout << i << endl;
	}
	cout << endl << endl;

	for (int i = 10; i >= 0; i -= 1)
	{
		cout << i << endl;
	}
	cout << endl << endl;

//zadanie 3
/*
	int fahr, celsius;
	int start, limit, krok;

	start = 0;
	limit = 200;
	krok = 20;
	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32);
		cout << fahr << " " << celsius << endl;

	}

	*/
	//zadanie 5

	//jesli zmienimy 5.0 / 9.0 na 5/9 to wypisza sie zera

	//zadanie 6
	int fahr, celsius;
	int start, limit, krok;

	cout << "start: ";
	cin >> start;
	cout << "limit: ";
	cin >> limit;
	cout << "krok: ";
	cin >> krok;
	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32);
		cout << fahr << " " << celsius << endl;
	}
	cout << endl << endl;
	
	//zadanie 7

	int number;
	for (int i=0; i < 10; i++)
	{
		cin >> number;
		if (number>0)
		{
			cout << number << endl;
		}
		else if (number < 0)
		{
			cout << "liczba ujemna" << endl;
		}
		else
		{
			cout << "zero" << endl;
		}
	}
}


