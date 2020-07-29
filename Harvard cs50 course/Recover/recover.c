#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s image\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Usage: %s image\n", argv[0]);
        return 1;
    }
    BYTE bytes[512];
    int l = 0, m = 0;
    FILE *img = NULL;
    char filename[8];
    while (fread(bytes, 512, 1, file))
    {
        if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff && (bytes[3] & 0xf0) == 0xe0)
        {
            if (l != 0 )
            {
                fclose(img);
            }
            sprintf(filename, "%03i.jpg", m);
            img = fopen(filename, "w");
            l++;
            m++;
        }
        if (l != 0 )
        {
            fwrite(bytes, sizeof(bytes), 1, img);
        }
    }
    fclose(file);
}
