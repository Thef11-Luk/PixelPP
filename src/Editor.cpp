//
// Created by lukas on 31.07.2025.
//

#include "Editor.h"

Editor::Editor(): m_window(1280, 720, "PixelPP") {

}

void Editor::mainLoop() {
    while (!m_window.shouldClose()) {
        m_window.startFrame();

        m_window.endFrame();
    }
}
