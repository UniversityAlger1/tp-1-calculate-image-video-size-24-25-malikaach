#include <string.h>
#include "config/coloredBitmap.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   unit: Unit of the output value. It could be 'bt' bytes, 'ko' kilobytes, 'mo' megabytes, 'go' gigabytes
// Return value:
//   colored image size Bitmap (based on the unit passed parameter)
float coloredBitmap(int w, int h, char* unit) {
    // Chaque pixel de couleur est encodé sur 3 octets
    float sizeInBytes = (float)(w * h * 3);

    // Conversion en fonction de l'unité
    if (strcmp(unit, "bt") == 0) {
        return sizeInBytes;
    } else if (strcmp(unit, "ko") == 0) {
        return sizeInBytes / 1024;
    } else if (strcmp(unit, "mo") == 0) {
        return sizeInBytes / (1024 * 1024);
    } else if (strcmp(unit, "go") == 0) {
        return sizeInBytes / (1024 * 1024 * 1024);
    } else {
        return -1; // Unité non valide
    }
}