#ifndef BOXCOLLIDER_H
#define BOXCOLLIDER_H

#include <vector>

#include "Collider.h"
#include "Point.h"

class BoxCollider : public Collider {
private:
  Point offset1;
  Point offset2;
  
public:
  BoxCollider(Point *position, Point offset1, Point offset2);
  ~BoxCollider();

  Type getType();
  std::vector<Point> getPoints();

  Point getUpperLeftCorner();
  Point getUpperRightCorner();
  Point getLowerLeftCorner();
  Point getLowerRightCorner();

};
#endif
