#ifndef IMAGE_H
#define IMAGE_H

#include <cinttypes>
#include <array>
#include <vector>

using pixel=std::array<uint8_t,3>;

class Image{
    public:
        Image(const uint32_t& pSizeInPixels,
              const double& pPixelSize);
        const uint32_t& getSizeInPixels() const;
        const double& getPixelSize() const;
        const double getSizeInMeters() const;
        void updateAllPixels(const std::vector<pixel>& pNewValues);
        void print(std::ostream& pStream = std::cout) const;

    private:
        void updateNthPixel(const uint32_t& pPixelIndex, const pixel& pNewValue);
        uint32_t mSizeInPixels;
        double mPixelSize;
        std::vector<pixel> mPixels;
};

#endif
