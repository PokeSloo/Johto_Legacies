MossdeepCity_GameCorner_1F_MapScripts::
	.byte 0


MossdeepCity_GameCorner_1F_EventScript_StoryGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BANETTITE, MossdeepCity_GameCorner_1F_EventScript_StoryGirl_1
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_StoryGirl_4
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_3
	waitmessage
	setweather WEATHER_SHADE
	doweather
	fadenewbgm MUS_RG_LAVENDER
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_4
	fadedefaultbgm
	setweather WEATHER_NONE
	doweather
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_5
	giveitem ITEM_BANETTITE
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_6
	setflag FLAG_RECEIVED_BANETTITE
	release
	end

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_1:
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_0
	release
	end

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_4:
	msgbox MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_2
	release
	end


MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_0:
	.string "Welcome back child.\p"
	.string "Have you heard any more scary stories\n"
	.string "lately?$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_1:
	.string "Tell me child... Do you like scary\n"
	.string "stories?$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_2:
	.string "That's a shame.\p"
	.string "Some people just can't handle them.$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_3:
	.string "In that case, I have a particularly\n"
	.string "scary story...$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_4:
	.string "Several years ago, a young boy about\n"
	.string "your age moved to this island with his\l"
	.string "mother.\p"
	.string "He was having trouble making friends,\n"
	.string "so his mother bought him a stuffed\l"
	.string "POKéMON doll to cheer him up.\p"
	.string "“I'm not some little kid! Stop treating\n"
	.string "me like a baby!” The boy said, throwing\l"
	.string "the doll back at his mother and\l"
	.string "slamming his bedroom door shut.\p"
	.string "Later that night, the boy woke up with a\n"
	.string "sharp pain in his left arm.\p"
	.string "He shifted to lay on his other side when\n"
	.string "something caught his eye.\p"
	.string "Sitting on top of his antique dresser\n"
	.string "was the POKéMON doll.\p"
	.string "He went to throw it out, but noticed it\n"
	.string "had a pin stuck in its left arm.\p"
	.string "Without putting much thought into it,\n"
	.string "the boy threw the doll out into the\l"
	.string "hallway before going back to bed.\p"
	.string "Later that night, he woke up with an\n"
	.string "even worse pain in his right arm.\p"
	.string "He sprang out of bed to find the same\n"
	.string "doll back on his dresser with pin stuck\l"
	.string "in its right arm this time.\p"
	.string "More shaken, the boy hastily threw the\n"
	.string "doll out of his bedroom window.\p"
	.string "While laying in bed, contemplating these\n"
	.string "strange events, the boy eventually\l"
	.string "fell back to sleep.\p"
	.string "After a few hours, the boy woke up with\n"
	.string "excruciating pain in both of his legs.\p"
	.string "He stumbled out of bed and immediately\n"
	.string "fell to the floor.\p"
	.string "Sitting right in front of him, was the\n"
	.string "doll with a pin stuck in each leg.\p"
	.string "In a panicked state, the boy crawled\n"
	.string "into the kitchen, clutching the doll.\p"
	.string "He found the kitchen sink, and stuffed\n"
	.string "the doll into the drain while turning on\l"
	.string "the garbage disposal.\p"
	.string "Surely this will put an end to his\n"
	.string "nightmare, the boy thought.\p"
	.string "But, when morning came, his mother\n"
	.string "called for him, and the boy didn't\l"
	.string "answer.\p"
	.string "After a few more tries, she went up to\n"
	.string "check on him.\p"
	.string "She opened the bedroom door to find\n"
	.string "the room empty.\p"
	.string "As she started to close the door,\n"
	.string "something caught her eye.\p"
	.string "There, sitting on the boy's dresser was\n"
	.string "the doll with a pin stuck in its head!$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_5:
	.string "The end!\p"
	.string "Hehehe! You don't seem to be rattled\n"
	.string "too badly.\p"
	.string "Here, you can have this.$"

MossdeepCity_GameCorner_1F_EventScript_StoryGirl_Text_6:
	.string "And don't worry.\p"
	.string "It's just a story afterall...\p"
	.string "Hehehe...$"
