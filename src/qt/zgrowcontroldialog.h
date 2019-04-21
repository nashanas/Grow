// Copyright (c) 2017-2018 The GROW developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZGROWCONTROLDIALOG_H
#define ZGROWCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zgrow/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZGrowControlDialog;
}

class CZGrowControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZGrowControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZGrowControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZGrowControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZGrowControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZGrowControlDialog(QWidget *parent);
    ~ZGrowControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZGrowControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZGrowControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZGROWCONTROLDIALOG_H
