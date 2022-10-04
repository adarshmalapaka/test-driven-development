set(GTEST_SHUFFLE 1)

add_executable(
    pid-test
    main.cpp
    test.cpp
    ../app/PID.cpp
)

target_include_directories(pid-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(pid-test PUBLIC gtest)
