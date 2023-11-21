#include <lve/app.hxx>

namespace lve {

  void App::run() {
    while (!lve_window.should_close()) {
      glfwPollEvents();
    }
  } 

}
