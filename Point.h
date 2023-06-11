#pragma once
#include <iostream>
#include <string>

namespace miit::figure
{
	struct Point
	{
		Point(const double user_x, const double user_y);
		double get_x() const;
		double get_y() const;
		friend std::ostream& operator<< (std::ostream& out, const Point& point);
		friend bool operator==(const Point& lhs, const Point& rhs);
		std::wstring ToString(const Point& point);
		std::wstring ToString(Point* point);
		double x;
		double y;
	};
}
