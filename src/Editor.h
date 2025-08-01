//
// Created by lukas on 31.07.2025.
//

#ifndef EDITOR_H
#define EDITOR_H

#pragma once

#include "ImageProcessor.h"
#include "Window.h"
#include "ImageTexture.h"
#include "ControlPanel.h"
#include "ImagePanel.h"

class Editor {
public:
    Editor();
    ~Editor();
    void mainLoop();

private:
    Window m_window;
    ImageTexture m_originalTexture;
    ImageProcessor m_imageProcessor;
    ControlPanel m_controlPanel;
    ImagePanel m_imagePanel;
};



#endif //EDITOR_H
