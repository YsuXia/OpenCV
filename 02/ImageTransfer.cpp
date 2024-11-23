#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;

using namespace cv;

int main(int argc, char *argv[])
{
	char *imageName = argv[1];
	Mat image;
	image = imread(imageName, IMREAD_COLOR);
	if (argc != 2 || !image.data)
	{
		cout<<"no image data!"<<endl;
		return -1;
	}
	Mat gray_image;
	cvtColor(image, gray_image, COLOR_BGR2GRAY);
	imwrite("./image_gray.jpg", gray_image);
	namedWindow(imageName, WINDOW_AUTOSIZE);
	namedWindow("gray_image", WINDOW_AUTOSIZE);
	imshow(imageName, image);
	imshow("gray_image", gray_image);
	waitKey(0);
	return 0;
}
