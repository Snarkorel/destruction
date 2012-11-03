#include <QApplication>
#include "trunk/scene/MainScene.h"
#include "trunk/widget/MainForm.h"

int main(int argc, char * argv[]){

    QApplication app(argc,argv);
    MainForm * window = new MainForm;

    return app.exec();
}
