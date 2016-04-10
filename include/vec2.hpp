// Two-dimentional vector.
// Class is immutable, all operations (including constructor) are constant
// expressions.
class vec2 {
 public:
  constexpr vec2(int x = 0, int y = 0) noexcept : _x(x), _y(y) {
  }
  constexpr int x() const noexcept {
    return _x;
  }
  constexpr int y() const noexcept {
    return _y;
  }
  constexpr vec2 operator+(vec2 const& rhs) const noexcept {
    return vec2(_x + rhs._x, _y + rhs._y);
  }
  constexpr vec2 operator-(vec2 const& rhs) const noexcept {
    return vec2(_x - rhs._x, _y - rhs._y);
  }

 private:
  int _x;
  int _y;
}; // class vec2

