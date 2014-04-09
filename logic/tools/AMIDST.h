#pragma once

#include "BaseExternalTool.h"

class AMIDSTTool : public BaseDetachedTool
{
	Q_OBJECT
public:
	explicit AMIDSTTool(InstancePtr instance, QObject *parent = 0);

protected:
	void runImpl() override;
};

class AMIDSTFactory : public BaseDetachedToolFactory
{
public:
	QString name() const override { return "AMIDST"; }
	void registerSettings(std::shared_ptr<SettingsObject> settings) override;
	BaseExternalTool *createTool(InstancePtr instance, QObject *parent = 0) override;
	bool check(QString *error) override;
	bool check(const QString &path, QString *error) override;
};
