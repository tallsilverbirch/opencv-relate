#include "opencv.hpp" //opencv 的头文件

using namespace std;
using namespace cv; //opencv 的命名空间

int main()
{
	printf("Hello Open CV!");

	Mat srcImage = imread("123.jpg");
	Mat temImage, dstImage1;
	temImage = srcImage;

	//尺寸调整
	resize(temImage, dstImage1, Size(0, 0), 0.25, 0.25, INTER_LINEAR);     //长宽缩小1/4

	imshow("缩小", dstImage1);

	waitKey(0);

	return 0;
}
