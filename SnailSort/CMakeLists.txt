# Set kata name
set(KATA_NAME "SnailSort")

# Add kata source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(${KATA_NAME} ${SOURCES})

# Add the `include` directory
target_include_directories(${KATA_NAME} PRIVATE include)

# Enable debug symbols for debugging
target_compile_options(${KATA_NAME} PRIVATE -g)

# On macOS, generate dSYM bundle for debugging
# if(APPLE)
#     set_target_properties(${KATA_NAME} PROPERTIES
#         XCODE_ATTRIBUTE_DEBUG_INFORMATION_FORMAT "dwarf-with-dsym"
#     )
# endif()