#include "vec2.hpp"

#define STATIC_ASSERT_EQUALS(expected, actual) \
  static_assert(expected == actual, #expected " != " #actual)

namespace vec2_tests {

// Unit tests for vec2 class.
STATIC_ASSERT_EQUALS(1, vec2(1, 2).x());
STATIC_ASSERT_EQUALS(2, vec2(1, 2).y());
STATIC_ASSERT_EQUALS(3, (vec2(1, 2) + vec2(2, 3)).x());
STATIC_ASSERT_EQUALS(5, (vec2(1, 2) + vec2(2, 3)).y());
STATIC_ASSERT_EQUALS(-1, (vec2(1, 2) - vec2(2, 3)).x());
STATIC_ASSERT_EQUALS(-1, (vec2(1, 2) - vec2(2, 3)).y());

} // namespace vec2_tests

