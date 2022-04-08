#include "Journaling_ExtendedFeatureCollection.h"
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

void Journaling_FeatureCollection_CreateWidgetBuilder()
{
	if (IsJournaling())
	{
		std::string name = "CreateWidgetBuilder";
		JournalStartCall(name);
		JournalInClassParam();
	}


	if (IsJournaling())
	{
		GuidObject* retVal = nullptr;
		JournalReturnClass(retVal, "AutomationAPI::Widgetbuilder", "Widgetbuilder");
		JournalEndCall();
	}

	return;
}
