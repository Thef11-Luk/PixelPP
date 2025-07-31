//
// Created by lukas on 31.07.2025.
//

#ifndef EDITOR_H
#define EDITOR_H

#pragma once

#include "ImageProcessor.h"
#include "Window.h"

class Editor {
public:
    Editor();

    void mainLoop();

private:
    Window m_window;
    ImageProcessor m_imageProcessor;
};



#endif //EDITOR_H
