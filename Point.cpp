#include "Point.h"
#include <string>
#include <sstream>
using namespace miit::figure;

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

std::wstring ToString(Point* point) {
	std::wstringstream buffer;
	buffer << L"{ ";
	buffer << point->x << L" " << point->y << L" }";
	return buffer.str();

}
std::wstring Point::ToString(const Point& point)
{
	return std::wstring();
}

std::ostream& miit::figure::operator<<(std::ostream& out, const Point& point)
{
	out << "Point(" << point.x << ", " << point.y << ")";
	return out;
}
