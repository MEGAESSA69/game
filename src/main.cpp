#include "../inc/DisplayManager.h"
#include "../inc/PlayerController.h"

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "essa");
  DisplayManager dm(&window);

  Player player(Point(50, 50));

  player.setCollider(new BoxCollider(player.getPositionAddress(), Point(-20,20), Point(20,-20)));
  player.setSpeed(20);

  PlayerController pc(&player);

  dm.Add(&player);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    pc.Input();
    dm.DrawPosition();
    /*dm.DrawColliders();*/

    window.display();
    window.clear(sf::Color::White);
  }

  return 0;
}
