// Compilation error must be generated in order to print anything.
// This function generates this error (static assertion always fails).
// Template parameters of calls containing failed static assertions
// are never printed by gcc compiler.
template <class val_t>
constexpr val_t staticAssertFail(val_t value) {
  // Value must be passed to trick the compiler
  // that it's needed to evaluate the assertion.
  static_assert(value && false, "debugging value");
  return value;
}

// Another function that calls the function above.
// Template parameters of this function will be printed by the compiler.
template <class val_t, val_t value>
constexpr val_t debugStaticValue() {
  return staticAssertFail(value);
}

// Helper macro that will be used to print values.
// To use it, just wrap a value you wish to debug.
#define DSV(v) debugStaticValue<std::remove_cv<std::remove_reference<decltype(v)>::type>::type, v>()

