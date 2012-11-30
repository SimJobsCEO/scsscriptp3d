/*
    This file is part of SCSScript.

    Copyright (C) 2006-2012 by Nick Sharmanzhinov

    SCSScript is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SCSScript is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SCSScript.  If not, see <http://www.gnu.org/licenses/>.

    Nick Sharmanzhinov
    except134@gmail.com
*/

#pragma once

static enum EVENT_SUBSCRIBE_TO_SYSTEM_EVENT_ID {
	EVENT_SIM_1SEC						,
	EVENT_SIM_4SEC						,
	EVENT_SIM_6HZ						,
	EVENT_SIM_CRASHED					,
	EVENT_SIM_CRASHRESET				,
	EVENT_FLIGHT_LOAD					,
	EVENT_FLIGHT_SAVE					,
	EVENT_SIM_FLIGHTPLAN_ACTIVATED		,
	EVENT_SIM_FLIGHTPLAN_DEACTIVATED	,
	EVENT_SIM_FRAME						,
	EVENT_SIM_PAUSE						,
	EVENT_SIM_PAUSED					,
	EVENT_SIM_PAUSEFRAME				,
	EVENT_SIM_POSITION_CHANGED			,
	EVENT_SIM_SIM						,
	EVENT_SIM_START						,
	EVENT_SIM_STOP						,
	EVENT_SIM_SOUND						,
	EVENT_SIM_UNPAUSED					,
	EVENT_SIM_VIEW						,
	EVENT_SIM_WEATHER_MODE_CHANGED		,
};

typedef struct REQUEST {
	SIMCONNECT_DATA_REQUEST_ID RequestID;
	SIMCONNECT_DATA_DEFINITION_ID DefineID;
	SIMCONNECT_PERIOD Period;
	SIMCONNECT_OBJECT_ID ObjectID;
	PVOID Data;
	double Val;
	double ValToSet;
	bool ValToSetFlag;
	SIMCONNECT_DATA_REQUEST_FLAG  Flags;
}REQUEST,*PREQUEST,**PPREQUEST;

typedef struct DEFINITION {
	SIMCONNECT_DATA_DEFINITION_ID DefineID;
	SIMCONNECT_DATATYPE DatumType;
	char DatumName[BUFSIZ];
	char UnitsName[BUFSIZ];
}DEFINITION,*PDEFINITION,**PPDEFINITION;

#define MAX_DEFINITIONS	512
#define MAX_REQUESTS	512

enum DATA_DEFINE_ID 
{
	// �����
	DEFINITION_TIME_OF_DAY							,

	// ���������
	DEFINITION_PAYLOAD01							,
	DEFINITION_PAYLOAD02							,
	DEFINITION_PAYLOAD03							,
	DEFINITION_PAYLOAD04							,
	DEFINITION_PAYLOAD05							,
	DEFINITION_PAYLOAD06							,
	DEFINITION_PAYLOAD07							,
	DEFINITION_PAYLOAD08							,
	DEFINITION_PAYLOAD09							,
	DEFINITION_PAYLOAD10							,
	DEFINITION_PAYLOAD11							,
	DEFINITION_PAYLOAD12							,
	DEFINITION_PAYLOAD13							,
	DEFINITION_PAYLOAD14							,
	DEFINITION_PAYLOAD15							,
	DEFINITION_PAYLOAD16							,
	DEFINITION_PAYLOAD17							,
	DEFINITION_PAYLOAD18							,
	DEFINITION_PAYLOAD19							,
	DEFINITION_PAYLOAD20							,
	DEFINITION_PAYLOAD21							,
	DEFINITION_PAYLOAD22							,
	DEFINITION_PAYLOAD23							,
	DEFINITION_PAYLOAD24							,
	DEFINITION_PAYLOAD25							,
	DEFINITION_PAYLOAD26							,
	DEFINITION_PAYLOAD27							,
	DEFINITION_PAYLOAD28							,
	DEFINITION_PAYLOAD29							,
	DEFINITION_PAYLOAD30							,	
	DEFINITION_PAYLOAD31							,
	DEFINITION_PAYLOAD32							,
	DEFINITION_PAYLOAD_STATION_COUNT				,
	DEFINITION_PAYLOAD_EMPTY_WEIGHT					,
	DEFINITION_PAYLOAD_MAX_GROSS_WEIGHT				,

	// �������
	DEFINITION_FUEL_QTY_LEFT						,
	DEFINITION_FUEL_QTY_RIGHT						,

