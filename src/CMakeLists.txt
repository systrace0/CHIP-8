add_executable(${PROJECT_NAME}
  main.cpp
)

find_package(SDL2 REQUIRED CONFIG)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    SDL2::SDL2
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)