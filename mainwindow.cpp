/*
 * Copyright (c) 2013-2016       Anke Boersma <demm@kaosx.us>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <QtGui>
#include <QMessageBox>
#include <QProcess>
#include <QDesktopWidget>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRect position = frameGeometry();
      position.moveCenter(QDesktopWidget().availableGeometry().center());
      move(position.topLeft());

    Qt::WindowFlags flags;
    flags = Qt::Window
            | Qt::WindowMinimizeButtonHint
            | Qt::WindowCloseButtonHint;
        setFixedSize(640,400);
    setWindowFlags( flags );

    // signals/slots mechanism in action
    this->connect(this->ui->pushButton_install, SIGNAL(clicked()), this, SLOT(InstallKaOS()));
    this->connect(this->ui->pushButton_passw, SIGNAL(clicked()), this, SLOT(Passwords()));
    this->connect(this->ui->pushButton_about, SIGNAL(clicked()), this, SLOT(About()));
    this->connect(this->ui->pushButton_package, SIGNAL(clicked()), this, SLOT(PackageList()));
    this->connect(this->ui->pushButton_guide, SIGNAL(clicked()), this, SLOT(Guide()));
    this->connect(this->ui->pushButton_forum, SIGNAL(clicked()), this, SLOT(Forum()));
}


void MainWindow::InstallKaOS()
{
    QProcess::startDetached("/usr/bin/launch-calamares.sh");
}


void MainWindow::Passwords()
{
    QMessageBox::about(this,"Passwords",
                "Correct passwords for use in the live session:\n"
                "root: root / root\n"
                "user: live / live\n"
                "Hope you enjoy :)\n");
}


void MainWindow::About()
{
    QDesktopServices::openUrl(QUrl("file:///home/live/Desktop/info/about.pdf"));
}


void MainWindow::PackageList()
{
    QProcess::startDetached("/home/live/Desktop/info/packages.sh");
}

void MainWindow::Guide()
{
    QDesktopServices::openUrl(QUrl("file:///home/live/Desktop/info/guide.pdf"));
}

void MainWindow::Forum()
{
    QDesktopServices::openUrl(QUrl("http://forum.kaosx.us/"));
}