	// �������������
	DEFINITION_ELECTRICAL_BATTERY_VOLTAGE			,
	DEFINITION_ELECTRICAL_BATTERY_LOAD				,
	DEFINITION_ELECTRICAL_TOTAL_LOAD_AMPS			,
	DEFINITION_ELECTRICAL_MASTER_BATTERY			,

	// ������
	DEFINITION_THROTTLE_LOWER_LIMIT					,
	DEFINITION_NUMBER_OF_ENGINES   					,
	DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION1	,
	DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION2	,
	DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION3	,
	DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION4	,
	DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE1	,
	DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE2	,
	DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE3	,
	DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE4	,
	DEFINITION_GENERAL_ENG_OIL_PRESSURE1			,
	DEFINITION_GENERAL_ENG_OIL_PRESSURE2			,
	DEFINITION_GENERAL_ENG_OIL_PRESSURE3			,
	DEFINITION_GENERAL_ENG_OIL_PRESSURE4			,
	DEFINITION_GENERAL_ENG_OIL_TEMPERATURE1			,
	DEFINITION_GENERAL_ENG_OIL_TEMPERATURE2			,
	DEFINITION_GENERAL_ENG_OIL_TEMPERATURE3			,
	DEFINITION_GENERAL_ENG_OIL_TEMPERATURE4			,
	DEFINITION_GENERAL_ENG_FUEL_VALVE1				,
	DEFINITION_GENERAL_ENG_FUEL_VALVE2				,
	DEFINITION_GENERAL_ENG_FUEL_VALVE3				,
	DEFINITION_GENERAL_ENG_FUEL_VALVE4				,
	DEFINITION_GENERAL_ENG_FUEL_PRESSURE1			,
	DEFINITION_GENERAL_ENG_FUEL_PRESSURE2			,
	DEFINITION_GENERAL_ENG_FUEL_PRESSURE3			,
	DEFINITION_GENERAL_ENG_FUEL_PRESSURE4			,
	DEFINITION_TURB_ENG_CORRECTED_N1_1				,
	DEFINITION_TURB_ENG_CORRECTED_N1_2				,
	DEFINITION_TURB_ENG_CORRECTED_N1_3				,
	DEFINITION_TURB_ENG_CORRECTED_N1_4				,
	DEFINITION_TURB_ENG_CORRECTED_N2_1				,
	DEFINITION_TURB_ENG_CORRECTED_N2_2				,
	DEFINITION_TURB_ENG_CORRECTED_N2_3				,
	DEFINITION_TURB_ENG_CORRECTED_N2_4				,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_SW1			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_SW2			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_SW3			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_SW4			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_ON1			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_ON2			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_ON3			,
	DEFINITION_GENERAL_ENG_FUEL_PUMP_ON4			,

	// ���������� �����
	DEFINITION_AMBIENT_TEMPERATURE					,
};

enum DATA_REQUEST_ID 
{
	// �����
	REQUEST_TIME_OF_DAY								= DEFINITION_TIME_OF_DAY							,

