#include <algorithm>
#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	double x1, x2, x3, y1, y2, y3;
	double AB, BC, AC;
	cout << "Введи координаты треугольника\nx1)";
	cin >> x1;
	cout << "y1)";
	cin >> y1;
	cout << "x2)";
	cin >> x2;
	cout << "y2)";
	cin >> y2;
	cout << "x3)";
	cin >> x3;
	cout << "y3)";
	cin >> y3;
	AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double p = (AB + BC + AC) / 2;
	double sq = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	double ha, hb, hc;
	ha = (2 * sq) / AB;
	hb = (2 * sq) / BC;
	hc = (2 * sq) / AC;
	const int len = 3;
	double array[len] = { ha, hb, hc };
	sort(array, array + len);
	for (int i = 0; i < len; ++i)
		std::cout << array[i] << ' ';
	//cout << ha << "\n";
	//cout << hb << "\n";
	//cout << hc << "\n";
	
	return 0;
}
