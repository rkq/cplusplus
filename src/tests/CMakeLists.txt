file(GLOB srcs ../*.cc)
file(GLOB test_srcs *.cc)
add_executable(cplusplus_tests ${srcs} ${test_srcs})
target_link_libraries(
  cplusplus_tests
  gtest
  gtest_main
)
