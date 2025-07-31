//
// Created by lukas on 31.07.2025.
//

#ifndef WINDOW_H
#define WINDOW_H

#pragma once

#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
public:
    Window(int width, int height, const std::string &title);
    ~Window();


    [[nodiscard]] bool shouldClose() const;

    void startFrame();
    void endFrame();

    [[nodiscard]] GLFWwindow* getGLFWWindow() const;

private:
    GLFWwindow* m_window = nullptr;

    static void errorCallback(int error, const char* description);
    static void framebufferSizeCallback(GLFWwindow* window, int width, int height);

    void initGLFW(int width, int height, const std::string &title);
    void initOpenGL(int width, int height);
    void initImGui();
};


#endif //WINDOW_H
