QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app



HEADERS += ../untitled/nodnok.h
SOURCES += tst_t1.cpp ../untitled/nodnok.cpp
