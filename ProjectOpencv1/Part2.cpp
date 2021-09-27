#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;


////////////////// Basic func //////////////////

//int main()
//{
//    string path = "D:/PRoG/Git-repos/MyProjectOpenCV/ProjectOpencv1/Resourse/qVGtYwiqQWU.jpg";
//    Mat img = imread(path);
//    Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

//    cvtColor(img,imgGray,COLOR_BGR2GRAY);   // Серая фотография
//    GaussianBlur(img, imgBlur,Size(7,7),5,0);   //размытие по Гаусу
//    Canny(imgBlur,imgCanny,25,75);  //Контур


//    Mat karnel = getStructuringElement(MORPH_RECT, Size(3,3));
//    dilate(imgCanny,imgDil,karnel); //Увеличивает толщину контура
//    erode(imgDil, imgErode,karnel); //уменьшает толщину контура

//    imshow("img",img);
//    imshow("img Gray", imgGray);
//    imshow("img Blur", imgBlur);
//    imshow("img Canny", imgCanny);
//    imshow("img Dilation", imgDil);
//    imshow("img Erode", imgErode);
//    waitKey(0);
//}



