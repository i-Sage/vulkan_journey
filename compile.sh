#!/bin/bash

./glslc src/shaders/simple_shader.vert -o src/shaders/simple_shader.vert.spv
./glslc src/shaders/simple_shader.frag -o src/shaders/simple_shader.frag.spv
