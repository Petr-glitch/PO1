#include <iostream>

using namespace std;

class cal {
		bool use = false;
		double mem;
		double b;
public:
	
	


	double add();

		double sub();

		double mlt();

		double div();

		double mod();

		void reset();
		void menu();
	

};

double cal::add()
{
	mem += b;
	return mem;
}

double cal::sub()
{
	mem -= b;
	return mem;
}
double cal::mlt()
{
	mem *= b;
	return mem;
}
double cal::div()
{
	if (b == 0)
	{
		cerr << "DZIELENIE PRZEZ 0 JEST BLEDEM, ZWRACANIE 0, WYCZYSC KALKULATOR";
		return 0;
	}
	else
	{
		mem /= b;
		return mem;
	}
}
double cal::mod() {
	return mem - (int)(mem / b) * b;
}

void cal::reset()
{
	use = false;
}

void cal::menu()
{
	int x;
	while (true) {

		cout << "1.DODAWANIE" << endl;
		cout << "2.ODEJMOWANIE" << endl;
		cout << "3.MNOZENIE" << endl;
		cout << "4.DZIELENIE" << endl;
		cout << "5.MODULO" << endl;
		cout << "6.RESET" << endl;
		cout << "WYBIERZ OPERACJE" << endl;
		cin >> x;

		if (x == 6)
		{
			reset();
			continue;
		}
		if (use == true)
		{
			use = false;
			cout << "PODAJ DRUGA LICZBE (1 Z PAMIECI)" << endl;
			cin >> b;

		}
		else
		{
			use = true;
			cout << "Podaj 2 liczby" << endl;
			cin >> mem >> b;
		}

		switch (x) {
		case 1:
			mem = add();
			cout << "WYNIK: " << mem << endl;
			break;
		case 2:
			mem = sub();
			cout << "WYNIK: " << mem << endl;
			break;
		case 3:
			mem = mlt();
			cout << "WYNIK: " << mem << endl;
			break;
		case 4:
			mem = div();
			cout << "WYNIK: " << mem << endl;
			break;
		case 5:
			mem = mod();
			cout << "WYNIK: " << mem << endl;
			break;
		}
	}

}


int main()
{
	cal k;

	k.menu();

}