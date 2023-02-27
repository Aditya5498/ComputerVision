#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void main() {
	string path = "D:/Test OpenCV/Resources/Resources/test.jpg";

	Mat img = imread(path), resizeImg, cropImg;

	cout << img.size() << endl;

	resize(img, resizeImg, Size(), 0.5, 0.5);

	Rect roi(100, 100, 150, 150);
	cropImg = img(roi);

	imshow("Original Image", img);
	imshow("Scaled down Image", resizeImg);
	imshow("Cropped image", cropImg);
	waitKey(0);
}