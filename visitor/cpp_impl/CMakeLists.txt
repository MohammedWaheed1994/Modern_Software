# Add an executable
add_executable(cpp_visitor source/main.cpp source/implementation.cpp)

target_include_directories(cpp_visitor PRIVATE include)
