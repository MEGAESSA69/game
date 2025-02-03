#ifndef PLAYER_H
#define PLAYER_H

#include "MovableObject.h"
#include "BoxCollider.h"

class Player : public MovableObject {
private:

public:
  Player(Point position);
  ~Player();

  Type getType();

};
#endif
