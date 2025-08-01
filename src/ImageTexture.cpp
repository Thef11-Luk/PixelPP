//
// Created by lukas on 01.08.2025.
//

#include "ImageTexture.h"
#include <iostream>

ImageTexture::ImageTexture() {
    glGenTextures(1, &m_textureID);
    glBindTexture(GL_TEXTURE_2D, m_textureID);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    glBindTexture(GL_TEXTURE_2D, 0);
}

ImageTexture::~ImageTexture() {
    if (m_textureID != 0) {
        glDeleteTextures(1, &m_textureID);
    }
}

void ImageTexture::loadFromImageData(const ImageData &data) {
    if (data.data == nullptr) {
        std::cerr << "Fehler: Bilddaten sind leer." << std::endl;
        return;
    }

    m_width = data.width;
    m_height = data.height;

    glBindTexture(GL_TEXTURE_2D, m_textureID);

    glTexImage2D(
        GL_TEXTURE_2D,
        0,
        GL_RGBA,
        data.width,
        data.height,
        0,
        GL_RGBA,
        GL_UNSIGNED_BYTE,
        data.data);

    glBindTexture(GL_TEXTURE_2D, 0);
}
