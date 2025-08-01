//
// Created by lukas on 01.08.2025.
//

#ifndef IMAGEPANEL_H
#define IMAGEPANEL_H
#pragma once
#include "ImageProcessor.h"
#include "ImageTexture.h"


class ImagePanel {
public:
    ImagePanel(const ImageTexture& imageTexture);

    void render();

private:
    const ImageTexture& m_imageTexture;
};



#endif //IMAGEPANEL_H
