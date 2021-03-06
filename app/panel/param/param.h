/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef PARAM_H
#define PARAM_H

#include "panel/curve/curve.h"
#include "panel/timebased/timebased.h"
#include "widget/nodeparamview/nodeparamview.h"

OLIVE_NAMESPACE_ENTER

class ParamPanel : public TimeBasedPanel
{
  Q_OBJECT
public:
  ParamPanel(QWidget* parent);

public slots:
  void SelectNodes(const QList<Node*>& nodes);
  void DeselectNodes(const QList<Node*>& nodes);

  virtual void DeleteSelected() override;

signals:
  void RequestSelectNode(const QList<Node*>& target);

  void NodeOrderChanged(const QList<Node*>& nodes);

  void FocusedNodeChanged(Node* n);

protected:
  virtual void Retranslate() override;

};

OLIVE_NAMESPACE_EXIT

#endif // PARAM_H
