cmake_minimum_required(VERSION 3.16.3)

project(AutoBuilder)

set(CMAKE_CXX_STANDARD 20)

# -----------------------------------------
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main.cpp)

add_subdirectory(Piece)
add_subdirectory(Auto)
# target_include_directories(${PROJECT_NAME} PUBLIC Piece)
# target_link_libraries(${PROJECT_NAME}  Piece)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#Piece folder
target_sources(${PROJECT_NAME} PRIVATE 
    ${PROJECT_SOURCE_DIR}/Piece/planPiece.h
    ${PROJECT_SOURCE_DIR}/Piece/pieces.h
    ${PROJECT_SOURCE_DIR}/Piece/piece.cpp
)
#Auto Folder
target_sources(${PROJECT_NAME} PRIVATE 
    ${PROJECT_SOURCE_DIR}/Auto/auto.h
)
#BuilderAuto Folder
target_sources(${PROJECT_NAME} PRIVATE 
    ${PROJECT_SOURCE_DIR}/BuilderAuto/builderAuto.h
    ${PROJECT_SOURCE_DIR}/BuilderAuto/builder.cpp
)

# target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# target_include_directories(${PROJECT_NAME} PUBLIC Auto)
# target_link_libraries(${PROJECT_NAME}  Auto)

# target_include_directories(${PROJECT_NAME} PUBLIC BuilderAuto)
# target_link_libraries(${PROJECT_NAME}  BuilderAuto)
# -----------------------------------------

# add_executable(buildAuto)

#is for executable
# add_executable(${PROJECT_NAME} main.cpp )



#SET(GCC_COVERAGE_LINK_FLAGS    "-pthread")
#add_compile_options(-lpthread )
# 1.
# target_include_directories(...) is required to do 
#  the simple #include "whatever.h" without needing 
#to include the folder path in your C++ files

# 2.
# target_link_libraries(...) is required to link 
# the main.cpp's output to the library's output so 
# they can call each other in the build
# (I still need to understand what linking is more specifically)

# 3.
# target_link_directories(...) was NOT required, 
# and my build (CMake, Make, and running the executable) 
# still fully worked without this. (Haven't looked 
# into the docs on this function, 
# since I'm a beginner at CMake for now haha).
# TARGET_LINK_LIBRARIES(Piece Auto BuilderAuto)


