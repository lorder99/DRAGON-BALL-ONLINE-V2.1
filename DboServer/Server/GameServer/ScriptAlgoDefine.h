#ifndef _SCRIPTALGODEFINE_H_
#define _SCRIPTALGODEFINE_H_


enum eSCRIPTALGOCONTROLID
{
	SCRIPTCONTROL_STAGE,
	SCRIPTCONTROL_FAILED,
	SCRIPTCONTROL_PREPARE,

	SCRIPTCONTROL_ACTION_ADDNPC,
	SCRIPTCONTROL_ACTION_ADDMOB,
	SCRIPTCONTROL_ACTION_ADDMOB_GROUP,
	SCRIPTCONTROL_ACTION_LOOP,
	SCRIPTCONTROL_ACTION_WAIT,
	SCRIPTCONTROL_ACTION_WHILE,
	SCRIPTCONTROL_ACTION_CALCULATE,
	SCRIPTCONTROL_ACTION_GET_LOCATION,
	SCRIPTCONTROL_ACTION_SEND_EVENT_TO_TS,
	SCRIPTCONTROL_ACTION_REMOVE_MOB_GROUP,
	SCRIPTCONTROL_ACTION_WPS_FAIL,
	SCRIPTCONTROL_ACTION_BROAD_MESSAGE,
	SCRIPTCONTROL_ACTION_CASE,
	SCRIPTCONTROL_ACTION_CHANGE_CHAR_ATTRIBUTE,
	SCRIPTCONTROL_ACTION_CHANGE_NPC_ATTRIBUTE,
	SCRIPTCONTROL_ACTION_CHANGE_OBJECT_STATE,
	SCRIPTCONTROL_ACTION_CHANGE_SPS_SCENE,
	SCRIPTCONTROL_ACTION_CHANGE_STAGE,
	SCRIPTCONTROL_ACTION_CLEAR_EVENT,
	SCRIPTCONTROL_ACTION_DEFAULT,
	SCRIPTCONTROL_ACTION_FUNCTION,
	SCRIPTCONTROL_ACTION_DIRECTION_INDICATE,
	SCRIPTCONTROL_ACTION_DIRECT_PLAY,
	SCRIPTCONTROL_ACTION_ELSE,
	SCRIPTCONTROL_ACTION_EVENT_HANDLER,
	SCRIPTCONTROL_ACTION_EVENT_STATUS_CLEAR,
	SCRIPTCONTROL_ACTION_EVENT_STATUS_REGISTER,
	SCRIPTCONTROL_ACTION_EVENT_STATUS_SELECT,
	SCRIPTCONTROL_ACTION_EXEC_AT_ONCE,
	SCRIPTCONTROL_ACTION_EXEC_WPS,
	SCRIPTCONTROL_ACTION_FLASH_PLAY,
	SCRIPTCONTROL_ACTION_GET_FAINT_LOCATION,
	SCRIPTCONTROL_ACTION_MOB_LIST,
	SCRIPTCONTROL_ACTION_PLAY_BGM,
	SCRIPTCONTROL_ACTION_PLAY_JINGLE,
	SCRIPTCONTROL_ACTION_REGISTER_BUFF,
	SCRIPTCONTROL_ACTION_REMOVE_NPC,
	SCRIPTCONTROL_ACTION_SEND_AIS_EVENT,
	SCRIPTCONTROL_ACTION_SEND_EVENT_TO_AIS,
	SCRIPTCONTROL_ACTION_SEND_EVENT_TO_SPS,
	SCRIPTCONTROL_ACTION_SEND_EVENT_TO_TQS,
	SCRIPTCONTROL_ACTION_SEND_EVENT_TO_WPS,
	SCRIPTCONTROL_ACTION_SEND_SPS_EVENT,
	SCRIPTCONTROL_ACTION_SWITCH,
	SCRIPTCONTROL_ACTION_SYSTEM_MESSAGE,
	SCRIPTCONTROL_ACTION_TELECAST_MESSAGE,
	SCRIPTCONTROL_ACTION_THEN,
	SCRIPTCONTROL_ACTION_TIME_COUNTDOWN,
	SCRIPTCONTROL_ACTION_UNREGISTER_BUFF,
	SCRIPTCONTROL_ACTION_IF,
	SCRIPTCONTROL_ACTION_CCBD,
	SCRIPTCONTROL_ACTION_CCBD_REGISTER_DIRECT_PLAY,
	SCRIPTCONTROL_ACTION_CCBD_WAIT_USER,
	SCRIPTCONTROL_ACTION_CCBD_STAGE,
	SCRIPTCONTROL_ACTION_CCBD_REWARD,
	SCRIPTCONTROL_ACTION_CCBD_EXEC_PATTERN,
	SCRIPTCONTROL_ACTION_CCBD_STAGE_CLEAR,
	SCRIPTCONTROL_ACTION_CCBD_LEAVE,

