#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>

#include "Player.h"

class PlayerController {
private:
  Player *player;

public:
  PlayerController(Player *player);
  ~PlayerController();

  void Input();

};
#endif
