#pragma once
#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>


class OpenglWidget :public QOpenGLWidget, public QOpenGLExtraFunctions
{
    Q_OBJECT

public:
    OpenglWidget(QWidget* parent = 0);
    ~OpenglWidget();
protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int w, int h) override;
    virtual void paintGL() override;

   
};

