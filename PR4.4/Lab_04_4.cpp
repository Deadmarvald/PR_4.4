// Lab_04_4.cpp
// Вольвенко Іван
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком 
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -R)
			y = x + R;
		else
			if (x > -R && x <= 0)
				y = sqrt(R * R - x * x);
			else
				if (x > 0 && x <= 6)
					y = R - (x * R) / 6;
				else
					y = x - 6;

		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << y
			<< "    |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}