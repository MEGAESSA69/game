#include "../inc/BoxCollider.h"

BoxCollider::BoxCollider(Point *position, Point offset1, Point offset2)
    : Collider(position) {
  this->position = position;
  this->offset1 = offset1;
  this->offset2 = offset2;
}

BoxCollider::~BoxCollider() {}

std::vector<Point> BoxCollider::getPoints() {
  std::vector<Point> points;

  points.push_back(Point(position->x + offset1.x, position->y + offset1.y));
  points.push_back(Point(position->x + offset2.x, position->y + offset1.y));
  points.push_back(Point(position->x + offset1.x, position->y + offset2.y));
  points.push_back(Point(position->x + offset2.x, position->y + offset2.y));

  return points;
}

Type BoxCollider::getType() {
  return Type::BoxCollider;
}

Point BoxCollider::getUpperRightCorner() {
  std::vector<Point> points = getPoints();
  int max = points[0].x + points[0].y;
  Point bestPoint = points[0];

  for (auto point : points) {
    if (point.x + point.y >= max) {
      max = point.x + point.y;
      bestPoint = point;
    }
  }

  return bestPoint;
}

Point BoxCollider::getLowerLeftCorner() {
  std::vector<Point> points = getPoints();
  int min = points[0].x + points[0].y;
  Point thePoint = points[0];

  for (auto point : points) {
    if (point.x + point.y <= min) {
      min = point.x + point.y;
      thePoint = point;
    }
  }

  return thePoint;
}

Point BoxCollider::getUpperLeftCorner() {
  return Point(getLowerLeftCorner().x, getUpperRightCorner().y);
}

Point BoxCollider::getLowerRightCorner() {
  return Point(getUpperRightCorner().x, getLowerLeftCorner().y);
}
