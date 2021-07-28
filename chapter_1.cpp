/*
Comando para compilar codigo de C++ o C desde consola con la libreria OPENCV
g++ main.cpp -o output `pkg-config --cflags --libs opencv4`

Comando para correr el programa
./output

Comando para el error Gtk-WARNING cannot open display:
export DISPLAY=:0
*/


//Header file we require
//Trought the course only will need three header files for opencv

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>//librery of image processing 
#include <iostream>

using namespace std;
using namespace cv;

/////////////// Images /////////////////

/*int main() {

    string path = "Resources/test.png";//Path of image
    //Mat this is a matriz data type that is introduced by opencv
    Mat img = imread(path);//The image is store like matriz
    imshow("Image", img);//SHows the images. Receive a Name and a object with the image
    waitKey(0);//Wait infinity this we press and keyboard
    return 0;
}
*/


//////////////// Video /////////////////////
/*
int main() {

    string path = "Resources/test_video.mp4";//Path of image
    VideoCapture cap(path);// Create a object of videoCapture call cap
    Mat img; // Create a object of Mat call img

    while(true){
        
        cap.read(img); //Storie the video in the image variable
        imshow("Image", img);//SHows the images. Receive a Name and a object with the image
        waitKey(20);//Wait 1 millisecond
    
    }
    return 0;
}
*/

//////////////// Webcam /////////////////////

int main() {

    VideoCapture cap(0);// it is place a id cero because only has one cam
    Mat img; // Create a object of Mat call img

    while(true){
        
        cap.read(img); //Storie the video in the image variable
        imshow("Image", img);//SHows the images. Receive a Name and a object with the image
        waitKey(1);//Wait 1 millisecond
    
    }
    return 0;
}