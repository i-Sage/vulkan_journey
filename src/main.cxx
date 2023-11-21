#include <lve/app.hxx>

#include <cstdlib>
#include <stdexcept>
#include <iostream>

auto main() -> int {
  using std::cerr;
  using std::endl;

  try {
    lve::App{}.run(); 
  } catch (const std::exception& e) {
    cerr << e.what() << endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
