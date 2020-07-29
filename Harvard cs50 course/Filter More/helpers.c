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


// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{

    double image1[height + 2][width + 2][3];
    double gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}}, gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 1; j < width + 1; j++)
        {
            image1[i][j][0] = image[i - 1][j - 1].rgbtRed;
            image1[i][j][1] = image[i - 1][j - 1].rgbtGreen;
            image1[i][j][2] = image[i - 1][j - 1].rgbtBlue;
        }
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < width + 2; j++)
        {
            image1[i][j][0] = 0;
            image1[i][j][1] = 0;
            image1[i][j][2] = 0;
        }
    }
    for (int i = height + 1; i < height + 2; i++)
    {
        for (int j = 0; j < width + 2; j++)
        {
            image1[i][j][0] = 0;
            image1[i][j][1] = 0;
            image1[i][j][2] = 0;
        }
    }
    for (int i = 0; i < height + 2; i++)
    {
        image1[i][0][0] = 0;
        image1[i][0][1] = 0;
        image1[i][0][2] = 0;
    }
    for (int i = 0; i < height + 2; i++)
    {
        image1[i][width + 1][0] = 0;
        image1[i][width + 1][1] = 0;
        image1[i][width + 1][2] = 0;
    }

    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 1; j < width + 1; j++)
        {
            double redx = 0, greenx = 0, bluex = 0, temp = 0, redy = 0, greeny = 0, bluey = 0;

            for (int k = i - 1, x = 0; k <= i + 1; k++, x++)
            {
                for (int l = j - 1, y = 0; l <= j + 1; l++, y++)
                {
                    redx += (image1[k][l][0] * gx[x][y]);
                    greenx += (image1[k][l][1] * gx[x][y]);
                    bluex += (image1[k][l][2] * gx[x][y]);

                    redy += (image1[k][l][0] * gy[x][y]);
                    greeny += (image1[k][l][1] * gy[x][y]);
                    bluey += (image1[k][l][2] * gy[x][y]);
                }
            }

            double temp1 = 0;
            temp1 = (redx * redx) + (redy * redy);
            temp1 = sqrt(temp1);
            if (temp1 > 255)
            {
                temp1 = 255;
            }
            image[i - 1][j - 1].rgbtRed = round(temp1);

            temp1 = 0;
            temp1 = (greenx * greenx) + (greeny * greeny);
            temp1 = sqrt(temp1);
            if (temp1 > 255)
            {
                temp1 = 255;
            }
            image[i - 1][j - 1].rgbtGreen = round(temp1);

            temp1 = 0;
            temp1 = (bluex * bluex) + (bluey * bluey);
            temp1 = sqrt(temp1);
            if (temp1 > 255)
            {
                temp1 = 255;
            }
            image[i - 1][j - 1].rgbtBlue = round(temp1);
        }

    }

    return;
}
