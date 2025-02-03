#ifndef COLLIDER_H
#define COLLIDER_H

#include <vector>

#include "Point.h"
#include "Type.h"

class Collider {
protected:
  Point *position;
  
public:
  Collider(Point *position);
  virtual ~Collider();

  virtual Type getType() = 0;
  virtual std::vector<Point> getPoints() = 0;

};
#endif
