#include "add_pointer_t.hpp"

#include <type_traits>

#define STATIC_ASSERT(expr) static_assert(expr, #expr)

namespace add_pointer_t_tests {

STATIC_ASSERT((std::is_same<add_pointer_t<int>, int*>::value));
STATIC_ASSERT((std::is_same<add_pointer_t<long>, long*>::value));
STATIC_ASSERT((std::is_same<add_pointer_t<float>, float*>::value));
STATIC_ASSERT((std::is_same<add_pointer_t<int*>, int**>::value));

} // namespace add_pointer_t_tests

