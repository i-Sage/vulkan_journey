#include <lve/lve_window.hxx>
#include <GLFW/glfw3.h>

namespace lve {

  LveWindow::LveWindow(u32 w, u32 h, std::string window_name) 
    : width{w}, height{h}, window_name{window_name}
  {
    init_window();
  }

  LveWindow::~LveWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
  }  

  void LveWindow::init_window() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);  
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
    window = glfwCreateWindow(width, height, window_name.c_str(), nullptr, nullptr);
  }
}
