#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;
//Basic Functions of Opencv
void main() {
	string path = "D:/Test OpenCV/TryProjects/OpenCVProject1/Resources/Resources/test.jpg";
	
	Mat img = imread(path), greyImg, blurImg, cannyImg, imgDilate, erodeImg;

	cvtColor(img, greyImg, COLOR_BGR2GRAY);

	GaussianBlur(img, blurImg, Size(5, 5), 0, 0);
	// For edge detection usually blurred image will be used(common practice)
	Canny(img, cannyImg, 50, 150);

	// Image Dialation
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(cannyImg, imgDilate, kernel);

	// Image Erosion
	erode(imgDilate, erodeImg, kernel);

	imshow("Coloured image", img);
	imshow("Grayed Scale Image", greyImg);
	imshow("Blurred image", blurImg);
	imshow("Edge detection", cannyImg);
	imshow("Image Dialation", imgDilate);
	imshow("Eroded image", erodeImg);
	waitKey(0);
}