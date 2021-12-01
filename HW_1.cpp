#include <opencv2/imgproc.hpp> // Image processing을 위한 기능을 제공
#include <opencv2/highgui.hpp> // 윈도우 화면을 제어하기 위한 기능을 제공
using namespace cv;

void main() {
	Mat input = imread("Lena.png", CV_LOAD_IMAGE_COLOR);
	uchar intensity;
	int width = input.cols;
	int height = input.rows;
	Mat output(height, width, CV_8UC3);

	int y1 = height / 4;
	int y2 = (height * 3) / 4;
	int x1 = width / 4;
	int x2 = (width * 3) / 4;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			Vec3b& p1 = input.at<Vec3b>(y, x);
			Vec3b& p2 = output.at<Vec3b>(y, x);
			if ((y1 < y) && (y < y2) && (x1 < x) && (x < x2))
			{
				p2[0] = uchar(p1[2] * 0.299 + p1[1] * 0.587 + p1[0] * 0.114);
				p2[1] = uchar(p1[2] * 0.299 + p1[1] * 0.587 + p1[0] * 0.114);
				p2[2] = uchar(p1[2] * 0.299 + p1[1] * 0.587 + p1[0] * 0.114);
			}
			else
			{
				p2[2] = p1[2];
				p2[1] = p1[1];
				p2[0] = p1[0];
			}
		}
	}
	imshow("input", input);
	imshow("output", output);
	waitKey();
}
// 참고 사이트 : https://velog.io/@madpotato1713/OPEN-CV-3%EC%B1%84%EB%84%90-%EC%98%81%EC%83%81%EC%9D%98-Pixel-%EB%8D%B0%EC%9D%B4%ED%84%B0-%EC%A0%91%EA%B7%BC-%EB%B0%A9%EB%B2%95-shk4vhpruw