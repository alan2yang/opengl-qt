#include "OpenglWidget.h"



OpenglWidget::OpenglWidget(QWidget* parent): QOpenGLWidget(parent)
{

}

OpenglWidget::~OpenglWidget()
{

}

void OpenglWidget::initializeGL()
{
    this->initializeOpenGLFunctions();        //��ʼ��opengl����
}

void OpenglWidget::resizeGL(int w, int h)
{
    this->glViewport(0, 0, w, h);                //�����ӿ�����
}

void OpenglWidget::paintGL()
{
    this->glClearColor(0.1f, 0.5f, 0.7f, 1.0f);  //����������ɫ
    this->glClear(GL_COLOR_BUFFER_BIT);       //�����ɫ����
}