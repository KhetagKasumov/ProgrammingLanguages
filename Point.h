#pragma once
#include <string>

namespace miit::figures {
class Point {
public:
  /**
   * @brief Создать новую точку с координатами x, y
   *
   * @param x X координата
   * @param y Y координата
   */
  explicit Point(const double x, const double y);

  /**
   * @brief Сериализация точки в виде строки
   *
   * @return std::string точки в виде строки
   */
  std::string toString() const noexcept;

  /**
   * @brief Получить X координату
   *
   * @return double X координата
   */
  double getX() const;

  /**
   * @brief Получить Y координату
   *
   * @return double Y координата
   */
  double getY() const;

  friend std::ostream &operator<<(std::ostream &ostream, const Point &point);
  friend std::istream &operator>>(std::istream &istream, Point &point);

private:
  double x;
  double y;
};
} // namespace miit::figures
