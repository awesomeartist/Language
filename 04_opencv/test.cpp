#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main()
{
	string absolute_path = "D:/WorkSpace/MyWork/Space_for_Code/CPP/Basic/04_opencv/resources/opencv_logo.jpg";
	string path = "opencv_logo.jpg";

	Mat img = imread(absolute_path);
	if (img.empty())
	{
		cout << "image is empty or the path is invalid!" << endl;
	}
	imshow("image", img);
	waitKey(0);

	return 0;
}