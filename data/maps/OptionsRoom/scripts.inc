OptionsRoom_MapScripts::
	.byte 0

OptionsRoom_EventScript_AutoRunSwitch::
	lock
	goto_if_set FLAG_AUTO_RUN, OptionsRoom_EventScript_AutoRunSwitchOn
	msgbox OptionsRoom_Text_SwitchOff, MSGBOX_YESNO
	call_if_eq VAR_RESULT, 1, OptionsRoom_EventScript_AutoRunSwitchTurnOn
	release
	end

OptionsRoom_EventScript_AutoRunSwitchOn::
	msgbox OptionsRoom_Text_SwitchOn, MSGBOX_YESNO
	call_if_eq VAR_RESULT, 1, OptionsRoom_EventScript_AutoRunSwitchTurnOff
	release
	end
	
OptionsRoom_EventScript_AutoRunSwitchTurnOn:
	setflag FLAG_AUTO_RUN
	return
	
OptionsRoom_EventScript_AutoRunSwitchTurnOff:
	clearflag FLAG_AUTO_RUN
	return
	
OptionsRoom_EventScript_AutoRunSign::
	msgbox OptionsRoom_Text_ExplainAutoRun, MSGBOX_SIGN
	end
	
OptionsRoom_Text_ExplainAutoRun:
	.string "AUTO RUN SWITCH\p"
	.string "When this switch is OFF, hold B to\n"
	.string "run or release it to walk.\p"
	.string "When this switch is ON, hold B to\n"
	.string "walk or release it to run.$"

OptionsRoom_Text_SwitchOff:
	.string "It's OFF.\n"
	.string "Turn it ON?$"

OptionsRoom_Text_SwitchOn:
	.string "It's ON.\n"
	.string "Turn it OFF?$"


