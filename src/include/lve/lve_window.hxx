#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>
#include "data_types.hxx"

namespace lve {

class LveWindow {
  public:
    LveWindow(u32 w, u32 h, std::string name);
    ~LveWindow();

    LveWindow(const LveWindow &)            = delete;
    LveWindow &operator=(const LveWindow &) = delete;

    inline bool should_close() { return glfwWindowShouldClose(window); }

  private:
    u32 width = 0;
    u32 height = 0;
    std::string window_name = "";

    GLFWwindow *window; 
    void init_window();   
  };

}; // namespace lve
