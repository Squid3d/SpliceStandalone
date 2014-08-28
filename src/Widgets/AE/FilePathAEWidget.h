#ifndef __FILEPATHAEWIDGET_H__
#define __FILEPATHAEWIDGET_H__

#include <QtGui/QWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QTreeWidgetItem>
#include <QtGui/QContextMenuEvent>
#include <map>
#include <set>
#include <vector>
#include <QtGui/QScrollArea>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

#include "AEWidget.h"

#include "macros.h"
namespace FabricSplice
{
	/// \brief AEWidget to represent a String Attribute
	class FilePathAEWidget : public AEWidget
	{
		Q_OBJECT

		public:

			FilePathAEWidget( FabricCore::RTVal param ,QWidget* parent = NULL);
			~FilePathAEWidget() {}

			// creation function
			static AEWidget * create( FabricCore::RTVal param ,QWidget* parent = NULL);

			// convenient function to get the value of the check as a bool
			FabricCore::RTVal getValueArray();

      // sets the wrapped RTVal
      virtual void setRTVal(FabricCore::RTVal param);

		public slots:

			void setValueArray(FabricCore::RTVal values);

    protected slots:
      virtual void uiChanged();
      virtual void browseClicked();

		private slots:

		signals:

		protected:


		protected:


		protected:

      typedef QLineEdit ItemWidget;
      std::vector<ItemWidget *> m_widgets;
		  std::vector<QPushButton *> m_buttons;

      QWidget * m_listWidget;

	};
	
	
}


#endif