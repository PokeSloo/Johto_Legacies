SafariZone_EventScript_OutOfBallsMidBattle::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	end

SafariZone_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string "Would you like to exit the Safari\n"
	.string "Zone right now?$"

SafariZone_Text_TimesUp:
	.string "Ding-dong! Time's up!\n"
	.string "Your Safari Game is over.$"

SafariZone_Text_OutOfBalls:
	.string "You've run out of Safari Balls.\n"
	.string "Your Safari Game is over.$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string "Would you like to place a {POKEBLOCK}\n"
	.string "on the {POKEBLOCK} Feeder?$"

SafariZone_Text_PokeblockStillHere:
	.string "The {STR_VAR_1} you left\n"
	.string "before is still here.$"

SafariZone_Text_PokeblockWasPlaced:
	.string "The {STR_VAR_1} was placed\n"
	.string "on the {POKEBLOCK} Feeder.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "Welcome to the Safari Zone!\p"
	.string "Here, you will encounter many kinds of\n"
	.string "POKéMON rarely seen in Johto.\p"
	.string "And, you'll see them in their wild,\n"
	.string "untamed state in natural habitats.\p"
	.string "You're encouraged to catch POKéMON\n"
	.string "for keeps!\p"
	.string "Come in and enjoy the Safari Zone!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string "Welcome to the Safari Zone!\n"
	.string "Is it your first time here?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string "Come in and enjoy the Safari Zone!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "When you enter the Safari Zone, you\n"
	.string "start with 30 Safari Balls for\l"
	.string "catching POKéMON.\p"
	.string "The Safari Game is over when you run\n"
	.string "out of Safari Balls, or when you've\l"
	.string "walked 500 steps.\p"
	.string "Come in and enjoy the Safari Zone!$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string "Welcome to the Safari Zone!\p"
	.string "All you can catch for just ¥500!\n"
	.string "Would you like to play a Safari Game?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string "Okay.\n"
	.string "Please play another time!$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string "You don't have enough money.\n"
	.string "Sorry.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
	.string "That will be ¥500, please.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string "Here are your Safari Balls.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string "{PLAYER} received 30 Safari Balls.$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string "We'll let you know when your game\n"
	.string "is over.\p"
	.string "So, until then, enjoy yourself, please!\n"
	.string "Off you go on your wild excursion!$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string "Excuse me!\n"
	.string "Your PC BOX is full.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string "Excuse me!\n"
	.string "You seem to be without a {POKEBLOCK} CASE.\p"
	.string "Your SAFARI Game will be much more\n"
	.string "fruitful if you use {POKEBLOCK}S.\p"
	.string "Please come back with a {POKEBLOCK} CASE.\p"
	.string "You may obtain a {POKEBLOCK} CASE from\n"
	.string "the LILYCOVE CONTEST HALL.$"

SafariZone_South_Text_StillHaveTimeExit:
	.string "You still have time left. Would you like\n"
	.string "to exit the Safari Zone now?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string "Please enjoy the rest of your wild\n"
	.string "adventure!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string "Okay.\p"
	.string "I'll take back your remaining Safari\n"
	.string "Balls.\p"
	.string "Thank you for playing.\n"
	.string "We hope to see you again.$"

SafariZone_South_Text_GoodLuck:
	.string "Good luck!\p"
	.string "If you need anything, don't hesitate\n"
	.string "to tell me, please!$"

SafariZone_South_Text_Boy:
	.string "They told me these trees were planted\n"
	.string "in a specific pattern, but I have\l"
	.string "trouble seeing anything here.$"

SafariZone_South_Text_Man:
	.string "This section is too boring, it's like\n"
	.string "they just imported a bunch of POKéMON\l"
	.string "from Kanto's Safari Zone.$"

SafariZone_Southwest_Text_Woman:
	.string "Sitting in one place won't burn your\n"
	.string "Safari Zone steps.\p"
	.string "I like to sit here sometimes and just\n"
	.string "enjoy nature.$"

SafariZone_Northwest_Text_Man:
	.string "Cough cough...\p"
	.string "I got sand in my mouth!\p"
	.string "This is awful!$"

SafariZone_North_Text_Fisherman:
	.string "I heard they imported some wild\n"
	.string "Larvitar from Mt. Silver, still haven't\l"
	.string "found one yet though.$"

SafariZone_North_Text_Man:
	.string "I don't like sand.\p"
	.string "It's coarse and rough and irritating\n"
	.string "and it gets everywhere.\p"
	.string "I'm going to a different Safari Zone\n"
	.string "section.$"

SafariZone_South_Text_Youngster:
	.string "They told me to use the {POKEBLOCK} Feeders,\n"
	.string "but I don't even know how to make a\l"
	.string "{POKEBLOCK}.$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "SAFARI ZONE TRAINER TIP!\p"
	.string "Throw {POKEBLOCK}S at wild POKéMON to make\n"
	.string "them less likely to flee.$"

SafariZone_Southwest_Text_RestHouseSign:
	.string "“Relieve your tired feet.”\n"
	.string "REST HOUSE$"

SafariZone_RestHouse_Text_Youngster:
	.string "I don't have any {POKEBLOCK}S, but I caught\n"
	.string "a good number of POKéMON.\p"
	.string "You can improve your chances of making\n"
	.string "a catch by getting closer to them\l"
	.string "before throwing a Safari Ball.$"

SafariZone_RestHouse_Text_PsychicM:
	.string "I was told there are PSYCHIC-type\n"
	.string "POKéMON here, but I can't find them\l"
	.string "anywhere.\p"
	.string "Maybe they're in a section I can't get\n"
	.string "to yet.$"

SafariZone_RestHouse_Text_FatMan:
	.string "If you put a {POKEBLOCK} on the Feeder,\n"
	.string "POKéMON are attracted to it.\p"
	.string "I think POKéMON with the same sort of\n"
	.string "nature are drawn by a certain {POKEBLOCK}.$"

SafariZone_South_Text_AreaOffLimits1:
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string "The SAFARI ZONE's expansion project\n"
	.string "is finished now.\p"
	.string "We hope you will enjoy the new area.$"

SafariZone_South_Text_AreaOffLimits2:
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_LittleGirl:
	.string "There are so many FAIRY-type POKéMON\n"
	.string "in this grass!\p"
	.string "They're my favorite type!$"

SafariZone_Southeast_Text_FatMan:
	.string "I wish I had the HM move Surf, there\n"
	.string "must be all kinds of neat POKéMON in\l"
	.string "this area.$"

SafariZone_Southeast_Text_RichBoy:
	.string "This way just seems to be a dead end...$"

SafariZone_Northeast_Text_Boy:
	.string "I only have a couple Safari Balls left.\p"
	.string "I'm having a hard time trying to\n"
	.string "decide what I should catch.\p"
	.string "Hmm... Maybe a Hawlucha...$"

SafariZone_Northeast_Text_Woman:
	.string "I thought this area would be special\n"
	.string "since it's difficult to reach, but it\l"
	.string "doesn't seem that great.$"

SafariZone_Northeast_Text_Girl:
	.string "I used up all of my steps trying to get\n"
	.string "here, now I can't take another step.\p"
	.string "Maybe I'll find something if I just turn\n"
	.string "in place.$"
