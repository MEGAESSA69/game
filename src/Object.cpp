#include "../inc/Object.h"

Object::Object(Point position) {
  this->position = position;
  this->collider = nullptr;
}

Object::~Object() {
  if (collider != nullptr) {
    delete collider;
  }
};

Point Object::getPosition() { 
  return position;
}

Point* Object::getPositionAddress() {
  return &position;
}

void Object::setCollider(Collider *collider) {
  if (this->collider != nullptr) { 
    delete collider;
  }
  this->collider = collider;
}

Collider* Object::getColliderAddress() {
  return collider;
}
