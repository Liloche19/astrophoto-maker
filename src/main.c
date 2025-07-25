#include "../include/astro.h"

int print_help(char *program, int exit_status)
{
    printf("USAGE:\n");
    printf("\t%s method folder/filename output\n", program);
    printf("\n");
    printf("DESCRIPTION:\n");
    printf("\tmethod\t\tIs the method to use when combining multiple images [mean, sub]\n");
    printf("\tfolder/filename\tIs the folder to use to get the images or the image\n");
    printf("\toutput\t\tIs the output filename used to save the result\n");
    return exit_status;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return print_help(argv[0], 1);
    return print_help(argv[0], 0);
}
