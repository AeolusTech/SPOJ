add_executable(tetra tetra.cpp)

target_link_libraries(tetra gtest_main)

set_target_properties( tetra
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)


add_test(
  NAME
    ut
  COMMAND
     env GTEST_COLOR=1 ${CMAKE_BINARY_DIR}/bin/tetra
  )
