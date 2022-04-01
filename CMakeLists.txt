cmake_minimum_required(VERSION 3.18)

project(cpm_and_doctest)

enable_testing()
set(CMAKE_CXX_STANDARD 17)

set(CPM_DOWNLOAD_VERSION 0.27.2) 
set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")

if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
    message(STATUS "Downloading CPM.cmake")
    file(DOWNLOAD https://github.com/TheLartians/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CPM_DOWNLOAD_LOCATION})
endif()

include(${CPM_DOWNLOAD_LOCATION})

CPMAddPackage(
    NAME spdlog
    GITHUB_REPOSITORY gabime/spdlog
    VERSION 1.7.0)

CPMAddPackage(
    NAME doctest
    GITHUB_REPOSITORY doctest/doctest
    VERSION 2.4.8)

add_subdirectory(tests)

add_executable(cpm_and_doctest src/main.cpp)

target_link_libraries(cpm_and_doctest spdlog)

