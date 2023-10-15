#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
	double x, xp, xk, dx, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -7)
			y = 0;
		else
			if (-7 < x && x <= -3)
				y = x + 7;
			else
				if (-3 < x && x <= -2)
					y = 4;
				else
					if (-2 < x && x <= 2)
						y = x * x;
					else
						if (2 < x && x <= 4)
							y = -2 * x + 8;
						else
							if (4 < x)
								y = 0;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
