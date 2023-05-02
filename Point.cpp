#include "Point.h"
#include <string>
#include <sstream>

miit::figure::Point::Point(const double user_x, const double user_y)
	:x(user_x), y(user_y)
{
}

double miit::figure::Point::get_x() const
{
	return this->x;
}

double miit::figure::Point::get_y() const
{
	return this->y;
}

std::wstring miit::figure::ToString(Point* point)
{
	std::stringstream ss;
	ss<< "X: "  << (point.get_x()) << " Y: " << (point.get_y());
	return ss.str();
}

std::ostream& miit::figure::operator<<(std::ostream& os, Point& point)
{
	return os << miit::figure::ToString(point);
}
