#include "mainwindow.h"
#include <QApplication>

#include "constant.h"
#include"logging.h"
#include"CImageRender.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    do
    {
        CImageRender imageRenderObj;
        imageRenderObj.setImagePath( "D:/Desert.jpg" );

        if (imageRenderObj.isImageExist())
        {
            imageRenderObj.loadImageAndCreateOCVData();
            imageRenderObj.renderImageinOCVWindow();
        }

    } while (false);

    return a.exec();
}
