#ifndef OBJECT_H
#define OBJECT_H

#include "Point.h"
#include "Collider.h"
#include "Type.h"

class Object {
protected:
  Point position;
  Collider *collider;

public:
  Object(Point position);
  virtual ~Object() = 0;

  Point getPosition();
  Point* getPositionAddress();

  void setCollider(Collider *collider);
  Collider* getColliderAddress();

  virtual Type getType() = 0;

};
#endif
