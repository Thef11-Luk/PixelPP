//
// Created by lukas on 01.08.2025.
//

#include "ControlPanel.h"
#include "imgui.h"

ControlPanel::ControlPanel(ImageProcessor &imageProcessor, ImageTexture &originalTexture) : m_imageProcessor(imageProcessor), m_originalTexture(originalTexture) {

}

void ControlPanel::render() {
    ImGui::Begin("Steuerung");

    ImGui::Text("Lade ein Bild um zu starten.");
    if (ImGui::Button("Bild laden")) {
        if (m_imageProcessor.loadImage("C:/Users/lukas/OneDrive/Bilder/Pixel Art/Grassy Beach.png")) {
            m_originalTexture.loadFromImageData(m_imageProcessor.getOriginalImage());
        };
    }

    ImGui::End();
}

