#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>


using namespace std;
using namespace cv;

//Basic CV Functions

void main() {


	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgResize,imgCrop;
	/*Mat imgGray, imgBlur, imgCanny, imgDialation, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);

	Canny(imgBlur, imgCanny, 50, 150);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDialation, kernel);
	erode(imgDialation, imgErode, kernel);*/


	imshow("Image", img);

	//imshow("Image Gray", imgGray);

	//imshow("Img Blurr", imgBlur);

	//imshow("Img Canny", imgCanny);

	//imshow("Img Dialation", imgDialation);

	//imshow("Img Erode", imgErode);
	//cout << img.size() <<endl;
	Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);
	resize(img, imgResize, Size(),0.5,0.5);
	imgCrop = img(roi);
	imshow("Cropped", imgCrop);

	waitKey(0);
}