	SCRIPTCONTROL_CONDITION_CHECKTIME,
	SCRIPTCONTROL_CONDITION_LOOPCOND,
	SCRIPTCONTROL_CONDITION_NPCFAINT,
	SCRIPTCONTROL_CONDITION_AREAENTER,
	SCRIPTCONTROL_CONDITION_CHECK_LP,
	SCRIPTCONTROL_CONDITION_CHECK_MOB_GROUP,
	SCRIPTCONTROL_CONDITION_CHILD,
	SCRIPTCONTROL_CONDITION_ALL_PLAYER_FAINT,
	SCRIPTCONTROL_CONDITION_CHECK_BATTLE,
	SCRIPTCONTROL_CONDITION_CHECK_COUNTDOWN,
	SCRIPTCONTROL_CONDITION_COMPARE,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_AIS,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_ITEM,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_SPS,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_TQS,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_TS,
	SCRIPTCONTROL_CONDITION_RECV_EVENT_FROM_WPS,
	SCRIPTCONTROL_CONDITION_RECV_SPS_EVENT,
	SCRIPTCONTROL_CONDITION_RECV_TS_EVENT,
	SCRIPTCONTROL_CONDITION_SPAWNED_MOB,
	SCRIPTCONTROL_CONDITION_SPAWNED_NPC,
	SCRIPTCONTROL_CONDITION_WAIT_CONDITION,
	SCRIPTCONTROL_CONDITION_CCBD_PATTERN,
	SCRIPTCONTROL_CONDITION_CCBD_CHECK_RUN_STATE,
	SCRIPTCONTROL_CONDITION_CCBD_CHECK_LIMIT_TIME,

	MAX_SCRIPTCONTROLID,
	INVALID_SCRIPTCONTROLID,
};


enum eTQS_ALGOCONTROLID
{
	TQS_ALGOCONTROLID_BEGIN,
	TQS_ALGOCONTROLID_STAGE,
	TQS_ALGOCONTROLID_END,

	TQS_ALGOCONTROLID_ACTION_ADDMOB,
	TQS_ALGOCONTROLID_ACTION_ADDMOB_GROUP,
	TQS_ALGOCONTROLID_ACTION_ADDNPC,
	TQS_ALGOCONTROLID_ACTION_BROAD_MESSAGE,
	TQS_ALGOCONTROLID_ACTION_CHANGE_OBJECT_STATE,
	TQS_ALGOCONTROLID_ACTION_CHANGE_STAGE,
	TQS_ALGOCONTROLID_ACTION_DIRECTION_INDICATE,
	TQS_ALGOCONTROLID_ACTION_DIRECT_PLAY,
	TQS_ALGOCONTROLID_ACTION_FUNCTION,
	TQS_ALGOCONTROLID_ACTION_INFORMATION,
	TQS_ALGOCONTROLID_ACTION_PLAY_BGM,
	TQS_ALGOCONTROLID_ACTION_PLAY_JINGLE,
	TQS_ALGOCONTROLID_ACTION_PROGRESS_MESSAGE,
	TQS_ALGOCONTROLID_ACTION_REGISTER_CONDITION,
	TQS_ALGOCONTROLID_ACTION_REMOVE_MOB_GROUP,
	TQS_ALGOCONTROLID_ACTION_REMOVE_NPC,
	TQS_ALGOCONTROLID_ACTION_REWARD,
	TQS_ALGOCONTROLID_ACTION_SEND_TQS_EVENT,
	TQS_ALGOCONTROLID_ACTION_SEND_TS_EVENT,
	TQS_ALGOCONTROLID_ACTION_TELEPORT,
	TQS_ALGOCONTROLID_ACTION_TIME_COUNTDOWN,
	TQS_ALGOCONTROLID_ACTION_WAIT,


	TQS_ALGOCONTROLID_CONDITION_ALL_PLAYER_FAINT,
	TQS_ALGOCONTROLID_CONDITION_AREAENTER,
	TQS_ALGOCONTROLID_CONDITION_CHECK_MOB_GROUP,
	TQS_ALGOCONTROLID_CONDITION_CHECKTIME,
	TQS_ALGOCONTROLID_CONDITION_CHILD,
	TQS_ALGOCONTROLID_CONDITION_NPCFAINT,
	TQS_ALGOCONTROLID_CONDITION_RECV_SPS_EVENT,
	TQS_ALGOCONTROLID_CONDITION_RECV_TS_EVENT,


	MAX_TQS_ALGOCONTROLIDID,
	INVALID_TQS_ALGOCONTROLIDID,
};

#endif