#include <QApplication>
#include "scene/MainScene.h"
#include "widget/MainForm.h"

int main(int argc, char * argv[]){

    QApplication app(argc,argv);
    MainForm * window = new MainForm;

    return app.exec();
}
