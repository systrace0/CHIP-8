add_executable(${PROJECT_NAME}
  main.cpp
  App.cpp
)

find_package(SDL2 REQUIRED CONFIG)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    SDL2::SDL2
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)
