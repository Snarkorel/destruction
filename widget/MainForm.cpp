#include "scene/MainScene.h"
#include "MainForm.h"

MainForm::MainForm(QWidget *parent):QMainWindow(parent)
{

    setWindowTitle(trUtf8("Destruction"));
    this->gamescene = new MainScene;
    this->graphicsview.setScene(gamescene);
    this->graphicsview.show();
}
