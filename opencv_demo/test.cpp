#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void test(const char* adr) {
	string testWindow = "test";
	namedWindow(testWindow, WINDOW_AUTOSIZE);
	Mat imgTest;
	imgTest = imread(adr, IMREAD_COLOR);
	imshow(testWindow, imgTest);
	waitKey(0);
}
