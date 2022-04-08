#include "AutomationAPI_ExtendedFeatureCollection.h"
#include "AutomationAPI_Widget.h"
#include "AutomationAPI_WidgetBuilder.h"
#include <iostream>
#include "..\AppLibrary\Journaling_ExtendedFeatureCollection.h"
#include "..\AppPartOps\PartOps.h"

/*
Create an extended feature collection with a given guid
*/
AutomationAPI::ExtendedFeatureCollection::ExtendedFeatureCollection(int guid) : m_guid(guid)
{

}

/*
Delete an extended feature collection
*/
AutomationAPI::ExtendedFeatureCollection::~ExtendedFeatureCollection()
{

}

/*
Uses WidgetBuilder to create a Widget Builder
*/
AutomationAPI::WidgetBuilder* AutomationAPI::ExtendedFeatureCollection::CreateWidgetBuilder(AutomationAPI::Widget* widget)
{

	WidgetBuilder* widgetBuilder =
		Journaling_ExtendedFeatureCollection_CreateWidgetBuilder();

	return nullptr;

}
