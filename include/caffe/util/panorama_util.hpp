#include "opencv2/opencv.hpp"
using namespace cv;

int PanoImg2Warp(cv::Mat& srcPanoImg, cv::Mat& dstWarpImg, int width, int height, double hFOV, double yaw, double pitch, double roll);
int WarpCoord2Pano(cv::Mat& PanoImg, cv::Mat& WarpImg, double yaw, double pitch, std::vector<double>& coords, std::vector<double>& result);
std::vector<std::pair<double, double> > MakeWarpImgList(cv::Mat& srcPanoImg, std::vector<cv::Mat>& warpImgList, int width, int height);