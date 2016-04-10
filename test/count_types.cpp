#include "count_types.hpp"

#define STATIC_ASSERT_EQUALS(expected, actual) \
  static_assert(expected == actual, #expected " == " #actual)

namespace count_types_tests {

STATIC_ASSERT_EQUALS(0, (count_types<>::value));
STATIC_ASSERT_EQUALS(1, (count_types<int>::value));
STATIC_ASSERT_EQUALS(3, (count_types<int, float, double>::value));
STATIC_ASSERT_EQUALS(10, (count_types<int, int, int, int, int, int, int, int, int, int>::value));

} // namespace count_types_tests

