#ifndef _ASTRO_H_
    #define _ASTRO_H_

    #include <stdio.h>

typedef struct {
    unsigned char *pixels;
    int height;
    int width;
    int channels;
} Image;

typedef struct {
    float *pixels;
    int height;
    int width;
    int channels;
} TempImage;

typedef struct {
    int nb_files;
    TempImage temp_image;
    Image actual_image;
    Image result_image;
} Settings;

#endif // _ASTRO_H_
