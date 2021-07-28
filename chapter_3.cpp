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

    string path = "Resources/horus.jpeg";//Path of image
    
    //Mat is a matriz data type that is introduced by opencv
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    resize(img, imgResize, Size(), 0.5, 0.5);

    Rect roi(30,200, 650, 650);
    imgCrop = img(roi);

    imshow("Image", img);
    imshow("Image Resize", imgResize);
    imshow("Image Crop", imgCrop);    
    
    
    waitKey(0);//Wait infinity this we press and keyboard
    return 0;
}