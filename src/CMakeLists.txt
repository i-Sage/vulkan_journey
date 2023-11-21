add_executable(main main.cxx 
    src/app.cxx
    src/lve_window.cxx
    src/lve_pipeline.cxx
)

target_compile_features(main PUBLIC cxx_std_20)
target_include_directories(main PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include/)
target_link_libraries(main PUBLIC
  glfw
  fmt
  glm
  ${Vulkan_LIBRARIES})
