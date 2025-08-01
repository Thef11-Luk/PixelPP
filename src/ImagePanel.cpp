//
// Created by lukas on 01.08.2025.
//

#include "ImagePanel.h"
#include "imgui.h"

ImagePanel::ImagePanel(const ImageTexture& imageTexture) : m_imageTexture(imageTexture){

}

void ImagePanel::render() {
    if (m_imageTexture.getTextureID() != 0) {
        ImVec2 imageSize = ImVec2(  static_cast<float>(m_imageTexture.getWidth()),
                                    static_cast<float>(m_imageTexture.getHeight())  );

        ImGui::SetNextWindowSize(imageSize, ImGuiCond_Always);
        ImGui::Begin("Image");

        ImGui::Image(reinterpret_cast<void*>(static_cast<intptr_t>(m_imageTexture.getTextureID())),
            imageSize);

        ImGui::End();

    }
}
