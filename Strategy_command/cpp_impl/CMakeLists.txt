# Add an executable
add_executable(cpp_strategy_command source/strategy_main.cpp source/shapes.cpp source/strategy.cpp)

target_include_directories(cpp_strategy_command PRIVATE include)
