// Mathematical PI constant.
// Literal of type double is bound statically.
const auto PI = 3.141592L;

// Degrees to radians convertion ratio.
// The compiler will compute right-hand expression and replace it with
// single value, because all values used in the expression are bound statically.
// This means that value of RAD_2_DEG is also be bound statically.
const auto DEG_2_RAD = 2 * PI / 360;

// Function converting degrees into radians.
// Declared as constant expression, which means that it can be executed
// during the compilation (the code is statically bound).
constexpr double deg2rad(double deg) {
  return deg * DEG_2_RAD;
}

