#ifndef SQUARE_H
#define SQUARE_H

#include <iosfwd>
#include "shape.h"

class Square : public Shape {
public:
  explicit Square();

  void setSide(double);

  double getSide() const;

  PointT getCPoint() const;

  long long getArea() override;

  RectangleT getFrameRect() override;

  void move(PointT) override;

  void move(double x, double y) override;

  void scale(double) override;

  friend std::istream &operator>>(std::istream &, Square &);
private:
  double side;
  PointT cPoint;
};

#endif