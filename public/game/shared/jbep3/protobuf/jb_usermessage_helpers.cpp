
#include "jb_usermessage_helpers.h"

CJBUsermessageHelpers g_JBUsermessageHelpers;

#define SETUP_MESSAGE( msgname )                          \
	m_NameIndexMap.Insert( #msgname,  UM_##msgname  ); \
	m_IndexNameMap[UM_##msgname] = #msgname;           \
	m_Prototypes[UM_##msgname] = &CUsrMsg_##msgname::default_instance();

#define SETUP_JB_MESSAGE( msgname )                          \
	m_NameIndexMap.Insert( #msgname,  JB_UM_##msgname  ); \
	m_IndexNameMap[JB_UM_##msgname] = #msgname;           \
	m_Prototypes[JB_UM_##msgname] = &CJBUsrMsg_##msgname::default_instance();

CJBUsermessageHelpers::JBUsermessageHelpers()
{
	// Clear all so that any unused are inited.
	memset( m_Prototypes, 0, sizeof(m_Prototypes) );
	memset( m_IndexNameMap, 0, sizeof(m_IndexNameMap) );

	SETUP_MESSAGE( VGUIMenu );
	SETUP_MESSAGE( Geiger );
	SETUP_MESSAGE( Train );
	SETUP_MESSAGE( HudText );
	SETUP_MESSAGE( SayText );
	SETUP_MESSAGE( SayText2 );
	SETUP_MESSAGE( TextMsg );
	SETUP_MESSAGE( HudMsg );
	SETUP_MESSAGE( ResetHud );
	SETUP_MESSAGE( GameTitle );
	SETUP_MESSAGE( Shake );
	SETUP_MESSAGE( Fade );
	SETUP_MESSAGE( Rumble );
	SETUP_MESSAGE( CloseCaption );
	SETUP_MESSAGE( CloseCaptionDirect );
	SETUP_MESSAGE( VoiceMask );
	SETUP_MESSAGE( RequestState );
	SETUP_MESSAGE( HintText );
	SETUP_MESSAGE( KeyHintText );
	SETUP_MESSAGE( DesiredTimescale );
	SETUP_MESSAGE( CurrentTimescale );
	SETUP_MESSAGE( AchievementEvent );
	SETUP_MESSAGE( PlayerStatsUpdate );
	SETUP_MESSAGE( ClientInfo );
	SETUP_MESSAGE( CallVoteFailed );
	SETUP_MESSAGE( VoteStart );
	SETUP_MESSAGE( VotePass );
	SETUP_MESSAGE( VoteFailed );
	SETUP_MESSAGE( VoteSetup );
	SETUP_MESSAGE( SendLastKillerDamageToClient );
	SETUP_MESSAGE( ShowMenu );
	SETUP_MESSAGE( GlowPropTurnOff );
	SETUP_MESSAGE( BreakModel );
	SETUP_MESSAGE( Damage );
	// JB specific usermessages
	SETUP_JB_MESSAGE( ExtVoteStateChange );
	SETUP_JB_MESSAGE( ExtVoteUpdate );
	SETUP_JB_MESSAGE( ShowRoundIntro );
	SETUP_JB_MESSAGE( DeathNotice );
	SETUP_JB_MESSAGE( PlayerSpree );
	SETUP_JB_MESSAGE( Damage );
	SETUP_JB_MESSAGE( SVTUpdate );
}

const google::protobuf::Message *CJBUsermessageHelpers::GetPrototype( int index ) const
{
	if( index >= 0 && index < EJBUserMessages_ARRAYSIZE )
		return m_Prototypes[index];

	return NULL;
}

const google::protobuf::Message *CJBUsermessageHelpers::GetPrototype( const char *name ) const
{
	int index = GetIndex( name );
	if( index > -1 )
		return m_Prototypes[ index ];

	return NULL;
}

int CJBUsermessageHelpers::GetIndex( const char *name ) const
{
	unsigned int idx = m_NameIndexMap.Find( name );
	if( idx != m_NameIndexMap.InvalidHandle() )
		return m_NameIndexMap[idx];

	return -1;
}

const char *CJBUsermessageHelpers::GetName( int index ) const
{
	if( index >= 0 && index < EJBUserMessages_ARRAYSIZE )
		return m_IndexNameMap[index];

	return NULL;
}

