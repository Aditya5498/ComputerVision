#include<iostream>
#include<sstream>
#include<string>

using namespace std;

// importing opencv libraries
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
using namespace cv;

int main(){

//Open the default camera
VideoCapture cap;
string videoFile = "";
if(videoFile != "")
    cap.open(videoFile);
else
    cap.open(0);
if(!cap.isOpened()) return -1;

// to make sure we can read the video filename or camera
namedWindow("Video",1);
for(;;){
    Mat frame;
    cap >> frame; //gets a new frame 
   // if(frame) 
        imshow("Playing Video",frame);
    if(waitKey(30) >= 0) break;
}
cap.release();
}