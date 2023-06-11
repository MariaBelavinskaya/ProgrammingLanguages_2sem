#include "elipse.h"

Elipse::Elipse(const int value_a, const int value_b)
	:value_a(value_a), value_b(value_b)
{
	Point point_right(value_a, 0);
	Point point_left(-value_a, 0);
	Point point_down(0, -value_b);
	Point point_up(0, value_b);
	Elipse_tops.push_back(point_up);
	Elipse_tops.push_back(point_right);
	Elipse_tops.push_back(point_down);
	Elipse_tops.push_back(point_left);
}

std::ostream& operator<<(std::ostream& out, const Elipse& Elipse_1)
{
	std::string f;
	for (int i = 0; i < Elipse_1.Elipse_tops.size(); i++) {
		out << Elipse_1.Elipse_tops[i] << "\n";
	}
	return out;
};
