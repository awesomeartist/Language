#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	string abspath = "C:/Users/liang/Documents/Workspace/CPP/OpenCV/resources/opencv_logo.jpg";
	string path = "./opencv_logo.jpg";
	Mat img = imread(path);
	if (img.empty())
		std::cout << "image is empty or the path is invalid!" << std::endl;
	imshow("image", img);
	waitKey(0);
	return 0;
}