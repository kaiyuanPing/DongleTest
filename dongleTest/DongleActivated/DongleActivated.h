#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DongleActivated.h"

class DongleActivated : public QMainWindow
{
    Q_OBJECT

public:
    DongleActivated(QWidget *parent = Q_NULLPTR);

private:
    Ui::DongleActivatedClass ui;

    void activateDongle(const QString&);
private slots:
    void slotReadSi();
};
