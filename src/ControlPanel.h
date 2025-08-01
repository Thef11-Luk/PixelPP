//
// Created by lukas on 01.08.2025.
//

#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#pragma once

#include "ImageProcessor.h"
#include "ImageTexture.h"

class ControlPanel {
public:
    ControlPanel(ImageProcessor &imageProcessor, ImageTexture &originalTexture);

    void render();

private:
    ImageProcessor& m_imageProcessor;
    ImageTexture& m_originalTexture;
};



#endif //CONTROLPANEL_H
