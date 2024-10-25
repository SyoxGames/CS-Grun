-- name: [CS] Grun
-- description: gurn the drunken
local globalModName = "GRUN";
local E_MODEL_GRUN = smlua_model_util_get_id("grun_geo");
local TEX_GRUN_ICON = get_texture_info("grun_icon")
local GRUN_SOUNDBANK = {
	--[CHAR_SOUND_OKEY_DOKEY] = 'GrunOKIEDOKIE.ogg', -- Starting game
	[CHAR_SOUND_LETS_A_GO] = 'GrunLETSAGO.ogg', -- Starting level
	[CHAR_SOUND_PUNCH_YAH] = 'GrunPUNCHYAH.ogg', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] = 'GrunPUNCHWAH.ogg', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] = 'GrunPUNCHHOO.ogg', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] = {'GrunJUMPYAH.ogg', 'GrunJUMPWAH.ogg', 'GrunJUMPHOO.ogg'}, -- First/Second jump sounds
	[CHAR_SOUND_HOOHOO] = 'GrunJUMPHOOHOO.ogg', -- Third jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'GrunWAHA.ogg', 'GrunYIPPEE.ogg'}, -- Triple jump sounds
	[CHAR_SOUND_UH] = 'GrunUH.ogg', -- Wall bonk
	[CHAR_SOUND_UH2] = 'GrunUH2.ogg', -- Landing after long jump
	[CHAR_SOUND_UH2_2] = 'GrunUH2.ogg', -- Same sound as UH2; jumping onto ledge
	[CHAR_SOUND_OOOF] = 'GrunOOOF.ogg', -- Pushed by a bully
	[CHAR_SOUND_OOOF2] = 'GrunOOOF.ogg', -- Same as OOOF, landing after ejected from painting
	[CHAR_SOUND_HAHA] = 'GrunHAHA.ogg', -- Landing triple jump
	[CHAR_SOUND_YAHOO] = 'GrunYAHOO.ogg', -- Long jump
	[CHAR_SOUND_DOH] = 'GrunDOH.ogg', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] = 'GrunWHOA.ogg', -- Grabbing ledge
	[CHAR_SOUND_EEUH] = 'GrunEEUH.ogg', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] = 'GrunWAAAOOOW.ogg', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] = 'GrunTWIRLBOUNCE.ogg', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] = 'GrunGROUNDPOUNDWAH.ogg', 
	[CHAR_SOUND_HRMM] = 'GrunHRMM.ogg', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] = 'GrunHEREWEGO.ogg', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] = 'GrunSOLONGABOWSER.ogg', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] = 'GrunATTACKED.ogg', -- Damaged
	[CHAR_SOUND_PANTING] = 'GrunPANTING.ogg', -- Low health
	[CHAR_SOUND_ON_FIRE] = 'GrunONFIRE.ogg', -- Burned
--SLEEP SOUNDS
	[CHAR_SOUND_IMA_TIRED] = 'GrunIMATIRED.ogg', -- Mario feeling tired
	[CHAR_SOUND_YAWNING] = 'GrunYAWN.ogg', -- Mario yawning before he sits down to sleep
	[CHAR_SOUND_SNORING1] = 'GrunSNORING1.ogg', -- Snore Inhale
	[CHAR_SOUND_SNORING2] = 'GrunSNORING2.ogg', -- Exhale
	[CHAR_SOUND_SNORING3] = 'GrunSNORING3.ogg', -- Sleep talking / mumbling
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] = 'GrunCOUGHING.ogg', -- Cough take 1
	[CHAR_SOUND_COUGHING2] = 'GrunCOUGHING.ogg', -- Cough take 2
	[CHAR_SOUND_COUGHING3] = 'GrunCOUGHING.ogg', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] = 'GrunDYING.ogg', -- Dying from damage
	[CHAR_SOUND_DROWNING] = 'GrunDROWNING.ogg', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] = 'GrunMAMAMIA.ogg' -- Booted out of level
}

local GRUN_CAPMODELS = { -- cap code
	normal = smlua_model_util_get_id("grun_cap_geo"),
	wing = smlua_model_util_get_id("grun_cap_wing_geo"),
	metal = smlua_model_util_get_id("grun_cap_metal_geo"),
	metalWing = smlua_model_util_get_id("grun_cap_metal_wing_geo"),
}
local GRUN_PALETTE = { -- this is the default palette!
	[PANTS] = "58c000",
	[SHIRT] = "ffffff",
	[GLOVES] = "ffffff",
	[SHOES] = "090909",
	[HAIR] = "d07800",
	[SKIN] = "f8a880",
	[CAP] = "58c000",
	[EMBLEM] = "a03800"
}

if _G.charSelectExists and SM64COOPDX_VERSION then
	local curVers = _G.charSelect.version_get();
	if not tonumber(curVers) then -- if this cannot be simplified to a number, there's other strings in this
		curVers = string.gsub(curVers, "[%a%s_()!?:,@#-]+", ""); -- removing all letters, spaces, and the chars in the [set]
		
		curVers = curVers:gsub("%.", "X", 1):gsub("%.", ""):gsub("X", "."); -- removes all instances except the first decimal point
	end
	curVers = tonumber(curVers);
	
	CT_GRUN = _G.charSelect.character_add("Grun", "Grun is a Irish man with orange hair, green overalls, a pointy hat with a feather, black shoes, and a craving for alcohol.", "SyoxGames, _Corndogius_, WIZARDCORE", { r = 288, g = 192, b = 0 }, E_MODEL_GRUN, CT_MARIO, TEX_GRUN_ICON);
	
	_G.charSelect.character_add_caps(E_MODEL_GRUN, GRUN_CAPMODELS); -- cap code
	_G.charSelect.character_add_voice(E_MODEL_GRUN, GRUN_SOUNDBANK);
	if curVers >= 1.8 then
		_G.charSelect.character_add_palette_preset(E_MODEL_GRUN, GRUN_PALETTE);
	end
	
	hook_event(HOOK_CHARACTER_SOUND, function (m, sound)
		if _G.charSelect.character_get_voice(m) == GRUN_SOUNDBANK then return _G.charSelect.voice.sound(m, sound) end
	end)
	hook_event(HOOK_MARIO_UPDATE, function (m)
		if _G.charSelect.character_get_voice(m) == GRUN_SOUNDBANK then return _G.charSelect.voice.snore(m) end
	end)
else
    djui_popup_create("\\#58c000\\\n"..globalModName.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
end