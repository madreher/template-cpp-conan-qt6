project                     (TemplateConanQt)
cmake_minimum_required      (VERSION 3.5)


#######################################################################################
# Include the conan cmake file so that it can find all the conan packages (CONAN_PKG::package_name)
#######################################################################################
if( EXISTS ${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake )
    include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(NO_OUTPUT_DIRS TARGETS KEEP_RPATHS)
endif()
#######################################################################################

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets Core REQUIRED)

add_subdirectory(src)