	// ���������
	REQUEST_PAYLOAD01								= DEFINITION_PAYLOAD01								,
	REQUEST_PAYLOAD02								= DEFINITION_PAYLOAD02								,
	REQUEST_PAYLOAD03								= DEFINITION_PAYLOAD03								,
	REQUEST_PAYLOAD04								= DEFINITION_PAYLOAD04								,
	REQUEST_PAYLOAD05								= DEFINITION_PAYLOAD05								,
	REQUEST_PAYLOAD06								= DEFINITION_PAYLOAD06								,
	REQUEST_PAYLOAD07								= DEFINITION_PAYLOAD07								,
	REQUEST_PAYLOAD08								= DEFINITION_PAYLOAD08								,
	REQUEST_PAYLOAD09								= DEFINITION_PAYLOAD09								,
	REQUEST_PAYLOAD10								= DEFINITION_PAYLOAD10								,
	REQUEST_PAYLOAD11								= DEFINITION_PAYLOAD11								,
	REQUEST_PAYLOAD12								= DEFINITION_PAYLOAD12								,
	REQUEST_PAYLOAD13								= DEFINITION_PAYLOAD13								,
	REQUEST_PAYLOAD14								= DEFINITION_PAYLOAD14								,
	REQUEST_PAYLOAD15								= DEFINITION_PAYLOAD15								,
	REQUEST_PAYLOAD16								= DEFINITION_PAYLOAD16								,
	REQUEST_PAYLOAD17								= DEFINITION_PAYLOAD17								,
	REQUEST_PAYLOAD18								= DEFINITION_PAYLOAD18								,
	REQUEST_PAYLOAD19								= DEFINITION_PAYLOAD19								,
	REQUEST_PAYLOAD20								= DEFINITION_PAYLOAD20								,
	REQUEST_PAYLOAD21								= DEFINITION_PAYLOAD21								,
	REQUEST_PAYLOAD22								= DEFINITION_PAYLOAD22								,
	REQUEST_PAYLOAD23								= DEFINITION_PAYLOAD23								,
	REQUEST_PAYLOAD24								= DEFINITION_PAYLOAD24								,
	REQUEST_PAYLOAD25								= DEFINITION_PAYLOAD25								,
	REQUEST_PAYLOAD26								= DEFINITION_PAYLOAD26								,
	REQUEST_PAYLOAD27								= DEFINITION_PAYLOAD27								,
	REQUEST_PAYLOAD28								= DEFINITION_PAYLOAD28								,
	REQUEST_PAYLOAD29								= DEFINITION_PAYLOAD29								,
	REQUEST_PAYLOAD30								= DEFINITION_PAYLOAD30								,
	REQUEST_PAYLOAD31								= DEFINITION_PAYLOAD31								,
	REQUEST_PAYLOAD32								= DEFINITION_PAYLOAD32								,
	REQUEST_PAYLOAD_STATION_COUNT					= DEFINITION_PAYLOAD_STATION_COUNT					,
	REQUEST_PAYLOAD_EMPTY_WEIGHT					= DEFINITION_PAYLOAD_EMPTY_WEIGHT					,
	REQUEST_PAYLOAD_MAX_GROSS_WEIGHT				= DEFINITION_PAYLOAD_MAX_GROSS_WEIGHT				,

	// �������
	REQUEST_FUEL_QTY_LEFT							= DEFINITION_FUEL_QTY_LEFT							,
	REQUEST_FUEL_QTY_RIGHT							= DEFINITION_FUEL_QTY_RIGHT							,

	// �������������								  
	REQUEST_ELECTRICAL_BATTERY_VOLTAGE				= DEFINITION_ELECTRICAL_BATTERY_VOLTAGE				,
	REQUEST_ELECTRICAL_BATTERY_LOAD					= DEFINITION_ELECTRICAL_BATTERY_LOAD				,
	REQUEST_ELECTRICAL_TOTAL_LOAD_AMPS				= DEFINITION_ELECTRICAL_TOTAL_LOAD_AMPS				,
	REQUEST_ELECTRICAL_MASTER_BATTERY				= DEFINITION_ELECTRICAL_MASTER_BATTERY				,

