/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#ifndef IPOTENTIALKIT_H
#define IPOTENTIALKIT_H

#include <QObject>
#include <QMetaType>
#include "projectexplorer_export.h"

namespace ProjectExplorer {

class PROJECTEXPLORER_EXPORT IPotentialKit : public QObject
{
    Q_OBJECT
public:
    virtual ~IPotentialKit();
    virtual QString displayName() const = 0;
    virtual void executeFromMenu() = 0;
    virtual QWidget *createWidget(QWidget *parent) const = 0;
    virtual bool isEnabled() const = 0;
};

}
Q_DECLARE_METATYPE(ProjectExplorer::IPotentialKit*)

#endif // IPOTENTIALKIT_H