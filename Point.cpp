#include "Point.h"
#include <sstream>

miit::figures::Point::Point(const double x, const double y) : x(x), y(y) {}

std::string miit::figures::Point::toString() const noexcept {
  std::stringstream ss;

  ss << *this;
  return ss.str();
}

double miit::figures::Point::getX() const { return this->x; }

double miit::figures::Point::getY() const { return this->y; }

std::ostream &miit::figures::operator<<(std::ostream &ostream,
                                        const Point &polygon) {
  return ostream << "Point(" << polygon.x << ", " << polygon.y << ")";
}

std::istream &miit::figures::operator>>(std::istream &istream, Point &point) {
  return istream >> point.x >> point.y;
}
