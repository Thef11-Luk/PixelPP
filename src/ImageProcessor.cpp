//
// Created by lukas on 31.07.2025.
//

#include "ImageProcessor.h"
#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

ImageProcessor::ImageProcessor() {

}

ImageProcessor::~ImageProcessor() {
    if (m_originalImage.data) {
        stbi_image_free(m_originalImage.data);
    }

    if (m_processedImage.data) {
        stbi_image_free(m_originalImage.data);
    }
}

bool ImageProcessor::loadImage(const std::string &filePath) {
    if (m_originalImage.data) {
        stbi_image_free(m_originalImage.data);
        m_originalImage = {};
    }

    m_originalImage.data = stbi_load(
        filePath.c_str(),
        &m_originalImage.width,
        &m_originalImage.height,
        &m_originalImage.channels,
        STBI_rgb_alpha);

    if (!m_originalImage.data) {
        std::cerr << "Error: Couldn't load image of '" << filePath << "'" << std::endl;
        return false;
    }

    m_originalImage.channels = 4;
    std::cout << "Image loaded: " << m_originalImage.width << "x" << m_originalImage.height << " with " << m_originalImage.channels << " channls" << std::endl;

    return true;
}

const ImageData &ImageProcessor::getOriginalImage() const {
    return m_originalImage;
}

const ImageData &ImageProcessor::getProcessedImage() const {
    return m_processedImage;
}
