#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;


////////////////// warp images //////////////////

int main()
{

    float W=270,H=563;
    Mat matrix,imgWarp;

    string path = "D:/PRoG/Git-repos/MyProjectOpenCV/ProjectOpencv1/Resourse/taro.jpg";
    Mat img = imread(path);
    resize(img,img,Size(),0.5,0.5);

    Point2f src[4]=
    {
        {185,171},
        {457,132},
        {338,720},
        {609,639}
    };
    Point2f dst[4]
    {
        {0.0f,0.0f},
        {W,0.0f},
        {0.0f,H},
        {W,H}
    };

    matrix = getPerspectiveTransform(src,dst);
    warpPerspective(img,imgWarp,matrix,Point(W,H));

    for(int i = 0; i<4; i++)
    {
        circle(img, src[i],10,Scalar(0,69,255),FILLED);
    }
    imshow("img",img);
    imshow("img warp",imgWarp);
    waitKey(0);
}
