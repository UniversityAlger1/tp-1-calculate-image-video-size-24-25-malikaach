#include <string.h>
#include "config/video.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in seconds of the color section
//   durationCredits: duration in seconds of the black-and-white section
//   fps: Frames Per Second
//   unit: Unit of the output value. It could be 'bt' bytes, 'ko' kilobytes, 'mo' megabytes, 'go' gigabytes
// Return value:
//   total video size (based on the unit passed parameter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    // Taille d'une frame couleur et noir & blanc
    float colorFrameSize = (float)(w * h * 3); // En octets
    float bwFrameSize = (float)(w * h);       // En octets

    // Nombre total de frames
    int totalColorFrames = durationMovie * fps;
    int totalBWFrames = durationCredits * fps;

    // Taille totale en octets
    float totalSizeInBytes = (totalColorFrames * colorFrameSize) + (totalBWFrames * bwFrameSize);

    // Conversion en fonction de l'unité
    if (strcmp(unit, "bt") == 0) {
        return totalSizeInBytes;
    } else if (strcmp(unit, "ko") == 0) {
        return totalSizeInBytes / 1024;
    } else if (strcmp(unit, "mo") == 0) {
        return totalSizeInBytes / (1024 * 1024);
    } else if (strcmp(unit, "go") == 0) {
        return totalSizeInBytes / (1024 * 1024 * 1024);
    } else {
        return -1; // Unité non valide
    }
}