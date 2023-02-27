#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(){
   std::cout<<"Hello World\n";
    Mat image =  imread("hill.jpg",IMREAD_GRAYSCALE);
        imshow("My first image", image);

    // wait for any key press
   waitKey(0);
    return 0;    
}