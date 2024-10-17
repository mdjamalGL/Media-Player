cmake_minimum_required(VERSION 3.0)
project(GloApp)

set(CMAKE_CXX_STANDARD 17)          
set(CMAKE_CXX_STANDARD_REQUIRED ON)  
set(CMAKE_CXX_EXTENSIONS OFF)      

find_package(wxWidgets REQUIRED COMPONENTS core base media)
include(${wxWidgets_USE_FILE})

include_directories(${CMAKE_SOURCE_DIR}/headers)

add_executable(GloApp src/main.cpp
                      src/RootFrame.cpp
                      src/ImagePlayback.cpp 
                      src/VideoPlayback.cpp 
                      src/Resource.cpp)

target_link_libraries(GloApp PRIVATE ${wxWidgets_LIBRARIES})

