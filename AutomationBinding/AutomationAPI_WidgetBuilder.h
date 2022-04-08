#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class WidgetBuilder;
	class WidgetBuilderImpl;
	/// <summary>
	/// You can use this to create a widget
	/// </summary>
	class AUTOMATIONBINDING_API WidgetBuilder : public IBuilder
	{
	public:
		enum WidgetBuilderTypes
		{
			TypesFromBlank, /**Represents a widget created "from scratch" */
			TypesFromExistingWidget, /**Represents a widget created by starting with a copy of another widget*/
		};

		void SetType(WidgetBuilderTypes type);
		WidgetBuilderTypes GetType();


		void reset();

		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static WidgetBuilder* CreateWidgetBuilder(int guid);
		virtual ~WidgetBuilder();
		WidgetBuilder() = delete;

	private:

		WidgetBuilder(int guid);
		WidgetBuilderImpl* m_widgetBuilderImpl;

	};
}
