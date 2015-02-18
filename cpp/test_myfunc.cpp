#include <gtest/gtest.h>
#include "myfunc.h"

TEST(MyfuncTest, getyTest)
{
	Myfunc my_entity;
	int y;
	my_entity.get_y(y);
	ASSERT_EQ(110, y);

}
