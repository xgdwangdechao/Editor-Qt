/*
 * This file is part of EasyRPG Editor.
 *
 * EasyRPG Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QWidget>
#include <lcf/data.h>

namespace Ui {
class SkillWidget;
}

class SkillWidget : public QWidget
{
	Q_OBJECT

public:
	explicit SkillWidget(lcf::rpg::Database &database, QWidget *parent = nullptr);
	~SkillWidget();

private:
	Ui::SkillWidget *ui;
	lcf::rpg::Database &m_data;
};

