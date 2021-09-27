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
//    Mat imgResize, imgCrop;

//    //cout<<img.size()<<endl;

//    resize(img,imgResize,Size(),0.5,0.5); //масштабирование

//    Rect roi(50,570,300,250);  //область интереса
//    imgCrop = img(roi);

//    imshow("img",img);
//    imshow("img Resize",imgResize);
//    imshow("img Crop",imgCrop);
//    waitKey(0);
//}



