//Header file we require
//Trought the course only will need three header files for opencv

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>//librery of image processing 
#include <iostream>

using namespace std;
using namespace cv;

/////////////// Draw shapes and text /////////////////

int main() {

    //We not use any image, we create our own image
    //Blank image
    Mat img(512, 512, CV_8UC3, Scalar(0, 255, 0));
    imshow("Image", img);    
    
    
    waitKey(0);//Wait infinity this we press and keyboard
    return 0;
}

