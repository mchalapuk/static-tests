include_directories (${SRC_DIR}/include)
link_directories (${SRC_DIR}/test)

add_executable (${PROJECT_NAME}
  static_tests.cpp
  deg2rad.cpp
  vec2.cpp
)

