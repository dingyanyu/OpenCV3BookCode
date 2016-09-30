#include <opencv2/opencv.hpp>

//using namespace cv;
using namespace cv;

int main(int argc, char**argv)
{

	Mat image;
//	image = imread("1.jpg");
	image = imread("1.jpg");
	imshow("Display image", image);
	
	waitKey();
	return 0;
}
