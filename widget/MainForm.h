#ifndef MAINFORM_H
#define MAINFORM_H
#include <QMainWindow>
#include <QGraphicsView>

class MainScene;
class QKeyEvent;

class MainForm : public QWidget{
    Q_OBJECT
public:
    MainForm(QWidget * parent = 0);
    void keyPressEvent(QKeyEvent *event);
private:
    QGraphicsView 	graphicsview;
    MainScene *   	gamescene;
};
#endif // MAINFORM_H
