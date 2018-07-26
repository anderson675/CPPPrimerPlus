#include"wine2.h"

int main()
{
	std::cout << "Enter the name of wine: ";
	char lab[50];
	std::cin.getline(lab, 50);
	std::cout << "Enter the Years: ";
	int yrs;
	std::cin >> yrs;
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.show();
	std::cout << "The total bottles: " << holding.sum() << std::endl;
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.show();
	std::cout << "Total bottles for " << more.Label() << ": " << more.sum() << std::endl;
	return 0;
}
