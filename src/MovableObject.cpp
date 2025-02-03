#include "../inc/MovableObject.h"

MovableObject::MovableObject(Point position) : Object(position) {
    setSpeed(10);
}

MovableObject::~MovableObject() {};

void MovableObject::Move(float dx, float dy) {
  position.x += dx;
  position.y += dy;
}

void MovableObject::setSpeed(float speed) {
  this->speed = speed * 100000;
}

float MovableObject::getSpeed() {
  return speed;
}
