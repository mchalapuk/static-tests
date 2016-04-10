#include "deg2rad.hpp"
#include <cmath>

#define STATIC_ASSERT_FLOAT_EQUALS(expected, actual) \
  static_assert(std::abs(expected - actual) < 0.00001L, #expected " == " #actual);

namespace deg2rad_tests {

STATIC_ASSERT_FLOAT_EQUALS(3.141592L, deg2rad(180));
STATIC_ASSERT_FLOAT_EQUALS(0.017453L, deg2rad(1));
STATIC_ASSERT_FLOAT_EQUALS(17.104226L, deg2rad(980));

} // namespace deg3rad_tests

