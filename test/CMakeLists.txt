add_executable(${PROJECT_NAME}-test foonction-test.cc)
target_link_libraries(${PROJECT_NAME}-test gtest gtest_main ${PROJECT_NAME})

add_test(NAME ${PROJECT_NAME}-test COMMAND ${PROJECT_NAME}-test)

if(CMAKE_BUILD_TYPE STREQUAL "PROFILE")
add_custom_target(
    gcovr
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-test
    COMMAND gcovr --html-details -o gcovr.html --exclude '.*googletest.*' -r ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR}
    DEPENDS ${PROJECT_NAME}-test
)
endif()