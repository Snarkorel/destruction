#ifndef MAINFORM_H
#define MAINFORM_H
#include <QMainWindow>
#include <QGraphicsView>

class MainScene;

class MainForm : public QMainWindow{
    Q_OBJECT
public:
    MainForm(QWidget * parent = 0);
private:
    QGraphicsView graphicsview;
    MainScene *   gamescene;
};
#endif // MAINFORM_H
