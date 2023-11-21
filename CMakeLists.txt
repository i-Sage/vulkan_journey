cmake_minimum_required(VERSION 3.20)

project("WORKING WITH VULKAN" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 1. Set VULKAN_SDK_PATH
if (DEFINED VULKAN_SDK_PATH)
  set(Vulkan_INCLUDE_DIRS "${VULKAN_SDK_PATH}/Include")
  set(Vulkan_LIBRARIES "${VULKAN_SDK_PATH}/Lib")
  set(Vulkan_FOUND "True")
else()
  find_package(Vulkan REQUIRED)
  message(STATUS "FOUND VULKAN: $ENV{VULKAN_SDK}")
endif()

if (NOT Vulkan_FOUND)
  message(FATAL_ERROR "COULD NOT FIND VULKAN LIBRARY!")
else()
  message(STATUS "USING VULKAN LIB AT: ${Vulkan_LIBRARIES}")
endif()

add_subdirectory(third_party)
add_subdirectory(src)
