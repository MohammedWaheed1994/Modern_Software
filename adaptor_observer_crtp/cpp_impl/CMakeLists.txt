# Add an executable
add_executable(cpp_adaptor source/main.cpp)

target_include_directories(cpp_adaptor PRIVATE include)

add_executable(cpp_observer source/person_observer.cpp)

target_include_directories(cpp_observer PRIVATE include)
