#include "../inc/DisplayManager.h"

DisplayManager::DisplayManager(sf::RenderWindow *window) {
  this->window = window;
};

DisplayManager::~DisplayManager() {};

void DisplayManager::DrawPosition() {

  sf::CircleShape circle(5);

  for (auto object : objects) {
    circle.setFillColor(sf::Color::Black);
    circle.setPosition(
        sf::Vector2f(object->getPosition().x, object->getPosition().y));
    window->draw(circle);
  }

}

void DisplayManager::DrawColliders() {
  sf::CircleShape circle(5);

  for (auto object : objects) {
    auto colliderCorners = object->getColliderAddress()->getPoints();
    for (auto corner : colliderCorners) {
      circle.setFillColor(sf::Color::Red);
      circle.setPosition(
          sf::Vector2f(corner.x, corner.y));
      window->draw(circle);
    }
  }

}

void DisplayManager::Add(Object *object) { objects.push_back(object); }
