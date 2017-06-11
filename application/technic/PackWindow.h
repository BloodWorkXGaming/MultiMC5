/* Copyright 2013-2017 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <QMainWindow>

#include "PackWidget.h"
#include "PackModel.h"

namespace Technic
{
class PackWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit PackWindow(QWidget *parent = 0);
	virtual ~PackWindow();

	// save all settings and changes (prepare for launch)
	bool saveAll();

signals:
	void isClosing();

private slots:
	void on_closeButton_clicked();

protected:
	void closeEvent(QCloseEvent *) override;


private:
	PackWidget *m_widget = nullptr;
};
}
