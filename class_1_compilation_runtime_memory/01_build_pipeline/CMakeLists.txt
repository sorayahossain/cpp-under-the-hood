add_executable(build_pipeline_demo
    main.cpp
    math.cpp
    player.cpp
)
target_include_directories(build_pipeline_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
