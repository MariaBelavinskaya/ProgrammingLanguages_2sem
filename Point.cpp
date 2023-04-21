#include "Point.h"
#include <string>

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

std::string miit::figure::ToString(Point point)
{
	return "X: " + std::to_string(point.get_x()) + " Y: " + std::to_string(point.get_y());
}

std::ostream& miit::figure::operator<<(std::ostream& os, Point& point)
{
	return os << miit::figure::ToString(point);
}
