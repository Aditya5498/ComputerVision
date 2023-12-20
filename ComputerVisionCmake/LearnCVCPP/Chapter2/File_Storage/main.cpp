#include<iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int args, char **argv){

//create a writer
FileStorage fs("trial.yml",FileStorage::WRITE);

//save an integer
int testSave = 5;
fs << "Save_as_Int"<<testSave;

//create a sample matrix 
Mat m1 = Mat::eye(2,2, CV_32F);
Mat m2 = Mat::ones(2,2, CV_32F);

Mat mulMatrix = (m1+2).mul(m2+3);

//write the result
fs << "Multiplication_Matrix" << mulMatrix;

fs.release();


// reading the file
FileStorage fsR("trial.yml",FileStorage::READ);

Mat read;
fsR["Multiplication_Matrix"] >> read;

cout<<read<<endl;

fsR.release();

return 0;
}