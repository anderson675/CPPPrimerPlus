#include <iostream>
#include <cstdlib>
#include <ctime>
#include "02vect.h"

int main()
{
	srand(time(0));	// seed random-number generator
	double direction;
	VECTOR::Vector step;
	VECTOR::Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dStep;

	std::cout << "Enter target distance (q to quit): ";
	while (std::cin >> target)
	{
		std::cout << "Enter step length: ";
		if (!(std::cin >> dStep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.Reset(dStep, direction, 'p');
			result = result + step;
			steps++;
		}

		std::cout << "After " << steps << " steps, the subject has the following location:" << std::endl;
		std::cout << result << std::endl;
		result.polar_mode();
		std::cout << "\t\tor" << std::endl;
		std::cout << result << std::endl;
		std::cout << "Average outward distance per step = " << result.magval() / steps << std::endl;

		steps = 0;
		result.Reset(0.0, 0.0);

		std::cout << "\nEnter target distance (q to quit): ";
	}

	std::cout << "\nBye!" << std::endl;

	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;

	std::cin.get();

	return 0;
}
