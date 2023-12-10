#include<iostream>
#include<string>
#include<sstream>

using namespace std;

// opencv includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main(int argc, const char** argv){
    // Read images
    Mat colorImg = imread("../../imgs/scene.jpeg");
    Mat grayImg  = imread("../../imgs/scene.jpeg", IMREAD_GRAYSCALE);

    if(! colorImg.data || ! grayImg.data){ // check for invalid input
        cout<<"\n\tCould not open image\n";
        return -1;
    }

    //save image
    imwrite("../../imgs/savedImgs/grayedImage.jpeg",grayImg);

    //get the pixels / matrix size of image
    int rows      = colorImg.rows - 1;
    int cols     = colorImg.cols - 1;
    Vec3b pixels = colorImg.at<Vec3b>(rows,cols);
    cout << "Pixel values (B , G , R) : ("<<(int)pixels[0]<<" , "<<(int)pixels[1]<<" , "<<(int)pixels[2]<<")"<<endl;
    cout << "\n\tSize of image rows\t=\t"<<rows<<"\tcols\t=\t"<<cols<<endl;
    // store images
    imwrite("../../imgs/savedImgs/coloredImage.jpeg",colorImg);
    imwrite("../../imgs/savedImgs/grayedImage.jpeg",grayImg);
    cout<<"\n\tFind the saved images in imgs/savedImgs/<image>.jpeg\n";

    //wait for any key stroke
    waitKey(0);
    return 0;
}