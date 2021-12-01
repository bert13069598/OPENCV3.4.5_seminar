//#include <opencv2/imgproc.hpp> // Image processing을 위한 기능을 제공
//#include <opencv2/highgui.hpp> // 윈도우 화면을 제어하기 위한 기능을 제공
//using namespace cv;
//
//void main() {
//	Mat back = imread("HW_2_2_background.png", CV_LOAD_IMAGE_COLOR);
//	Mat fore = imread("HW_2_2_foreground.png", CV_LOAD_IMAGE_COLOR);
//
//	int width = fore.cols; // 너비 계산
//	int height = fore.rows; // 높이 계산
//	Mat backResize; // 새로운 Mat 선언
//	resize(back, backResize, Size(width, height)); // 배경 크기를 조정
//
//	// 스누피 노란색 픽셀값 확인
//	int a, b, c;
//	int x = 1;
//	int y = 1;
//	a = fore.at<Vec3b>(y, x)[0];
//	b = fore.at<Vec3b>(y, x)[1];
//	c = fore.at<Vec3b>(y, x)[2];
//	printf("yello pixel : %d %d %d\n", a, b, c);
//
//	for (int y = 0; y < height; y++) {
//		for (int x = 0; x < width; x++) {
//			Vec3b& p1 = fore.at<Vec3b>(y, x);
//			Vec3b& p2 = backResize.at<Vec3b>(y, x);
//			
//			if (p1[0] == a && p1[1] == b && p1[2] == c)
//			{
//				p1[0] = uchar(p2[0]);
//				p1[1] = uchar(p2[1]);
//				p1[2] = uchar(p2[2]);
//			}
//		}
//	}
//	imwrite("HW_2_2_result.png", fore);
//	imshow("output", fore);
//	waitKey(0);
//}
//////// 참고 사이트 : https://eehoeskrap.tistory.com/268