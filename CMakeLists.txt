
cmake_minimum_required(VERSION 3.10)

# Project Name
project(chat_app)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(
    /usr/local/include   # Crow headers
    /usr/include         # Boost and system headers
    ${CMAKE_SOURCE_DIR}/include # Project-specific headers
)

# Link directories
link_directories(/usr/lib)

# Add executable
add_executable(chat_app
    src/main.cc
    src/routes/baseRoute.cc
    src/routes/routeRegistrar.cc
    src/utils/configReader.cc
    src/utils/versionReader.cc
    src/utils/dbConnection.cc
)

# Link libraries
target_link_libraries(chat_app PRIVATE
    boost_system
    boost_date_time
    pqxx
)
