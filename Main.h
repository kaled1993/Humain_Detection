#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace cv;

/*********** TYPES ****************/
typedef std::unordered_map<std::string, cv::Point> pointMap;
typedef std::unordered_map<std::string, cv::Point>::const_iterator pointIterator;

/********* FUNCTIONS *************/
void drawRectangle(cv::Point p1, cv::Point p2, cv::Mat img);
double distanceBetweenTwoPoints(double x, double y, double a, double b);
cv::Rect bodyDetect(cv::Mat image);
cv::Mat edgeDetect(cv::Mat image);
cv::Rect cropBinary(cv::Mat binaryMat);
pointMap bodyParts(cv::Mat img);
cv::Mat horizontalProj(cv::Mat binaryMat);
cv::Mat verticalProj(cv::Mat binaryMat);
cv::Mat opening(cv::Mat binaryMat);
cv::Mat closing(cv::Mat binaryMat);
cv::Point findHead(cv::Mat img);
cv::Point findHand(cv::Mat img, bool side);
cv::Point findFoot(cv::Mat img, bool side);
cv::Point findHip(cv::Mat img, int bodyCenter, bool side);
cv::Point findShoulder(cv::Mat img, bool side);
cv::Point findHipRatio(cv::Mat img, bool side);
void measureBodyParts(Mat image, pointMap bodyShapes);
double getImageScale(Mat img, Point p1, Point p2);
void draw(Mat img, int distance, Point_<int> p1, Point_<int> p2);
Point median(Point a, Point b);

