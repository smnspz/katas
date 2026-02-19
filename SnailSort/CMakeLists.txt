# Set kata name
set(KATA_NAME "SnailSort")

# Add kata source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(${KATA_NAME} ${SOURCES})

# Add the `include` directory
target_include_directories(${KATA_NAME} PRIVATE include)