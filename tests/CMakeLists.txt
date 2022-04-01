add_executable(main examples/main.cpp)


include(${CMAKE_BINARY_DIR}/_deps/doctest-src/scripts/cmake/doctest.cmake)
doctest_discover_tests(main)

target_link_libraries(main PRIVATE doctest)