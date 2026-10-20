# The build target explicitly lists the .cpp files that belong to the program.
add_executable(file_structure_demo
    main.cpp
    rain.cpp
)

target_include_directories(file_structure_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
