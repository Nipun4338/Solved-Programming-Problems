#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            double temp = image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed;

            temp /= 3.0;
            temp = round(temp);
            image[i][j].rgbtBlue = temp;
            image[i][j].rgbtGreen = temp;
            image[i][j].rgbtRed = temp;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            double red = image[i][j].rgbtRed;
            double green = image[i][j].rgbtGreen;
            double blue = image[i][j].rgbtBlue;
            double temp = (.393 * red) + (.769 * green) + (.189 * blue);
            if (temp > 255)
            {
                temp = 255;
            }
            image[i][j].rgbtRed = round(temp);
            temp = (.349 * red) + (.686 * green) + (.168 * blue);
            if (temp > 255)
            {
                temp = 255;
            }
            image[i][j].rgbtGreen = round(temp);
            temp = (.272 * red) + (.534 * green) + (.131 * blue);
            if (temp > 255)
            {
                temp = 255;
            }
            image[i][j].rgbtBlue = round(temp);
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            double temp = image[i][j].rgbtRed;
            image[i][j].rgbtRed = image[i][width - j - 1].rgbtRed;
            image[i][width - j - 1].rgbtRed = temp;
            temp = image[i][j].rgbtGreen;
            image[i][j].rgbtGreen = image[i][width - j - 1].rgbtGreen;
            image[i][width - j - 1].rgbtGreen = temp;
            temp = image[i][j].rgbtBlue;
            image[i][j].rgbtBlue = image[i][width - j - 1].rgbtBlue;
            image[i][width - j - 1].rgbtBlue = temp;
            //swap(image[i][j].rgbtRed, image[i][width-j-1].rgbt.Red);
            //swap(image[i][j].rgbtGreen, image[i][width-j-1].rgbtGreen);
            //swap(image[i][j].rgbtBlue, image[i][width-j-1].rgbtBlue);
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    double image1[height][width][3];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image1[i][j][0] = image[i][j].rgbtRed;
            image1[i][j][1] = image[i][j].rgbtGreen;
            image1[i][j][2] = image[i][j].rgbtBlue;
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            double red = 0, green = 0, blue = 0, temp = 0;

            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k >= 0 && k < height && l >= 0 && l < width)
                    {
                        //printf("%d %d\n",k,l);
                        temp++;
                        red += image1[k][l][0];
                        green += image1[k][l][1];
                        blue += image1[k][l][2];
                    }
                }
            }

            double temp1 = 0;
            temp1 = (red / temp);
            image[i][j].rgbtRed = round(temp1);

            temp1 = (green / temp);
            image[i][j].rgbtGreen = round(temp1);

            temp1 = (blue / temp);
            image[i][j].rgbtBlue = round(temp1);
        }

    }
    return;
}
