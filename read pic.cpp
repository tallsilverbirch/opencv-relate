#include "opencv.hpp" //opencv ��ͷ�ļ�

using namespace std;
using namespace cv; //opencv �������ռ�

int main()
{
	printf("Hello Open CV!");

	Mat srcImage = imread("123.jpg");
	Mat temImage, dstImage1;
	temImage = srcImage;

	//�ߴ����
	resize(temImage, dstImage1, Size(0, 0), 0.25, 0.25, INTER_LINEAR);     //������С1/4

	imshow("��С", dstImage1);

	waitKey(0);

	return 0;
}
