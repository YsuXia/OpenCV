#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
/*	if (argc != 2)
	{
		printf("usage: DisplayImage.out <Image_Path>\n");
		return -1;
	}
	Mat image;
	image = imread(argv[1], 1);
	Mat image2 = image(Range::all(), Range(1,100));
	Mat image3(image, Rect(10,10,100,100));
	Mat image4 = image.clone();
	if (!image.data)
	{
		printf("No image data!\n");
		return -1;
	}*/
	//Mat M(2,2, CV_8UC3, Scalar(0,0,255));
	int sz[3] = {2,2,2};
	//Mat M(3,sz,CV_8UC(1),Scalar::all(0));
	Mat M;
	M.create(3,3,CV_8UC3);
	//cout<<"iamge ="<<image<<endl;
	cout<<"M="<<endl<<M<<endl;
	//namedWindow("Display Image", WINDOW_AUTOSIZE);
	//imshow("Display Image", image4);
	//waitKey(0);
	return 0;
}
