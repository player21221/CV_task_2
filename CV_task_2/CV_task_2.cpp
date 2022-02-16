// CV_task_2.cpp : Defines the entry point for the application.
//

#include "CV_task_2.h"

//using namespace std;
//
//int main()
//{
//	cout << "Hello CMake." << endl;
//	return 0;
//}


#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
#include <Eigen/Eigen>;
#include <opencv2/core/eigen.hpp>

void procImg(Mat& img, Mat&img2) {


	return;

}


int main(int argc, char** argv) {
	if (argc != 2)
	{
		cout << " Usage: " << argv[0] << " ImageToLoadAndDisplay" << endl;
		return -1;
	}
	Mat image;
	image = imread(argv[1], IMREAD_COLOR); // Read the file
	if (image.empty()) // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	namedWindow("Original", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Original", image); // Show our image inside it.

	//testFunc();
	Mat image2;
	procImg(image, image2);

	namedWindow("Processed", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Processed", image); // Show our image inside it.
	waitKey(0); // Wait for a keystroke in the window
	return 0;

}