#include "Line.h"
#include <cmath>

miit::figures::Line::Line(const Point &lhp, const Point &rhp)
    : lhp(lhp), rhp(rhp) {}

double miit::figures::Line::getLength() const {
  return std::sqrt(std::pow(lhp.getX() - rhp.getX(), 2) +
                   std::pow(lhp.getY() - rhp.getY(), 2));
}
