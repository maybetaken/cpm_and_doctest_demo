add_executable(main examples/main.cpp ../src/add.cpp)
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR})

include(${CMAKE_BINARY_DIR}/_deps/doctest-src/scripts/cmake/doctest.cmake)
doctest_discover_tests(main)

target_link_libraries(main PRIVATE doctest)
