#include "OpenglWidget.h"



OpenglWidget::OpenglWidget(QWidget* parent): QOpenGLWidget(parent)
{

}

OpenglWidget::~OpenglWidget()
{

}

void OpenglWidget::initializeGL()
{
    this->initializeOpenGLFunctions();        //初始化opengl函数
}

void OpenglWidget::resizeGL(int w, int h)
{
    this->glViewport(0, 0, w, h);                //定义视口区域
}

void OpenglWidget::paintGL()
{
    this->glClearColor(0.1f, 0.5f, 0.7f, 1.0f);  //设置清屏颜色
    this->glClear(GL_COLOR_BUFFER_BIT);       //清除颜色缓存
}