	// ������										  
	REQUEST_THROTTLE_LOWER_LIMIT					= DEFINITION_THROTTLE_LOWER_LIMIT					,
	REQUEST_NUMBER_OF_ENGINES   					= DEFINITION_NUMBER_OF_ENGINES   					,
	REQUEST_GENERAL_ENG_THROTTLE_LEVER_POSITION1	= DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION1	,
	REQUEST_GENERAL_ENG_THROTTLE_LEVER_POSITION2	= DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION2	,
	REQUEST_GENERAL_ENG_THROTTLE_LEVER_POSITION3	= DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION3	,
	REQUEST_GENERAL_ENG_THROTTLE_LEVER_POSITION4	= DEFINITION_GENERAL_ENG_THROTTLE_LEVER_POSITION4	,
	REQUEST_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE1	= DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE1	,
	REQUEST_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE2	= DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE2	,
	REQUEST_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE3	= DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE3	,
	REQUEST_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE4	= DEFINITION_GENERAL_ENG_EXHAUST_GAS_TEMPERATURE4	,
	REQUEST_GENERAL_ENG_OIL_PRESSURE1				= DEFINITION_GENERAL_ENG_OIL_PRESSURE1				,
	REQUEST_GENERAL_ENG_OIL_PRESSURE2				= DEFINITION_GENERAL_ENG_OIL_PRESSURE2				,
	REQUEST_GENERAL_ENG_OIL_PRESSURE3				= DEFINITION_GENERAL_ENG_OIL_PRESSURE3				,
	REQUEST_GENERAL_ENG_OIL_PRESSURE4				= DEFINITION_GENERAL_ENG_OIL_PRESSURE4				,
	REQUEST_GENERAL_ENG_OIL_TEMPERATURE1			= DEFINITION_GENERAL_ENG_OIL_TEMPERATURE1			,
	REQUEST_GENERAL_ENG_OIL_TEMPERATURE2			= DEFINITION_GENERAL_ENG_OIL_TEMPERATURE2			,
	REQUEST_GENERAL_ENG_OIL_TEMPERATURE3			= DEFINITION_GENERAL_ENG_OIL_TEMPERATURE3			,
	REQUEST_GENERAL_ENG_OIL_TEMPERATURE4			= DEFINITION_GENERAL_ENG_OIL_TEMPERATURE4			,
	REQUEST_GENERAL_ENG_FUEL_VALVE1					= DEFINITION_GENERAL_ENG_FUEL_VALVE1				,
	REQUEST_GENERAL_ENG_FUEL_VALVE2					= DEFINITION_GENERAL_ENG_FUEL_VALVE2				,
	REQUEST_GENERAL_ENG_FUEL_VALVE3					= DEFINITION_GENERAL_ENG_FUEL_VALVE3				,
	REQUEST_GENERAL_ENG_FUEL_VALVE4					= DEFINITION_GENERAL_ENG_FUEL_VALVE4				,
	REQUEST_GENERAL_ENG_FUEL_PRESSURE1				= DEFINITION_GENERAL_ENG_FUEL_PRESSURE1				,
	REQUEST_GENERAL_ENG_FUEL_PRESSURE2				= DEFINITION_GENERAL_ENG_FUEL_PRESSURE2				,
	REQUEST_GENERAL_ENG_FUEL_PRESSURE3				= DEFINITION_GENERAL_ENG_FUEL_PRESSURE3				,
	REQUEST_GENERAL_ENG_FUEL_PRESSURE4				= DEFINITION_GENERAL_ENG_FUEL_PRESSURE4				,
	REQUEST_TURB_ENG_CORRECTED_N1_1					= DEFINITION_TURB_ENG_CORRECTED_N1_1				,
	REQUEST_TURB_ENG_CORRECTED_N1_2					= DEFINITION_TURB_ENG_CORRECTED_N1_2				,
	REQUEST_TURB_ENG_CORRECTED_N1_3					= DEFINITION_TURB_ENG_CORRECTED_N1_3				,
	REQUEST_TURB_ENG_CORRECTED_N1_4					= DEFINITION_TURB_ENG_CORRECTED_N1_4				,
	REQUEST_TURB_ENG_CORRECTED_N2_1					= DEFINITION_TURB_ENG_CORRECTED_N2_1				,
	REQUEST_TURB_ENG_CORRECTED_N2_2					= DEFINITION_TURB_ENG_CORRECTED_N2_2				,
	REQUEST_TURB_ENG_CORRECTED_N2_3					= DEFINITION_TURB_ENG_CORRECTED_N2_3				,
	REQUEST_TURB_ENG_CORRECTED_N2_4					= DEFINITION_TURB_ENG_CORRECTED_N2_4				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_SW1				= DEFINITION_GENERAL_ENG_FUEL_PUMP_SW1				,	
	REQUEST_GENERAL_ENG_FUEL_PUMP_SW2				= DEFINITION_GENERAL_ENG_FUEL_PUMP_SW2				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_SW3				= DEFINITION_GENERAL_ENG_FUEL_PUMP_SW3				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_SW4				= DEFINITION_GENERAL_ENG_FUEL_PUMP_SW4				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_ON1				= DEFINITION_GENERAL_ENG_FUEL_PUMP_ON1				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_ON2				= DEFINITION_GENERAL_ENG_FUEL_PUMP_ON2				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_ON3				= DEFINITION_GENERAL_ENG_FUEL_PUMP_ON3				,
	REQUEST_GENERAL_ENG_FUEL_PUMP_ON4				= DEFINITION_GENERAL_ENG_FUEL_PUMP_ON4				,

	// ���������� �����
	REQUEST_AMBIENT_TEMPERATURE						= DEFINITION_AMBIENT_TEMPERATURE					,
};													

class SimConnect : public SimVars, public Helpers::Singleton<SimConnect>
{
private:
	boost::shared_ptr<Application>	application;

	double							simTick18;
	double							timeoutBeforeStartUpdate;

	HANDLE							simConnect;

	std::string						myName;

