cmake_minimum_required(VERSION 3.14)
project(cpp_psu)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_psu
        n/second.cpp)

# ??????? ??? ????????? ??????? ????? ??????
add_custom_target(run_gnuplot
        COMMAND gnuplot plot_commands.gp
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Running Gnuplot to generate graphs"
)
add_dependencies(run_gnuplot cpp_psu)
