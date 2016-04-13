#include <cstdlib>

// Meta-function that counts types.
// It contains a parameter pack as template argument (which can be empty).
// There is no implementation, because everything will be covered in specializations.
template <class ...args_t>
struct count_types;

// Partial specialization that will be chosen only if parameter pack is empty.
template <>
struct count_types<> {
  static const size_t value = 0;
};

// Partial specialization that will be chosen by the compiler
// if there is at least one type (head_t) in parameter pack.
template <class head_t, class ...tail_t>
struct count_types<head_t, tail_t...> {
  static const size_t value = 1 + count_types<tail_t...>::value;
};

