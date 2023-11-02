project(test)

enable_language("CUDA")
add_executable(test gpu.cu main.cc)
