#include "../inc/Point.h"
#include <gtest/gtest.h>

TEST(PointTest, Constructor) {
  Point a;
	EXPECT_EQ(a.x, 0);
	EXPECT_EQ(a.y, 0);
}

TEST(PointTest, Constructor2) {
  Point a(1,3);
	EXPECT_EQ(a.x, 1);
	EXPECT_EQ(a.y, 3);
}
