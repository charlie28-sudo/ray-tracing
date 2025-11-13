#include <iostream>
#include <iomanip>
#include "Image.h"
#include "Object.h"

int main(int argc, char const *argv[])
{
    Image image(5, 1e-1);

    image.print();

    image.updateAllPixels({{0,10,100},
                           {0,10,100},
                           {10,10,100},
                           {0,10,100},
                           {0,10,100},
                        });

    image.print();
    return 0;
}
