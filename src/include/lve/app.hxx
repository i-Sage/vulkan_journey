#pragma once 

#include "lve_window.hxx"
#include "lve_pipeline.hxx"

namespace lve {

  class App {
    public:
      static constexpr u32 WIDTH  = 800;
      static constexpr u32 HEIGHT = 600;

      void run();

    private:
    LveWindow lve_window {WIDTH, HEIGHT, "Hello Vulkan"};
    LvePipeline lve_pipeline{ "src/shaders/simple_shader.vert.spv", "src/shaders/simple_shader.frag.spv"};
  };
}
