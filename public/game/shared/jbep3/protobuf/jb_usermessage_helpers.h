#ifndef JB_UM_HELPERS
#define JB_UM_HELPERS

#include "game/shared/vietnam/protobuf/jb_usermessages.pb.h"
#include <tier1/utlhashdict.h>

class CJBUsermessageHelpers
{
public:
	CJBUsermessageHelpers();

	const google::protobuf::Message *GetPrototype( int index ) const;
	const google::protobuf::Message *GetPrototype( const char *name ) const;

	int GetIndex( const char *name ) const;

	const char *GetName( int index ) const;

private:
	CUtlHashDict<int, false, false> m_NameIndexMap;
	const char *m_IndexNameMap[EJBUserMessages_ARRAYSIZE];
	const google::protobuf::Message *m_Prototypes[EJBUserMessages_ARRAYSIZE];
};

extern CJBUsermessageHelpers g_JBUsermessageHelpers;

#endif // VIETNAM_UM_HELPERS
