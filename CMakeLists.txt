cmake_minimum_required(VERSION 3.31)
project(PixelPP)

set(CMAKE_CXX_STANDARD 20)

# ImGui
set(IMGUI_SOURCES
        lib/imgui/imgui.cpp
        lib/imgui/imgui_draw.cpp
        lib/imgui/imgui_widgets.cpp
        lib/imgui/imgui_tables.cpp
)

set(IMGUI_BACKENDS_SOURCES
        lib/imgui/backends/imgui_impl_glfw.cpp
        lib/imgui/backends/imgui_impl_opengl3.cpp
)

# GLFW
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)

add_library(glad STATIC lib/glad/glad.c)
target_include_directories(glad PUBLIC lib/glad/include)


add_executable(PixelPP src/main.cpp
        src/Window.cpp
        src/Window.h
        src/Editor.cpp
        src/Editor.h
        src/ImageProcessor.cpp
        src/ImageProcessor.h
        src/ImageTexture.cpp
        src/ImageTexture.h
        src/ControlPanel.cpp
        src/ControlPanel.h
        src/ImagePanel.cpp
        src/ImagePanel.h)


target_include_directories(${PROJECT_NAME} PRIVATE
        src/
        lib/imgui           # ImGui Core Header
        lib/imgui/backends  # ImGui Backends Header
        lib/glfw/include    # GLFW Header
        lib/glad/include    # glad Header
        lib/stb
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        glfw
        glad
)

target_sources(${PROJECT_NAME} PRIVATE
        ${IMGUI_SOURCES}
        ${IMGUI_BACKENDS_SOURCES}
)