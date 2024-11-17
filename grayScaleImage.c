#include "config/grayScaleImage.h"

// Parameters:
//   w: width of the image
//   h: height of the image
// Return value:
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
    // Chaque pixel en niveaux de gris est encodé sur 1 octet
    return (float)(w * h); // Taille en octets
}