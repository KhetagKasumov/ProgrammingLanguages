#pragma once
#include "Point.h"

namespace miit::figures {
class Line {
public:
  /**
   * @brief Создать новую линию из двух точек
   *
   * @param lhp Левая точка
   * @param rhp Правая точка
   */
  Line(const Point &lhp, const Point &rhp);

  /**
   * @brief Получить длину линии
   *
   * @return double Длина линии
   */
  double getLength() const;

private:
  const Point lhp;
  const Point rhp;
};
} // namespace miit::figures
