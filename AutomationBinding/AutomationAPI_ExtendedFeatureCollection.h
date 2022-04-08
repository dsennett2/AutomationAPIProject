#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class WidgetBuilder;
	class Widget;
	/// <summary>
	/// ExtendedFeatureCollection comment
	/// </summary>
	class AUTOMATIONBINDING_API ExtendedFeatureCollection
	{
	public:
		ExtendedFeatureCollection(int guid);

		virtual ~ExtendedFeatureCollection();

		/// <summary>
		/// Create a Widget builder.
		/// </summary>
		/// <param name="widget"> if nullptr is passed in this will be created in 
		/// create mode, otherwise it be in edit mode.</param>
		/// <returns></returns>
		WidgetBuilder* CreateWidgetBuilder(Widget* widget);


	private:
		int m_guid;
	};
}
