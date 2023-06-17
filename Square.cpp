#include "Square.h"
#include "Line.h"
#include <cmath>
#include <sstream>

miit::figures::Square::Square(const Point &vertex1, const Point &vertex2,
                              const Point &vertex3,
                              const Point &vertex4) noexcept
    : vertex1(vertex1), vertex2(vertex2), vertex3(vertex3), vertex4(vertex4) {}

std::string miit::figures::Square::toString() const noexcept {
  std::stringstream ss;

  ss << *this;

  return ss.str();
}

int miit::figures::Square::mathSquare() const noexcept {
  return std::pow(sideLength(), 2);
}

double miit::figures::Square::mathPerimeter() const noexcept {
  return sideLength() * 4;
}

double miit::figures::Square::circumscribedRadius() const noexcept {
  return M_SQRT2l * sideLength() / 2;
}

void miit::figures::Square::read(std::istream &istream) { istream >> *this; }

double miit::figures::Square::sideLength() const {
  return Line(vertex1, vertex2).getLength();
}

std::ostream &miit::figures::operator<<(std::ostream &ostream,
                                        const Square &square) {
  return ostream << "Square(" << square.vertex1 << ", " << square.vertex2
                 << ", " << square.vertex3 << ", " << square.vertex4 << ")";
}

std::istream &miit::figures::operator>>(std::istream &istream, Square &square) {
  return istream >> square.vertex1 >> square.vertex2 >> square.vertex3 >>
         square.vertex4;
}
