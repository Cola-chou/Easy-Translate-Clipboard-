// clipboardmonitor.h
#ifndef CLIPBOARDMONITOR_H
#define CLIPBOARDMONITOR_H

#include <QObject>
#include <QClipboard>

class ClipboardMonitor : public QObject
{
    Q_OBJECT
public:
    explicit ClipboardMonitor(QObject *parent = nullptr);

signals:
    void clipboardChanged(const QString &text);

private slots:
    void clipboardDataChanged();

private:
    QClipboard *clipboard;
public:
    void startListening();
    void stopListening();
};
#endif // CLIPBOARDMONITOR_H
