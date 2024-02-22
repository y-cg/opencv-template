#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(int argc, char **argv) {
  cv::Mat image(3, 3, CV_8UC1);
  std::cout << CV_VERSION << std::endl;
}
