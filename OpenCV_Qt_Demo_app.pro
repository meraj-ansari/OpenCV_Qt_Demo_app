#-------------------------------------------------
#
# Project created by QtCreator 2016-11-11T17:40:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCV_Qt_Demo_app
TEMPLATE = app
INCLUDEPATH += "D:\\program_files\\opencv_2_4_13\\build\\include"
LIBS += -LD:\\program_files\\opencv_2_4_13\\build\\x86\\vc12\\lib
LIBS += -lopencv_calib3d2413d\
-lopencv_contrib2413d\
-lopencv_core2413d\
-lopencv_features2d2413d\
-lopencv_flann2413d\
-lopencv_gpu2413d\
-lopencv_highgui2413d\
-lopencv_imgproc2413d\
-lopencv_legacy2413d\
-lopencv_ml2413d\
-lopencv_nonfree2413d\
-lopencv_objdetect2413d\
-lopencv_photo2413d\
-lopencv_stitching2413d\
-lopencv_superres2413d\
-lopencv_ts2413d\
-lopencv_video2413d\
-lopencv_videostab2413d


SOURCES += main.cpp\
        mainwindow.cpp\
        CImageRender.cpp

HEADERS  += mainwindow.h\
            CImageRender.h\
            constant.h\
            errorcode.h

FORMS    += mainwindow.ui
