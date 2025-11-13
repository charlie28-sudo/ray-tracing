#include <iostream>
#include <iomanip>

#include "Image.h"

Image::Image(const uint32_t& pSizeInPixels,
              const double& pPixelSize) : mSizeInPixels(pSizeInPixels), mPixelSize(pPixelSize), mPixels()
    {
        for (auto i =0U; i< mSizeInPixels; i++)
        {
            mPixels.push_back({0,0,0});
        }
    }

const uint32_t& Image::getSizeInPixels() const {
    return mSizeInPixels;
}

const double& Image::getPixelSize() const {
    return mPixelSize;
}

const double Image::getSizeInMeters() const {
    return mPixelSize * mSizeInPixels;
}

void Image::updateNthPixel(const uint32_t& pPixelIndex, const pixel& pNewValue) {
    auto & nthPixel = mPixels[pPixelIndex];
    nthPixel[0] = pNewValue[0];
    nthPixel[1] = pNewValue[1];
    nthPixel[2] = pNewValue[2];
}

void Image::updateAllPixels(const std::vector<pixel>& pNewValues) {
    for (auto i=0U; i<mSizeInPixels; i++)
    {
        updateNthPixel(i, pNewValues[i]);
    }
}

void Image::print(std::ostream& pStream) const {
    pStream << std::setw(11) << std::setfill('-') << "" << std::endl;
    for (const auto& pix : mPixels)
    {
                pStream << std::setw(3) << std::setfill('0')<< +pix[0] << ","
                  << std::setw(3) << +pix[1] << ","
                  << std::setw(3) << +pix[2] << std::endl;
    }
    pStream << std::setw(11) << std::setfill('-') << "" << std::endl;
}
