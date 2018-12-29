/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c UserInterfaceAdapter -a user_adapter.h:user_adapter.cpp -N data/org.freedesktop.SystemManager.xml org.freedesktop.SystemManager.User
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "user_adapter.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class UserInterfaceAdapter
 */

UserInterfaceAdapter::UserInterfaceAdapter(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

UserInterfaceAdapter::~UserInterfaceAdapter()
{
    // destructor
}

bool UserInterfaceAdapter::auth(const QString &username, const QString &password)
{
    // handle method call org.freedesktop.SystemManager.User.auth
    bool out0;
    QMetaObject::invokeMethod(parent(), "auth", Q_RETURN_ARG(bool, out0), Q_ARG(QString, username), Q_ARG(QString, password));
    return out0;
}

