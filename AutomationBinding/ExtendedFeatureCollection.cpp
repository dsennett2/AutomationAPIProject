#include "AutomationAPI_ExtendedFeatureCollection.h"
#include "AutomationAPI_Widget.h"
#include "AutomationAPI_WidgetBuilder.h"
#include <iostream>
#include "..\AppLibrary\Journaling_ExtendedFeatureCollection.h"
#include "..\AppPartOps\PartOps.h"

AutomationAPI::ExtendedFeatureCollection::ExtendedFeatureCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::ExtendedFeatureCollection::~ExtendedFeatureCollection()
{

}

AutomationAPI::WidgetBuilder* AutomationAPI::ExtendedFeatureCollection::CreateWidgetBuilder(AutomationAPI::Widget* widget)
{

	WidgetBuilder* widgetBuilder =
		Journaling_ExtendedFeatureCollection_CreateWidgetBuilder();

	return nullptr;

}
