QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Part1.cpp \
        Part2.cpp \
        Part3.cpp



INCLUDEPATH += D:\PRoG\CLib\opencv\opencv\Release\install\include

LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_core453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_highgui453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_imgcodecs453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_imgproc453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_calib3d453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_videoio453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_video453.dll
LIBS += D:\PRoG\CLib\opencv\opencv\Release\bin\libopencv_photo453.dll


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Resourse/qVGtYwiqQWU.jpg
