#include <iostream>
#include "../task_1/elipse.h"

using namespace miit::figure;

int main()
{
	int value_a = 5; 
	int value_b = 10;
	Elipse first_Elipse(value_a, value_b);
	std::cout << first_Elipse;
	return 0;
}
