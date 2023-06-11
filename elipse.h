#pragma once
#include "point.h"
#include <vector>
using namespace miit::figure;

class Elipse
{
public:
	Elipse(const int value_a = 0, const int value_b = 0);
	int get_a() const;
	int get_b() const;
	friend std::ostream& operator<< (std::ostream& out, const Elipse& Elipse_1);

private:
	std::vector<Point> Elipse_tops;
	const int value_a;
	const int value_b;
};
