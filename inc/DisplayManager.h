#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

#include <vector>

#include "Object.h"

class DisplayManager {
private:
  sf::RenderWindow *window;
  std::vector<Object*> objects; 

public:
  DisplayManager(sf::RenderWindow *window);
  ~DisplayManager();

  void DrawPosition();
  void DrawColliders();
  void Add(Object *object);

};
#endif
