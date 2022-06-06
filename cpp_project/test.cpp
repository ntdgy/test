#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
  //构造矩阵
  double A_num[3][3] = {{10, 5, 3}, {6, 4, 7}, {1, 0, 9}};
  double B_num[3][3] = {{1, 3, 8}, {7, 5, 4}, {10, 6, 0}};
  Mat A(3, 3, CV_64F, A_num);
  Mat B(3, 3, CV_64F, B_num);
  //打印矩阵
  cout << A << endl;
  cout << B << endl;
  cout << "以上为原始矩阵 以下为运算结果" << endl;
  //矩阵运算
  cout << "乘法结果" << endl;
  cout << A * B << endl;  //乘法
  cout << "除法结果" << endl;
  cout << A * B.inv() << endl;  //除法
  cout << "按位除结果" << endl;
  cout << A / B << endl;  //按位除法
}