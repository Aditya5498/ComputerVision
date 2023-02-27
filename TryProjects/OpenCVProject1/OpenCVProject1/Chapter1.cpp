#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


// For Image //
// 
//void main() {
//	string path = "D:/Test OpenCV/TryProjects/OpenCVProject1/Resources/Resources/test.jpg";
//	Mat img = imread(path);
//	imshow("My first trial image show", img);
//	waitKey(0);
//}

// For video //

//void main() {
//	string path = "D:/Test OpenCV/TryProjects/OpenCVProject1/Resources/Resources/test_video.mp4";
//	VideoCapture vcap(path);
//	Mat img;
//
//	while (true) {
//		vcap.read(img);
//		imshow("Playing a video",img);
//		waitKey(10);
//	}
//}



// For Webcam //

void main() {

	VideoCapture vcap(0);
	Mat img;

	while (true) {
		vcap.read(img);
		imshow("Webcam feed", img);
		waitKey(1);
	}
}