//Header file we require
//Trought the course only will need three header files for opencv

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>//librery of image processing 
#include <iostream>

using namespace std;
using namespace cv;

/////////////// Basic function in handling of Images /////////////////

int main() {

    string path = "Resources/test.png";//Path of image
    
    //Mat this is a matriz data type that is introduced by opencv
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny, imgDilation, imgErosion;

    // Convert the color image to gray image
    cvtColor(img, imgGray, COLOR_BGR2GRAY);

    //Generate a image with Gaussian blur
    GaussianBlur(img, imgBlur, Size(7,7), 5, 0);
 
    //Generate a image with edge detection
    Canny(imgBlur, imgCanny, 25, 75);

    // Create a matriz kernel of size odd
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
    // Dilation will to the edges of image
    dilate(imgCanny, imgDilation, kernel);

    // Erosion will to the edges of image
    erode(imgDilation, imgErosion, kernel);

    //SHows the images. Receive a Name and a object with the image
    imshow("Image", img);
    imshow("Gray Image", imgGray);
    imshow("Gaussian Blur", imgBlur);
    imshow("Canny detection", imgCanny);
    imshow("Dilation of Edges", imgDilation);
    imshow("Erotion of Edges", imgErosion);

    
    waitKey(0);//Wait infinity this we press and keyboard
    return 0;
}

