#pragma once
#include "Point.h"
#include "Polygon.h"

namespace miit::figures {
class Square : public virtual Polygon {
public:
  /**
   * @brief Создание квадрата из 4-ёх точек
   *
   * @param vertex1 Точка 1
   * @param vertex2 Точка 2
   * @param vertex3 Точка 3
   * @param vertex4 Точка 4
   */
  Square(const Point &vertex1, const Point &vertex2, const Point &vertex3,
         const Point &vertex4) noexcept;

  std::string toString() const noexcept override;

  int mathSquare() const noexcept override;

  double mathPerimeter() const noexcept override;

  double circumscribedRadius() const noexcept override;

  void read(std::istream &istream) override;

  friend std::ostream &operator<<(std::ostream &ostream, const Square &square);
  friend std::istream &operator>>(std::istream &istream, Square &square);

private:
  double sideLength() const;

  Point vertex1;
  Point vertex2;
  Point vertex3;
  Point vertex4;
};
} // namespace miit::figures