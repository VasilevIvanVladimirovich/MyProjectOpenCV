#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;


////////////////// color detection //////////////////

//int main()
//{
//    string path = "D:/PRoG/Git-repos/MyProjectOpenCV/ProjectOpencv1/Resourse/rose.jpg";
//    Mat img = imread(path);
//    Mat imgHSV, mask;

//    int hmin=29,smin=138,vmin=0;
//    int hmax=255,smax=240,vmax=255;

//    cvtColor(img, imgHSV,COLOR_BGR2HSV);

//    namedWindow("Trackbars",(640,200));
//    createTrackbar("hmin","Trackbars",&hmin,179);
//    createTrackbar("hmax","Trackbars",&hmax,179);
//    createTrackbar("smin","Trackbars",&smin,255);
//    createTrackbar("smax","Trackbars",&smax,255);
//    createTrackbar("vmin","Trackbars",&vmin,255);
//    createTrackbar("vmax","Trackbars",&vmax,255);


//    while(true)
//    {
//    Scalar lower(hmin,smin,vmin);
//    Scalar upper(hmax,smax,vmax);
//    inRange(imgHSV,lower,upper,mask);

//    imshow("img",img);
//    imshow("img HSV",imgHSV);
//    imshow("img mask",mask);
//    waitKey(1);
//    }
//}
