#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
using namespace cv;  
using namespace std;


int main(int argc, char**argv)
{

	Mat image;
	image = imread("1.jpg");
	

	imshow("Display image", image);
	
	Mat out;
	boxFilter(image, out, -1, Size(5, 5));

	imshow("means filter [result]", out);
	waitKey();
	return 0;
}
