#include "AutomationAPI_WidgetBuilder.h"
#include "../Core/GuidObject.h"
#include <exception>

namespace AutomationAPI
{
	class WidgetBuilderImpl
	{
	public:

		virtual ~WidgetBuilderImpl();
		WidgetBuilderImpl() = delete;

		WidgetBuilderImpl(int guid);
		int m_guid;

	};
}

/*
Builds a Widget when given a guid
*/
AutomationAPI::WidgetBuilder::WidgetBuilder(int guid)
{
	m_widgetBuilderImpl = new AutomationAPI::WidgetBuilderImpl(guid);
}

/*
Deletes a Widget Builder
*/
AutomationAPI::WidgetBuilder::~WidgetBuilder()
{
	delete m_widgetBuilderImpl;
}

/*
Sets m_guid to guid
*/
AutomationAPI::WidgetBuilderImpl::WidgetBuilderImpl(int guid)
{
	m_guid = guid;
}

/*
Deletes a Widget Builder Impl
*/
AutomationAPI::WidgetBuilderImpl::~WidgetBuilderImpl()
{

}

/*
Creates a Widget Builder
*/
AutomationAPI::WidgetBuilder* AutomationAPI::WidgetBuilder::CreateWidgetBuilder(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new AutomationAPI::WidgetBuilder(guid);
}

/*
This method will set the type of a Widget Builder
*/
void AutomationAPI::WidgetBuilder::SetType(AutomationAPI::WidgetBuilder::WidgetBuilderTypes type)
{
	WidgetBuilder* widgetBuilder =
		dynamic_cast<WidgetBuilder*>(
			GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_widgetBuilderImpl->m_guid));
	if (widgetBuilder == nullptr)
	{
		throw std::exception("not able to retrieve widgetBuilder Object");
	}

	Journaling_WidgetBuilder_SetType(widgetBuilder, (JournalWidgetBuilderTypes)type);

}

/*
Gets the type of a Widget Builder
*/
AutomationAPI::WidgetBuilder::WidgetBuilderTypes AutomationAPI::WidgetBuilder::GetType()
{
	WidgetBuilder* blockBuilder =
		dynamic_cast<WidgetBuilder*>(
			GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_widgetBuilderImpl->m_guid));

	if (blockBuilder == nullptr)
	{
		throw std::exception("not able to retrieve widgetBuilder Object");
	}


	int t = (int)Journaling_WidgetBuilder_GetType(widgetBuilder);
	AutomationAPI::WidgetBuilder::WidgetBuilderTypes type = (AutomationAPI::WidgetBuilder::WidgetBuilderTypes)t;

	return type;
}

/*
If a widget was created from a parent widget, this will reset the created widget to the parent widget
*/
void AutomationAPI::WidgetBuilder::reset()
{
	//if this widget was created from another widget, this method would reset it back to what the "parent" widget looks like
	return;
}

