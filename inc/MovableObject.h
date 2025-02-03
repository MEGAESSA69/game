#ifndef MOVABLEOBJECT_H
#define MOVABLEOBJECT_H

#include "Object.h"

class MovableObject : public Object {
protected:
  float speed;

public:
  MovableObject(Point position);
  virtual ~MovableObject() = 0;

  void Move(float dx, float dy);

  void setSpeed(float speed);
  float getSpeed();

};
#endif
