#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_p01.h"

class p01 : public QMainWindow
{
    Q_OBJECT

public:
    p01(QWidget *parent = Q_NULLPTR);

private:
    Ui::p01Class ui;
};
