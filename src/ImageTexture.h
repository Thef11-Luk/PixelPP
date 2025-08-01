//
// Created by lukas on 01.08.2025.
//

#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#pragma once

#include <glad/glad.h>
#include "ImageProcessor.h"

class ImageTexture {
public:
    ImageTexture();
    ~ImageTexture();

    ImageTexture(const ImageTexture&) = delete;
    ImageTexture& operator=(const ImageTexture&) = delete;

    void loadFromImageData(const ImageData& data);

    GLuint getTextureID() const { return m_textureID; }

    int getWidth() const { return m_width; }
    int getHeight() const { return m_height; }

private:
    GLuint m_textureID = 0;
    int m_width = 0;
    int m_height = 0;
};



#endif //IMAGETEXTURE_H
