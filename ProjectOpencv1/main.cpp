#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;


////////////////// images //////////////////

//int main()
//{
//    string path = "D:/PRoG/Git-repos/MyProjectOpenCV/ProjectOpencv1/Resourse/qVGtYwiqQWU.jpg";
//    Mat img = imread(path);
//    imshow("img",img);
//    waitKey(0);
//}


////////////////// video is file //////////////////

//int main()
//{
//    string path = "D:/PRoG/Git-repos/MyProjectOpenCV/ProjectOpencv1/Resourse/NoisyDay_VHS_Video.mp4";
//    VideoCapture cap(path);

//    Mat img;

//    while(true)
//    {
//        cap.read(img);

//        imshow("img",img);
//        waitKey(1);
//    }
//}


////////////////// video is webCam //////////////////

int main()
{
    VideoCapture cap(1);

    Mat img;

    while(true)
    {
        cap.read(img);

        imshow("img",img);
        waitKey(1);
    }
}
