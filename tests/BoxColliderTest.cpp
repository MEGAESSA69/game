#include "../inc/BoxCollider.h"
#include <gtest/gtest.h>

TEST(ColliderTest, Constructor) {
  Point point(1, 3);
  BoxCollider collider(&point, Point(-1, 1), Point(1, -1));

	EXPECT_EQ(collider.getUpperLeftCorner(), Point(0, 4));
	EXPECT_EQ(collider.getUpperRightCorner(), Point(2, 4));
	EXPECT_EQ(collider.getLowerLeftCorner(), Point(0, 2));
	EXPECT_EQ(collider.getLowerRightCorner(), Point(2, 2));
}

TEST(ColliderTest, MovingPoint) {
  Point point(1, 3);
  BoxCollider collider(&point, Point(-1, 1), Point(1, -1));
  
  point.x += 2;
  point.y += 4;

	EXPECT_EQ(collider.getUpperLeftCorner(), Point(2, 8));
	EXPECT_EQ(collider.getUpperRightCorner(), Point(4, 8));
	EXPECT_EQ(collider.getLowerLeftCorner(), Point(2, 6));
	EXPECT_EQ(collider.getLowerRightCorner(), Point(4, 6));
}
