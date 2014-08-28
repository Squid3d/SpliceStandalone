#ifndef __FLOAT32AEWIDGET_H__
#define __FLOAT32AEWIDGET_H__

#include <QtGui/QWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QTreeWidgetItem>
#include <QtGui/QContextMenuEvent>
#include <map>
#include <set>
#include <vector>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QLineEdit>

#include "DoubleValidator.h"
#include "AEWidget.h"

#include "macros.h"
namespace FabricSplice
{
	/// \brief AEWidget to represent a Float32 Attribute
	class Float32AEWidget : public AEWidget
	{
		Q_OBJECT

		public:

			Float32AEWidget( FabricCore::RTVal param ,QWidget* parent = NULL);
			~Float32AEWidget() {}

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

		private slots:

		signals:

		protected:


		protected:


		protected:

      typedef QLineEdit ItemWidget;
		  std::vector<ItemWidget *> m_widgets;

      QWidget * m_listWidget;
      DoubleValidator * m_validator;

	};
	
	
}


#endif