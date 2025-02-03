#include "../inc/Player.h"

Player::Player(Point position) : MovableObject(position) {}

Player::~Player() {}

Type Player::getType() {
  return Type::Player;
}


