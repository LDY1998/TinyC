cmake_minimum_required(VERSION 3.14)
project(TinyC)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
# set (CMAKE_PREFIX_PATH "~/dev/antlr4-4.7.2/runtime/Cpp/cmake")

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

# Link against LLVM libraries
# target_link_libraries(simple-tool ${llvm_libs})

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
 
find_package(antlr4-runtime REQUIRED)
find_package(antlr4-generator REQUIRED)

# Set path to generator
set(ANTLR4_JAR_LOCATION ${PROJECT_SOURCE_DIR}/include/antlr/antlr-4.11.1-complete.jar)
# add runtime include directories on this project.
# include_directories( ${PROJECT_BINARY_DIR} ${ANTLR4_INCLUDE_DIR} )


# generate lexer
 antlr4_generate(
   tinyc_lexer
   ${CMAKE_CURRENT_SOURCE_DIR}/grammar/TinyCLex.g4
   LEXER
   FALSE
   FALSE
   "tinyc_lexer"
   )

   # generate parser
 antlr4_generate(
   tinyc_parser
   ${CMAKE_CURRENT_SOURCE_DIR}/grammar/TinyCParse.g4
   PARSER
   FALSE
   TRUE
   "tinyc_parser"
   "${ANTLR4_TOKEN_FILES_tinyc_lexer}"
   "${ANTLR4_TOKEN_DIRECTORY_tinyc_lexer}"
   )

   # add directories for generated include files
 include_directories( ${PROJECT_BINARY_DIR} ${ANTLR4_INCLUDE_DIR} ${ANTLR4_INCLUDE_DIR_tinyc_lexer} ${ANTLR4_INCLUDE_DIR_tinyc_parser} )

enable_testing()

add_executable(
  main main.cpp
  # lex_test
  # tests/lex_test.cc
  ${ANTLR4_SRC_FILES_tinyc_lexer} ${ANTLR4_SRC_FILES_tinyc_parser}
)

# add required runtime library
 add_dependencies( main antlr4_shared )

# target_include_directories(lex_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(
  main
  # lex_test
  GTest::gtest_main
  antlr4_shared
)

# target_link_libraries( main )

include(GoogleTest)
# gtest_discover_tests(lex_test)