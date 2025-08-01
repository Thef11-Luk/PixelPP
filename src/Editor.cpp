//
// Created by lukas on 31.07.2025.
//

#include "Editor.h"
#include <iostream>
#include "string"
#include "imgui.h"

Editor::Editor(): m_window(1280, 720, "PixelPP"), m_controlPanel(m_imageProcessor, m_originalTexture), m_imagePanel(m_originalTexture) {

}

Editor::~Editor() {

}


void Editor::mainLoop() {
    std::string imagePath = "C:/Users/lukas/OneDrive/Bilder/Pixel Art/qp hood.png";

    while (!m_window.shouldClose()) {
        m_window.startFrame();

        m_controlPanel.render();
        m_imagePanel.render();

        m_window.endFrame();
    }
}