	bool							addingRequests;
	REQUEST							requestSimObjects[MAX_REQUESTS];
	size_t							requestSimObjectsCount;
	SIMCONNECT_DATA_REQUEST_ID		alreadyRequested[MAX_REQUESTS];
	size_t							alreadyRequestedCount;

	bool							addingDefinitions;
	DEFINITION						definitionSimObjects[MAX_DEFINITIONS];
	size_t							definitionSimObjectsCount;
	char							alreadyDefined[MAX_DEFINITIONS][BUFSIZ];
	size_t							alreadyDefinedCount;

	friend void CALLBACK fnSimConnectDispatchExt(SIMCONNECT_RECV* pData,DWORD cbData,void* pContext);

protected:
	void fnSimConnectDispatch(SIMCONNECT_RECV* pData,DWORD cbData);

public:
	boost::shared_ptr<SoundEngine::SoundEngine>			soundEngine;
	boost::shared_ptr<ScriptEngine::ScriptEngine>		scriptEngine;
	boost::shared_ptr<SaveLoadEngine::SaveLoadEngine>	saveLoadEngine;
	boost::shared_ptr<AutopilotEngine::AutopilotEngine>	autopilotEngine;

	bool							quitSignalCatch;

	char							loadedFileName[MAX_PATH];
	char							savedFileName[MAX_PATH];
	char							flightPlanActivated[MAX_PATH];

	bool							flightPlanDeActivated;
	bool							simPaused;
	bool							crashed;
	bool							crashReset;
	bool							positionChanged;
	bool							simRunning;
	bool							soundMaster;
	bool							weatherModeChanged;

	float							simFrameRate;
	float							simSpeed;
	float							simPauseFrameRate;
	float							simPauseSpeed;

	DWORD							activeViewMode;

public:
	SimConnect();
	~SimConnect();

	bool Init(HWND windowHandle);
	void DeInit();
	void Update();

	void SetPanelCustomParameter(const String& str)
	{
		if(application)
			application->SetPanelCustomParameter(str);
	}

	void EmptyDefinitionList() {
		definitionSimObjectsCount=0;
	}

	void EmptyRequestList() {
		requestSimObjectsCount=0;
	}

	void AddToDataDefinition(SIMCONNECT_DATA_DEFINITION_ID DefineID, const char *DatumName, const char *UnitsName, SIMCONNECT_DATATYPE DatumType = SIMCONNECT_DATATYPE_FLOAT64) {
		definitionSimObjects[definitionSimObjectsCount].DefineID=DefineID;
		definitionSimObjects[definitionSimObjectsCount].DatumType=DatumType;
		Strcpy(definitionSimObjects[definitionSimObjectsCount].DatumName,BUFSIZ,DatumName);
		Strcpy(definitionSimObjects[definitionSimObjectsCount].UnitsName,BUFSIZ,UnitsName);
		definitionSimObjectsCount++;
	};

	void RequestDataOnSimObject(SIMCONNECT_DATA_REQUEST_ID RequestID, SIMCONNECT_DATA_DEFINITION_ID DefineID, SIMCONNECT_PERIOD Period=SIMCONNECT_PERIOD_SIM_FRAME, SIMCONNECT_DATA_REQUEST_FLAG  Flags = 0, SIMCONNECT_OBJECT_ID ObjectID=SIMCONNECT_OBJECT_ID_USER) {
		requestSimObjects[RequestID].DefineID=DefineID;
		requestSimObjects[RequestID].RequestID=RequestID;
		requestSimObjects[RequestID].Period=Period;
		requestSimObjects[RequestID].ObjectID=ObjectID;
		requestSimObjects[RequestID].Data=nullptr;
		requestSimObjects[RequestID].Flags=Flags;
		requestSimObjectsCount++;
	};

	void SetParamOnSimObject(SIMCONNECT_DATA_REQUEST_ID RequestID, double val) {
		requestSimObjects[RequestID].ValToSet=val;
		requestSimObjects[RequestID].ValToSetFlag=true;
	};

	double GetParamFromSimObject(SIMCONNECT_DATA_REQUEST_ID RequestID) {
		return requestSimObjects[RequestID].Val;
	}

	void StartDefinitionTransaction() {
		addingDefinitions=true;
	}

	void StopDefinitionTransaction() {
		addingDefinitions=false;
	}

	void StartRequestTransaction() {
		addingRequests=true;
	}

	void StopRequestTransaction() {
		addingRequests=false;
	}
};


