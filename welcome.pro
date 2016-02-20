#-------------------------------------------------
#
# Project created by QtCreator 2013-12-07T22:14:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = welcome
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += resources.qrc

TRANSLATIONS  += translateFile.ts \
              translations/translateFile_nl_NL.ts \
              translations/translateFile_es.ts \
              translations/translateFile_es_AR.ts \
              translations/translateFile_fr.ts \
              translations/translateFile_it.ts \
              translations/translateFile_pt_BR.ts \
              translations/translateFile_tr_TR.ts \
              translations/translateFile_de.ts \
              translations/translateFile_ru.ts \
              translations/translateFile_nl_BE.ts \
              translations/translateFile_ca.ts \
              translations/translateFile_cs.ts \
              translations/translateFile_hr_HR.ts \
              translations/translateFile_hu.ts \
              translations/translateFile_he.ts \
              translations/translateFile_sr_RS@latin.ts \
              translations/translateFile_sr_RS.ts \
              translations/translateFile_id_ID.ts \
              translations/translateFile_pt_PT.ts \
              translations/translateFile_ar.ts \
              
# install
target.path = /usr/bin
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = .
desktop.path = /usr/share/applications
desktop.files += welcome.desktop
icon.files += welcome.svg
icon.path += /usr/share/pixmaps
INSTALLS += target desktop icon 
              


