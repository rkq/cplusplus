include_directories("../")
file(GLOB srcs ../*.cc)
file(GLOB test_srcs *.cc)
add_executable(algods_tests ${srcs} ${test_srcs})
target_link_libraries(
  algods_tests
  gtest
  gtest_main
)
