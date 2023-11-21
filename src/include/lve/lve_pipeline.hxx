#pragma once 

#include <string>
#include <vector>

namespace lve {
  class LvePipeline {
    public:
      LvePipeline(const std::string& vert_path, const std::string& frag_path);

    private:
      static std::vector<char> read_file(const std::string& file_path);

      void create_graphics_pipeline(const std::string& vert_path, const std::string frag_path);
  };
}
