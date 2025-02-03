#include "../inc/PlayerController.h"

PlayerController::PlayerController(Player *player) { this->player = player; };

PlayerController::~PlayerController() {};

void PlayerController::Input() {
  sf::Clock clock;
  float deltaTime = clock.restart().asSeconds();
  float speed = player->getSpeed();

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
    player->Move(0, -1 * speed * deltaTime);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
    player->Move(0, speed * deltaTime);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
    player->Move(-1 * speed * deltaTime, 0);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
    player->Move(speed * deltaTime, 0);
  }
};
