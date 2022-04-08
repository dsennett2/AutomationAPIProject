/* DO NOT EDIT THIS FILE - it is machine generated */
#include "automationapi_Session.h"
#include "..\Core\Core.h"
#include "..\AppPartOps\PartOps.h"
#include "..\AppPartOps\Journaling_Session.h"
/* Header for class automationapi_Session */


void JNICALL Java_automationapi_Session_initSession
(JNIEnv*, jobject)
{
	initializeProduct() ;
}

/*
 * Class:     automationapi_Session
 * Method:    makePart
 * Signature: (Ljava/lang/String;)Lautomationapi/Part;
 */
jobject JNICALL Java_automationapi_Session_makePart
(JNIEnv* env, jobject theSession, jstring partPath)
{
	std::string partFilePath;
	const char* nameCharPointer = env->GetStringUTFChars(partPath, NULL);
	partFilePath += nameCharPointer;


	Application::PartFile* partFile = Journaling_Session_MakePart(partFilePath);

	int guid = partFile->GetGuid();

	jobject retval = nullptr;

	jclass jcls = env->FindClass("automationapi/Part");
	jmethodID mID2 = env->GetMethodID(jcls,	"<init>", "(I)V");
	retval = env->NewObject(jcls, mID2, guid);

	return retval;
}


