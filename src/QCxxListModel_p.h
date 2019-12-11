#ifndef QCXXLISTMODEL_P_H
#define QCXXLISTMODEL_P_H

#include <QMutex>

#include "QCxxListModel.h"

namespace Internal {

class QCxxListModelPrivate
{
    Q_DECLARE_PUBLIC(QCxxListModel)

public:
    QCxxListModelPrivate();
    virtual ~QCxxListModelPrivate();
protected:
    QCxxListModel *q_ptr;

protected:
    static QMutex internalGuard;
    static QVector<int> modelDataRole;
    static QHash<int, QByteArray> roleNames;

    bool countEnabled;
    int  count;
};

} // namespace Internal

#endif // QCXXLISTMODEL_P_H
