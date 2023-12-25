set(RC_ENABLE_GTEST ON)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.13.0
  GIT_PROGRESS   TRUE
)
FetchContent_MakeAvailable(googletest)

# Uncomment if the rapidcheck library is wanted
# FetchContent_Declare(
#   rapidcheck
#   GIT_REPOSITORY https://github.com/emil-e/rapidcheck.git
#   GIT_TAG        master
#   GIT_PROGRESS   TRUE
# )
# FetchContent_MakeAvailable(rapidcheck)

enable_testing()

file(GLOB_RECURSE TestSources
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
    
add_executable( InstructorTests ${TestSources} )
include_directories ( ${GoogleTestCPlusPlus_SOURCE_DIR}/src )

target_link_libraries(
    InstructorTests
    PRIVATE
    StudentFiles
    GTest::gtest_main
#    rapidcheck
#    rapidcheck_gtest
)

include(GoogleTest)
gtest_discover_tests(InstructorTests)
