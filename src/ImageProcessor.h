//
// Created by lukas on 31.07.2025.
//

#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#pragma once

#include <string>
#include <vector>

struct ImageData {
    unsigned char* data = nullptr;
    int width = 0;
    int height = 0;
    int channels = 0;
};

class ImageProcessor {
public:
    ImageProcessor();
    ~ImageProcessor();

    bool loadImage(const std::string &filePath);
    void convertToPixelArt(int pixelSize, int numColors);

    [[nodiscard]] const ImageData& getOriginalImage() const;
    [[nodiscard]] const ImageData& getProcessedImage() const;

private:
    ImageData m_originalImage;
    ImageData m_processedImage;
};


#endif //IMAGEPROCESSOR_H
