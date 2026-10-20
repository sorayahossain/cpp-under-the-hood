# The same source file is built in two different ways.
add_library(score_static STATIC score.cpp)
target_include_directories(score_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(score_shared SHARED score.cpp)
target_include_directories(score_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(score_shared PRIVATE SCORE_SHARED_BUILD)

add_executable(game_with_static_library main.cpp)
target_link_libraries(game_with_static_library PRIVATE score_static)

add_executable(game_with_shared_library main.cpp)
target_compile_definitions(game_with_shared_library PRIVATE SCORE_SHARED_USE)
target_link_libraries(game_with_shared_library PRIVATE score_shared)
