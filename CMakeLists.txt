cmake_minimum_required(VERSION 3.26.5)

# Set project name
set(PROJECT_NAME KATAS)

# Set project version
set(KATAS_VERSION 0.1)

# Set project 
project(${PROJECT_NAME} VERSION ${KATAS_VERSION})

# Add the katas
add_subdirectory(SnailSort)