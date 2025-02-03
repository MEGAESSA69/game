#ifndef POINT_H
#define POINT_H

class Point {
public:
  float x;
  float y;

public:
  Point();
  Point(float x, float y);
  ~Point();

  friend bool operator==(const Point &lhs, const Point &rhs);

};

#endif
