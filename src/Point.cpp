#include "../inc/Point.h"

Point::Point() {
  this->x = 0;
  this->y = 0;
};

Point::Point(float x, float y) {
  this->x = x;
  this->y = y;
}

Point::~Point() {};

bool operator==(const Point &lhs, const Point &rhs) {
  return (lhs.x == rhs.x && lhs.y == rhs.y);
}
