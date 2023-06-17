#pragma once
#include <istream>
#include <string>

namespace miit::figures {
class Polygon {
public:
  /**
   * @brief Деструктор полигона
   */
  virtual ~Polygon() = 0;

  /**
   * @brief Сериализация фигуры в виде строки
   *
   * @return std::string Фигура в виде строки
   */
  virtual std::string toString() const noexcept = 0;

  /**
   * @brief Вычислить площадь фигуры
   *
   * @return int Площадь фигуры
   */
  virtual int mathSquare() const noexcept = 0;

  /**
   * @brief Вычислить периметр фигуры
   *
   * @return int
   */
  virtual double mathPerimeter() const noexcept = 0;

  /**
   * @brief Расчитать радиус описанной вокруг многоугольника фигуры
   *
   * @return double Радиус описанной вокруг многоугольника фигуры
   */
  virtual double circumscribedRadius() const noexcept = 0;

  /**
   * @brief Чтение фигуры из стандартного потока ввода
   */
  virtual void read(std::istream &istream) = 0;
};
} // namespace miit::figures
