#include "dll/steam_app_ids.h"

// https://developer.valvesoftware.com/wiki/Steam_Application_IDs
// https://developer.valvesoftware.com/wiki/Dedicated_Servers_List
// they're not really accurate
const std::map<uint32, std::string> steam_preowned_app_ids = {

    // { 0, "Base Goldsource Shared Binaries" },
    // { 1, "Base Goldsource Shared Content" },
    // { 2, "Base Goldsource Shared Content Localized (deprecated)" },
    // { 3, "Original Platform" },
    { 4, "Half-Life Dedicated Server Linux Deprecated" },
    { 5, "Half-Life Dedicated Server Windows Deprecated" },
    // { 6, "Base Goldsource Low Violence" },
    // { 7, "WinUI (Steam v3 user interface)" },
    // { 8, "WinUI2 (Steam community interface; deprecated)" },
    { 10, "Counter-Strike" },
    { 11, "Counter-Strike Base Content" },
    { 12, "Counter-Strike French" },
    { 13, "Counter-Strike Italian" },
    { 14, "Counter-Strike German" },
    { 15, "Counter-Strike Spanish" },
    { 16, "Counter-Strike Korean (Teen)" },
    { 17, "Counter-Strike Simplified Chinese" },
    { 18, "Counter-Strike Korean (Adult)" },
    { 19, "Counter-Strike Traditional Chinese" },
    { 20, "Team Fortress Classic" },
    { 21, "Team Fortress Classic Base Content" },
    { 22, "Team Fortress Classic French" },
    { 23, "Team Fortress Classic Italian" },
    { 24, "Team Fortress Classic German" },
    { 25, "Team Fortress Classic Spanish" },
    { 30, "Day of Defeat" },
    { 31, "Day of Defeat Base Content" },
    { 32, "Day of Defeat French" },
    { 33, "Day of Defeat Italian" },
    { 34, "Day of Defeat German" },
    { 35, "Day of Defeat Spanish" },
    { 40, "Deathmatch Classic" },
    { 41, "Deathmatch Classic Base Content" },
    { 41, "Red Orchestra: Ostfront 1" },
    { 42, "Deathmatch Classic French" },
    { 42, "Red Orchestra: Ostfront 2" },
    { 43, "Deathmatch Classic Italian" },
    { 43, "Red Orchestra: Ostfront 3" },
    { 44, "Deathmatch Classic German" },
    { 44, "Red Orchestra: Ostfront 4" },
    { 45, "Deathmatch Classic Spanish" },
    { 45, "Red Orchestra: Ostfront 5" },
    { 50, "Opposing Force" },
    { 51, "Opposing Force Base Content" },
    { 52, "Opposing Force German" },
    { 53, "Opposing Force French" },
    { 56, "Opposing Force Korean" },
    { 60, "Ricochet" },
    { 61, "Ricochet Base Content" },
    { 62, "Ricochet French" },
    { 63, "Ricochet Italian" },
    { 64, "Ricochet German" },
    { 65, "Ricochet Spanish" },
    { 70, "Half-Life" },
    { 72, "Half-Life French" },
    { 73, "Half-Life Italian" },
    { 74, "Half-Life German" },
    { 75, "Half-Life Spanish" },
    { 76, "Half-Life Korean (Teen)" },
    { 77, "Half-Life Simplified Chinese" },
    { 78, "Half-Life Korean (Adult)" },
    { 79, "Half-Life Traditional Chinese" },
    { 80, "Condition Zero" },
    { 81, "Condition Zero Base Content" },
    { 82, "Condition Zero French" },
    { 83, "Condition Zero Italian" },
    { 84, "Condition Zero German" },
    { 85, "Condition Zero Spanish" },
    { 86, "Condition Zero Korean (Teen)" },
    { 87, "Condition Zero Simplified Chinese" },
    { 88, "Condition Zero Korean (Adult)" },
    { 89, "Condition Zero Traditional Chinese" },
    { 90, "Counter-Strike 1.6 Dedicated Server" },
    { 90, "Counter-Strike Dedicated Server" },
    { 90, "Counter-Strike: Condition Zero Dedicated Server" },
    { 90, "Day of Defeat Dedicated Server" },
    { 90, "Deathmatch Classic Dedicated Server" },
    { 90, "Half-Life Dedicated Server" },
    { 90, "Half-Life: Opposing Force Dedicated Server" },
    { 90, "Half-Life: Opposing Force Server" },
    { 90, "Ricochet Dedicated Server" },
    { 90, "Team Fortress Classic Dedicated Server" },
    { 90, "Team Fortress Classic dedicated server" },
    { 92, "Codename: Gordon (not listed in store|free game)" },
    { 95, "Condition Zero Models" },
    { 96, "Half-Life High Definition Content" },
    { 100, "Condition Zero Deleted Scenes" },
    { 101, "Condition Zero Deleted Scenes Base Content" },
    { 102, "Condition Zero Deleted Scenes Models" },
    { 103, "Condition Zero Deleted Scenes Sounds" },
    { 104, "Condition Zero Deleted Scenes French" },
    { 105, "Condition Zero Deleted Scenes Italian" },
    { 106, "Condition Zero Deleted Scenes German" },
    { 107, "Condition Zero Deleted Scenes Spanish" },
    { 108, "Condition Zero Deleted Scenes Korean (Teen)" },
    { 109, "Condition Zero Deleted Scenes Simplified Chinese" },
    { 110, "Condition Zero Deleted Scenes Korean (Adult)" },
    { 111, "Condition Zero Deleted Scenes Traditional Chinese" },
    { 130, "Half-Life: Blue Shift" },
    { 131, "Half-Life: Blue Shift French" },
    { 132, "Half-Life: Blue Shift German" },
    // { 200, "Base Source Shared" },
    // { 201, "Source Engine 64bit (for x86_64/AMD64 CPU/OS, deprecated)" },
    // { 202, "Source Init (VAC)" },
    // { 203, "Source Shared Securom" },
    // { 204, "Source Dedicated Server Linux (2006)" },
    { 205, "Source Dedicated Server" },
    // { 206, "Base Source Shared Materials" },
    // { 207, "Base Source Shared Models" },
    // { 208, "Base Source Shared Sounds" },
    // { 209, "Source Low Violence" },
    { 211, "Source SDK" },
    // { 212, "Base Source Engine 2" },
    { 213, "Half-Life 2: Episode One Shared" },
    { 215, "Source SDK Base 2006 (Episode One)" },
    { 216, "Source 2007 Binaries" },
    { 217, "Multiplayer OB Binaries" },
    { 218, "Source SDK Base 2007 (Orange Box)" },
    { 219, "Half-Life 2: Demo" },
    { 220, "Half-Life 2" },
    { 221, "Half-Life 2 Base Content" },
    { 223, "Half-Life 2 French" },
    { 224, "Half-Life 2 Italian" },
    { 225, "Half-Life 2 German" },
    { 226, "Half-Life 2 Spanish" },
    { 227, "Half-Life 2 Simplified Chinese" },
    { 228, "Half-Life 2 Korean (Teen)" },
    { 229, "Half-Life 2 Korean (Adult)" },
    { 230, "Half-Life 2 Traditional Chinese" },
    { 231, "Half-Life 2 Japanese" },
    { 232, "Half-Life 2 Russian" },
    { 233, "Half-Life 2 Thai" },
    { 234, "Half-Life 2 Portuguese" },
    { 236, "Half-Life 2 Game Dialog" },
    { 240, "Counter-Strike: Source" },
    { 241, "Counter-Strike: Source Base Content" },
    { 242, "Counter-Strike: Source Shared Content" },
    { 243, "Counter-Strike: Source French" },
    { 244, "Counter-Strike: Source Italian" },
    { 245, "Counter-Strike: Source German" },
    { 246, "Counter-Strike: Source Spanish" },
    { 247, "Counter-Strike: Source Simplified Chinese" },
    { 248, "Counter-Strike: Source Korean (Teen)" },
    { 249, "Counter-Strike: Source Korean (Adult)" },
    { 250, "Counter-Strike: Source Traditional Chinese" },
    { 251, "Counter-Strike: Source Japanese" },
    { 252, "Counter-Strike: Source Russian" },
    { 253, "Counter-Strike: Source Thai" },
    { 260, "Counter-Strike: Source Beta" },
    { 280, "Half-Life: Source" },
    { 281, "Half-Life: Source Base Content" },
    { 283, "Half-Life: Source French" },
    { 284, "Half-Life: Source Italian" },
    { 285, "Half-Life: Source German" },
    { 286, "Half-Life: Source Spanish" },
    { 287, "Half-Life: Source Simplified Chinese" },
    { 288, "Half-Life: Source Korean (Teen)" },
    { 289, "Half-Life: Source Korean (Adult)" },
    { 290, "Half-Life: Source Traditional Chinese" },
    { 291, "Half-Life: Source Japanese" },
    { 292, "Half-Life: Source Russian" },
    { 293, "Half-Life: Source Thai" },
    { 300, "Day of Defeat: Source" },
    { 301, "Day of Defeat: Source Base Content" },
    { 305, "Source 2007 Shared Materials" },
    { 306, "Source 2007 Shared Models" },
    { 307, "Source 2007 Shared Sounds" },
    { 308, "Episodic 2007 Shared" },
    { 310, "Source 2007 Dedicated Server" },
    { 310, "Source SDK Base 2007 dedicated server" },
    { 312, "|all_source_engine_paths|hl2" },
    { 320, "Half-Life 2: Deathmatch" },
    { 321, "Half-Life 2: Deathmatch" },
    { 340, "Half-Life 2: Lost Coast" },
    { 341, "Half-Life 2: Lost Coast Content" },
    { 342, "Half-Life 2: Lost Coast French" },
    { 343, "Half-Life 2: Lost Coast German" },
    { 344, "Half-Life 2: Lost Coast Italian" },
    { 345, "Half-Life 2: Lost Coast Korean (Teen)" },
    { 346, "Half-Life 2: Lost Coast Korean (Adult)" },
    { 347, "Half-Life 2: Lost Coast Russian" },
    { 348, "Half-Life 2: Lost Coast Simplified Chinese" },
    { 349, "Half-Life 2: Lost Coast Spanish" },
    { 350, "Half-Life 2: Lost Coast Traditional Chinese" },
    { 360, "Half-Life Deathmatch: Source" },
    { 363, "Half-Life Deathmatch: Source Client" },
    { 380, "Half-Life 2: Episode One" },
    { 381, "Half-Life 2: Episode One Content" },
    { 400, "Portal" },
    { 401, "Portal Content" },
    { 405, "Portal English" },
    { 410, "Portal: The First Slice" },
    { 411, "Portal: The First Slice content" },
    { 420, "Half-Life 2: Episode Two" },
    { 421, "Half-Life 2: Episode Two Content" },
    { 422, "Half-Life 2: Episode Two Materials" },
    { 423, "Half-Life 2: Episode Two Maps" },
    { 428, "Half-Life 2: Episode Two English" },
    { 440, "Team Fortress 2" },
    { 441, "Team Fortress 2 Content" },
    { 442, "Team Fortress 2 Materials" },
    { 443, "Team Fortress 2 Client Content" },
    { 480, "Spacewar/SteamworksExample" },
    { 500, "Left 4 Dead" },
    { 501, "Left 4 Dead binaries" },
    { 502, "Left 4 Dead base" },
    { 503, "Left 4 Dead client binary" },
    { 504, "Left 4 Dead sound" },
    { 510, "Left 4 Dead Dedicated Server" },
    { 513, "Left 4 Dead Authoring Tools" },
    { 540, "Left 4 Dead Demo Dedicated Server" },
    { 550, "Left 4 Dead 2" },
    { 560, "Left 4 Dead 2 Dedicated Server" },
    { 561, "Left 4 Dead 2 Win32 Dedicated Server" },
    { 562, "Left 4 Dead 2 Linux Dedicated Server" },
    { 570, "Dota 2 Beta" },
    { 570, "Dota 2 Dedicated Server" },
    { 571, "Dota 2 Beta content" },
    { 572, "Dota 2 Beta client" },
    { 573, "Dota 2 Beta Win32 content" },
    { 590, "Left 4 Dead 2 Demo" },
    { 620, "Portal 2" },
    { 629, "Portal 2 Authoring Tools" },
    { 630, "Alien Swarm" },
    { 635, "Alien Swarm Dedicated Server" },
    { 640, "Alien Swarm SDK Launcher" },
    { 730, "Counter-Strike: Global Offensive" },
    { 731, "Counter Strike Global Offensive Beta Common Content" },
    { 732, "Counter Strike Global Offensive Beta Win32 Content" },
    { 740, "Counter-Strike Global Offensive Dedicated Server" },
    { 740, "Counter-Strike: Global Offensive Dedicated Server" },
    { 870, "Left 4 Dead 2 Downloadable content" },
    { 900, "Zombie movie" },
    { 901, "Day of Defeat: Prelude to Victory" },
    { 902, "Dangerous Waters Trailer" },
    { 903, "Darwinia Trailer" },
    { 904, "Half-Life 2 Trailer" },
    { 905, "Half-Life 2: Episode One Trailer" },
    { 906, "Rag Doll Kung Fu Trailer" },
    { 907, "Red Orchestra Trailer" },
    { 908, "Shadowgrounds Trailer" },
    { 909, "SiN Episode 1: Emergence Trailer" },
    { 910, "Media Player" },
    { 912, "HL2:EP1 - Launch Teaser 1" },
    { 913, "HL2:EP1 - Launch Teaser 2" },
    { 914, "HL2:EP1 - Launch Teaser 3" },
    { 915, "HL2:EP1 - Launch Teaser 4" },
    { 916, "Half-Life 2: Episode Two Trailer" },
    { 917, "DoD Jagd Trailer" },
    { 918, "DoD Colmar Trailer" },
    { 919, "Dark Messiah: Warrior" },
    { 920, "Dark Messiah: Assassin" },
    { 921, "Dark Messiah: Wizard" },
    { 922, "Portal Trailer" },
    { 923, "Team Fortress 2 trailer" },
    { 924, "Red Orchestra Infantry Tutorial" },
    { 925, "Red Orchestra Vehicle Tutorial" },
    { 926, "Red Orchestra Lyes Krovy Trailer" },
    { 927, "GTI Racing Trailer" },
    { 928, "SourceForts Trailer" },
    { 929, "Uplink Trailer" },
    { 930, "Half-Life 2: Episode Two Trailer 2" },
    { 931, "Team Fortress 2 Trailer 2" },
    { 932, "Half-Life 2: Episode Two Gameplay Movie 1" },
    { 933, "Half-Life 2: Episode Two Gameplay Movie 2" },
    { 934, "Half-Life 2: Episode Two Gameplay Movie 3" },
    { 935, "Dark Messiah Gameplay Trailer" },
    { 936, "Half-Life 2: Episode Two Gameplay Movie 4" },
    { 937, "Half-Life 2: Episode Two Gameplay Movie 5" },
    { 938, "City Life Trailer" },
    { 939, "X3: Reunion Trailer" },
    { 940, "Dark Messiah Launch Trailer" },
    { 941, "Red Orchestra Fall Update Trailer" },
    { 942, "Heroes of Annihilated Empires Trailer" },
    { 943, "Prey Trailer" },
    { 944, "Left4Dead Teaser" },
    { 945, "X3: Reunion 2.0 Trailer" },
    { 946, "Gumboy Crazy Adventures Trailer" },
    { 947, "Eets Trailer" },
    { 948, "Silverfall Trailer" },
    { 949, "Joint Task Force Trailer" },
    { 950, "Hitman: Blood Money Trailer" },
    { 951, "Just Cause Trailer" },
    { 953, "TrackMania United Trailer" },
    { 954, "Runaway, The Dream of the Turtle Trailer" },
    { 955, "Battlestations: Midway Trailer" },
    { 956, "Project: Snowblind Trailer" },
    { 957, "Tomb Raider: Legend Trailer" },
    { 958, "Infernal Trailer 2" },
    { 959, "Infernal Trailer 1" },
    { 960, "Team Fortress 2: Meet The Heavy" },
    { 961, "Red Orchestra June '07 Update Trailer" },
    { 962, "Tomb Raider: Anniversary Trailer" },
    { 963, "TrackMania United Webisode 1" },
    { 964, "TrackMania United Webisode 2" },
    { 965, "TrackMania United Webisode 3" },
    { 966, "TrackMania United Webisode 4" },
    { 967, "TrackMania United Webisode 5" },
    { 968, "Sam & Max: Episode 1 Trailer" },
    { 969, "Sam & Max: Episode 2 Trailer" },
    { 970, "Sam & Max: Episode 3 Trailer" },
    { 971, "Sam & Max: Episode 4 Trailer" },
    { 972, "Sam & Max: Episode 5 Trailer" },
    { 973, "Sam & Max: Episode 6 Trailer" },
    { 974, "Lost Planet Trailer" },
    { 975, "Kane & Lynch HD Trailer 2" },
    { 976, "Kane & Lynch HD Trailer" },
    { 979, "S.T.A.L.K.E.R. Trailer" },
    { 984, "Bioshock HD Trailer" },
    { 985, "Team Fortress 2: Meet The Soldier" },
    { 994, "Team Fortress 2: Meet The Heavy (Russian)" },
    { 995, "The Orange Box Commercial" },
    { 997, "Team Fortress 2: Meet The Demoman" },
    { 1000, "Rag Doll Kung Fu" },
    { 1003, "Rag Doll Kung Fu Demo" },
    { 1200, "Red Orchestra: Ostfront 41-45" },
    { 1203, "Red Orchestra Windows Dedicated Server" },
    { 1204, "Red Orchestra Linux Dedicated Server" },
    { 1220, "Red Orchestra SDK" },
    { 1221, "Red Orchestra SDK (1)" },
    { 1222, "Red Orchestra SDK (2)" },
    { 1273, "Killing Floor Beta Dedicated Server" },
    { 1290, "Darkest Hour Dedicated Server" },
    { 1300, "SiN Episodes" },
    { 1301, "SiN Episodes Materials" },
    { 1302, "SiN Episodes Models" },
    { 1303, "SiN Episodes Sounds" },
    { 1304, "SiN Episodes Core" },
    { 1305, "SiN Episodes: Emergence Content" },
    { 1306, "SiN Episodes: Emergence German" },
    { 1307, "SiN Episodes: Emergence German Preload" },
    { 1308, "SiN Episodes Arena" },
    { 1309, "SiN 1 Multiplayer" },
    { 1313, "SiN 1" },
    { 1314, "SiN 1 Dedicated Server" },
    { 1315, "SiN Episodes: Emergence Russian" },
    { 1316, "SiN Episodes Unabridged" },
    { 1317, "SiN Episodes SDK" },
    { 1318, "SiN Episodes SDK Content" },
    { 1500, "Darwinia" },
    { 1502, "Darwinia Demo" },
    { 1510, "Uplink" },
    { 1520, "DEFCON" },
    { 1530, "Multiwinia" },
    { 1540, "Multiwinia Demo" },
    { 1600, "Dangerous Waters" },
    { 1610, "Space Empires IV Deluxe" },
    { 1620, "Jagged Alliance 2 Gold" },
    { 1630, "Disciples II: Rise of the Elves" },
    { 1634, "Disciples II Rise of the Elves Scenario Editor" },
    { 1640, "Disciples II: Galleans Return" },
    { 1644, "Disciples II: Galleans Return Scenario Editor" },
    { 1660, "Birth of America" },
    { 1670, "Iron Warriors: T72 Tank Command" },
    { 1690, "Space Empires V" },
    { 1700, "Arx Fatalis" },
    { 1710, "Arx Fatalis Demo" },
    { 1800, "Counter-Strike: Global Offensive" },
    { 1900, "Earth 2160" },
    { 2100, "Dark Messiah of Might and Magic" },
    { 2120, "Dark Messiah Singleplayer Demo" },
    { 2130, "Dark Messiah Might and Magic Multi-Player" },
    { 2144, "Dark Messiah Might and Magic Dedicated Server Content" },
    { 2145, "Dark Messiah Might and Magic Dedicated Server" },
    { 2145, "Dark Messiah of Might & Magic Dedicated Server" },
    { 2200, "Quake III Arena" },
    { 2270, "Wolfenstein 3D" },
    { 2280, "The Ultimate Doom" },
    { 2290, "Final Doom" },
    { 2300, "Doom II" },
    { 2310, "Quake" },
    { 2320, "Quake 2 Dedicated Server" },
    { 2320, "Quake II" },
    { 2330, "Quake II Mission Pack 1: The Reckoning" },
    { 2340, "Quake II Mission Pack 2: Ground Zero" },
    { 2350, "Quake III: Team Arena" },
    { 2360, "Hexen" },
    { 2370, "Hexen: Deathkings of the Dark Citadel" },
    { 2390, "Heretic: Shadow of the Serpent Riders" },
    { 2400, "The Ship: Murder Party" },
    { 2401, "The Ship" },
    { 2402, "The Ship Common" },
    { 2403, "The Ship Dedicated Server" },
    { 2405, "The Ship Single Player Content" },
    { 2406, "The Ship Tutorial Content" },
    { 2412, "The Ship Shared" },
    { 2430, "The Ship Tutorial" },
    { 2450, "Bloody Good Time" },
    { 2460, "Hollywood Murder Party Dedicated Server Not publicly available" },
    { 2500, "Shadowgrounds" },
    { 2505, "Shadowgrounds Editor" },
    { 2510, "Shadowgrounds Demo" },
    { 2520, "Gumboy - Crazy Adventures" },
    { 2530, "Gumboy Demo" },
    { 2600, "Vampire The Masquerade - Bloodlines" },
    { 2610, "GUN" },
    { 2620, "Call of Duty" },
    { 2625, "Call of Duty Singleplayer" },
    { 2630, "Call of Duty 2 Multiplayer" },
    { 2635, "Call of Duty 2 Singleplayer" },
    { 2640, "Call of Duty: United Offensive" },
    { 2645, "Call of Duty: United Offensive Singleplayer" },
    { 2720, "ThreadSpace: Hyperbol Stress Test" },
    { 2740, "ThreadSpace: Hyperbol Dedicated Server" },
    { 2800, "X2: The Threat" },
    { 2810, "X3: Reunion" },
    { 2900, "688(I) Hunter-Killer" },
    { 2910, "Fleet Command" },
    { 2920, "Sub Command" },
    { 2930, "Birth of America" },
    { 2990, "FlatOut 2" },
    { 3000, "GTI Racing" },
    { 3010, "Xpand Rally" },
    { 3200, "Painkiller Gold Edition" },
    { 3210, "Painkiller Demo" },
    { 3300, "Bejeweled 2 Deluxe" },
    { 3302, "Bejeweled 2 Deluxe Demo" },
    { 3310, "Chuzzle Deluxe" },
    { 3312, "Chuzzle Deluxe Demo" },
    { 3320, "Insaniquarium Deluxe" },
    { 3322, "Insaniquarium Deluxe Demo" },
    { 3330, "Zuma Deluxe" },
    { 3332, "Zuma Deluxe Demo" },
    { 3340, "AstroPop Deluxe" },
    { 3342, "AstroPop Deluxe Demo" },
    { 3350, "Bejeweled Deluxe" },
    { 3352, "Bejeweled Deluxe Demo" },
    { 3360, "Big Money Deluxe" },
    { 3362, "Big Money Deluxe Demo" },
    { 3370, "Bookworm Deluxe" },
    { 3372, "Bookworm Deluxe Demo" },
    { 3380, "Dynomite Deluxe" },
    { 3382, "Dynomite Deluxe Demo" },
    { 3390, "Feeding Frenzy 2 Deluxe" },
    { 3392, "Feeding Frenzy 2 Deluxe Demo" },
    { 3400, "Hammer Heads Deluxe" },
    { 3402, "Hammer Heads Deluxe Demo" },
    { 3410, "Heavy Weapon Deluxe" },
    { 3412, "Heavy Weapon Deluxe Demo" },
    { 3420, "Iggle Pop Deluxe" },
    { 3422, "Iggle Pop Deluxe Demo" },
    { 3430, "Pizza Frenzy Deluxe" },
    { 3432, "Pizza Frenzy Deluxe Demo" },
    { 3440, "Rocket Mania Deluxe" },
    { 3442, "Rocket Mania Deluxe Demo" },
    { 3450, "Typer Shark Deluxe" },
    { 3452, "Typer Shark Deluxe Demo" },
    { 3460, "Talismania Deluxe" },
    { 3462, "Talismania Deluxe Demo" },
    { 3470, "Bookworm Adventures Deluxe" },
    { 3472, "Bookworm Adventures Deluxe Demo" },
    { 3590, "Plants vs. Zombies" },
    { 3700, "Sniper Elite" },
    { 3800, "Advent Rising" },
    { 3810, "BloodRayne" },
    { 3820, "BloodRayne 2" },
    { 3830, "Psychonauts" },
    { 3840, "Psychonauts Demo" },
    { 3900, "Sid Meier's Civilization IV" },
    { 3910, "Sid Meier's Civilization III Complete" },
    { 3920, "Sid Meier's Pirates!" },
    { 3930, "Serious Sam 2" },
    { 3960, "Shattered Union" },
    { 3970, "Prey" },
    { 4000, "Garry's Mod" },
    { 4001, "Garry's Mod Content" },
    { 4020, "Garry's Mod Dedicated Server" },
    { 4100, "Poker Superstars II" },
    { 4102, "Poker Superstars II Demo" },
    { 4230, "RACE" },
    { 4240, "Race Dedicated Server" },
    { 4270, "RACE 07 Demo Dedicated Server" },
    { 4300, "RoboBlitz" },
    { 4400, "City Life" },
    { 4410, "City Life Deluxe" },
    { 4500, "S.T.A.L.K.E.R.: Shadow of Chernobyl" },
    { 4600, "Full Pipe" },
    { 4610, "Full Pipe Demo" },
    { 4700, "Medieval II: Total War" },
    { 4710, "Medieval II: Total War Demo" },
    { 4730, "Outrun 2006: Coast 2 Coast" },
    { 4800, "Heroes of Annihilated Empires" },
    { 4900, "Zen of Sudoku" },
    { 4910, "Zen of Sudoku Demo" },
    { 4920, "Natural Selection 2" },
    { 4940, "Natural Selection 2 Dedicated Server" },
    { 5015, "Team Fortress 2: Meet The Heavy (German)" },
    { 5016, "Team Fortress 2: Meet The Heavy (French)" },
    { 5032, "Team Fortress 2: Meet The Scout" },
    { 5035, "Team Fortress 2: Meet The Scout (Russian)" },
    { 5036, "Team Fortress 2: Meet The Scout (Spanish)" },
    { 5049, "Penny Arcade Adventures: On the Rain-Slick Precipice of Darkness, Episode One Trailer" },
    { 5052, "Far Cry® 2 HD Trailer" },
    { 5053, "Watch Crazy Machines 2 Trailer" },
    { 5073, "Team Fortress 2: Meet The Sandvich" },
    { 5138, "Left 4 Dead TV Spot 1 (1080p)" },
    { 5139, "Left 4 Dead TV Spot 1 (720p)" },
    { 5141, "Left 4 Dead Intro (english)" },
    { 6020, "Star Wars Jedi Knight: Jedi Academy" },
    { 6100, "Eets" },
    { 6110, "Eets Demo" },
    { 6200, "Ghost Master" },
    { 6210, "Vegas Make It Big" },
    { 6300, "Dreamfall: The Longest Journey" },
    { 6310, "The Longest Journey" },
    { 6320, "The Longest Journey Demo" },
    { 6400, "Joint Task Force" },
    { 6410, "Joint Task Force Demo" },
    { 6510, "Lost Planet Extreme Condition" },
    { 6530, "Lost Planet Extreme Condition Demo" },
    { 6540, "Lost Planet Extreme Condition DX10 Demo" },
    { 6570, "Onimusha 3: Demon Siege" },
    { 6600, "Bullet Candy" },
    { 6610, "Bullet Candy Demo" },
    { 6860, "Hitman Blood Money" },
    { 6880, "Just Cause" },
    { 6930, "Just Cause Demo" },
    { 6940, "Battlestations Midway Demo" },
    { 7060, "Infernal" },
    { 7080, "Infernal Demo" },
    { 7110, "Jade Empire: Special Edition" },
    { 7420, "Wik and the Fable of Souls" },
    { 7600, "Sid Meier's Railroads" },
    { 7670, "Bioshock" },
    { 7710, "Bioshock Demo" },
    { 7940, "Call of Duty 4: Modern Warfare Singleplayer" },
    { 8340, "Strong Bad Episode 1: Homestar Ruiner" },
    { 8350, "Strong Bad Episode 2: Strong Badia the Free" },
    { 8360, "Strong Bad Episode 3: Baddest of the Bands" },
    { 8370, "Strong Bad Episode 4: Dangeresque 3" },
    { 8380, "Strong Bad Episode 5: 8-Bit Is Enough" },
    { 8400, "Geometry Wars" },
    { 8610, "RACE 07 Dedicated Server" },
    { 8670, "Play Andy Priaulx Crowne Plaza Raceway(free addon)" },
    { 8680, "RACE 07 Demo - Crowne Plaza Edition Dedicated Server" },
    { 8710, "STCC - The Game Demo Dedicated Server" },
    { 8730, "GTR Evolution Demo Dedicated Server" },
    { 8770, "RACE On - Demo: Dedicated Server" },
    { 8930, "Sid Meier's Civilization V" },
    { 9000, "Spear of Destiny" },
    { 9010, "Return to Castle Wolfenstein" },
    { 9030, "Quake Mission Pack 2: Dissolution of Eternity" },
    { 9040, "Quake Mission Pack 1: Scourge of Armagon" },
    { 9050, "Doom 3" },
    { 9060, "Hexen II" },
    { 9070, "Doom 3: Resurrection of Evil" },
    { 9080, "Quake III Arena Demo" },
    { 9090, "Quake III: Team Arena Demo" },
    { 9100, "Doom 3 Demo" },
    { 9120, "Hexen II Demo" },
    { 9130, "Quake II Demo" },
    { 9180, "Commander Keen" },
    { 9480, "Saints Row 2" },
    { 9880, "Champions Online: Free For All" },
    { 9985, "The UnderGarden Demo" },
    { 10010, "Enemy Territory: QUAKE Wars Demo" },
    { 10150, "Prototype" },
    { 11020, "TrackMania Nations Forever" },
    { 11250, "Pacific Storm" },
    { 12120, "Grand Theft Auto: San Andreas" },
    { 12900, "Audiosurf" },
    { 13140, "America's Army 3" },
    { 13160, "America's Army 3 Dedicated Server Beta" },
    { 13180, "America's Army 3 Dedicated Server" },
    { 13210, "Unreal Tournament 3" },
    { 13520, "Farcry" },
    { 15100, "Assassin's Creed" },
    { 15680, "Warhammer 40,000: Dawn of War II - Single Player Demo" },
    { 16450, "F.E.A.R. 2: Project Origin" },
    { 16465, "F.E.A.R. 2: Reborn (DLC)" },
    { 17020, "Global Agenda: Free Agent" },
    { 17390, "Spore" },
    { 17450, "Dragon Age: Origins (Standard Edition)" },
    { 17460, "Mass Effect" },
    { 17500, "Zombie Panic! Source" },
    { 17505, "Zombie Panic Source Dedicated Server" },
    { 17505, "Zombie Panic! Source Dedicated Server" },
    { 17510, "Age of Chivalry" },
    { 17515, "Age of Chivalry Dedicated Server" },
    { 17520, "Synergy" },
    { 17525, "Synergy Dedicated Server" },
    { 17530, "D.I.P.R.I.P." },
    { 17535, "D.I.P.R.I.P. Dedicated Server" },
    { 17550, "Eternal Silence" },
    { 17555, "Eternal Silence Dedicated Server" },
    { 17570, "Pirates, Vikings, & Knights II" },
    { 17575, "Pirates, Vikings, and Knights II Dedicated Server" },
    { 17580, "Dystopia" },
    { 17585, "Dystopia Dedicated Server" },
    { 17600, "Out of the Park Baseball 9" },
    { 17700, "Insurgency" },
    { 17705, "Insurgency Dedicated Server" },
    { 17705, "Insurgency: Modern Infantry Combat Dedicated Server" },
    { 17710, "Nuclear Dawn" },
    { 17730, "Smashball" },
    { 18000, "Penny Arcade Adventures: On the Rain-Slick Precipice of Darkness, Episode One" },
    { 18400, "Crazy Machines 2" },
    { 19000, "Silent Hill Homecoming" },
    { 21090, "F.E.A.R. Pack (F.E.A.R., F.E.A.R. Extraction Point, F.E.A.R. Perseus Mandate)" },
    { 21310, "Gravitron 2 Demo" },
    { 22600, "Worms: Reloaded" },
    { 23200, "I-Fluid" },
    { 24920, "Dragon Age: Origins - Character Creator" },
    { 24980, "Mass Effect 2 (Standard Edition)" },
    { 25700, "Madballs in Babo:Invasion" },
    { 25890, "Hearts of Iron III" },
    { 26800, "Braid" },
    { 29160, "Blueberry Garden" },
    { 29170, "Blueberry Garden Demo" },
    { 32162, "Zombie Bowl-O-Rama Demo" },
    { 33230, "Assassin's Creed II" },
    { 33905, "ARMA 2 Dedicated Server" },
    { 33935, "Arma 2: Operation Arrowhead Dedicated Server" },
    { 34120, "Aliens vs Predator Dedicated Server" },
    { 34830, "Sniper Ghost Warrior" },
    { 35900, "Nullbreaker" },
    { 36620, "Forsaken World" },
    { 39170, "Deus Ex: Human Revolution" },
    { 40800, "Super Meat Boy" },
    { 41005, "Serious Sam Classics: Revolution Dedicated Server" },
    { 41005, "Serious Sam HD Dedicated Server" },
    { 41015, "Serious Sam HD: The Second Encounter Dedicated Server" },
    { 41080, "Serious Sam 3 Dedicated Server" },
    { 41500, "Torchlight" },
    { 42640, "Blur" },
    { 42750, "Call of Duty: Modern Warfare 3 Dedicated Server|" },
    { 43210, "The Haunted: Hells Reach Dedicated Server" },
    { 47730, "Dragon Age: Origins - Awakening" },
    { 47810, "Dragon Age: Origins (Ultimate Edition)" },
    { 47900, "Dragon Age 2" },
    { 48190, "Assassin's Creed Brotherhood" },
    { 49520, "Borderlands 2" },
    { 50650, "Darksiders II" },
    { 55110, "Red Faction: Armageddon" },
    { 55280, "Homefront Dedicated Server" },
    { 57900, "Duke Nukem Forever" },
    { 63000, "HOARD" },
    { 63220, "Monday Night Combat Dedicated Server" },
    { 65900, "Sid Meier's Civilization V: Demo" },
    { 70010, "Dino D-Day Dedicated Server" },
    { 72310, "Breach Dedicated Server" },
    { 72780, "Brink Dedicated Server" },
    { 91720, "E.Y.E - Dedicated Server" },
    { 93200, "Revenge of the Titans" },
    { 96810, "Nexuiz Dedicated Server" },
    { 99300, "Renegade Ops" },
    { 99900, "Spiral Knights" },
    { 102500, "Kingdoms of Amalur: Reckoning" },
    { 102700, "Alliance of Valiant Arms" },
    { 105400, "Fable III" },
    { 105411, "Fable III: Traitor's Keep (DLC)" },
    { 105412, "Fable III: Dog Breed Set (DLC)" },
    { 105413, "Fable III: Industrial Knight Outfit (DLC)" },
    { 105414, "Fable III: Dog Outfit (DLC)" },
    { 105415, "Fable III: Understone (DLC)" },
    { 105450, "Age of Empires III: Complete Collection" },
    { 105600, "Terraria" },
    { 105600, "Terraria Dedicated Server" },
    { 107100, "Bastion" },
    { 108600, "Project Zomboid Dedicated Server" },
    { 111710, "Nuclear Dawn Dedicated Server" },
    { 115320, "Prototype 2" },
    { 201890, "Nuclear Dawn Authoring Tools" },
    { 203140, "Hitman: Absolution" },
    { 203300, "America's Army: Proving Grounds Dedicated Server" },
    { 207750, "Symphony" },
    { 208050, "Sniper Elite V2 Dedicated Server" },
    { 208140, "Endless Space" },
    { 208480, "Assassin's Creed III" },
    { 210370, "Starvoid Dedicated Server" },
    { 211820, "Starbound Dedicated server" },
    { 212542, "Red Orchestra 2 Dedicated Server" },
    { 215350, "Killing Floor Dedicated Server Windows" },
    { 215360, "Killing Floor Dedicated Server - Linux" },
    { 220070, "Chivalry Medieval Warfare Dedicated Server" },
    { 220070, "Chivalry: Medieval Warfare Dedicated Server" },
    { 220240, "Far Cry 3" },
    { 220700, "RPG Maker VX Ace" },
    { 222840, "Left 4 Dead Dedicated Server" },
    { 222860, "Left 4 Dead 2 Dedicated Server" },
    { 222880, "Insurgency" },
    { 223160, "Ravaged Dedicated Server" },
    { 223240, "Red Orchestra Windows Dedicated Server" },
    { 223250, "Red Orchestra Linux Dedicated Server" },
    { 223350, "Dayz Dedicated Server" },
    { 224260, "No More Room in Hell" },
    { 224620, "Primal Carnage Dedicated Server" },
    { 228780, "Blade Symphony Dedicated Server" },
    { 229830, "Team Fortress 2 Beta Dedicated Server This app is currently disabled" },
    { 230030, "Painkiller Hell & Damnation Dedicated Server" },
    { 232130, "Killing Floor 2 Dedicated Server" },
    { 232130, "Killing Floor 2 Dedicated Server Windows" },
    { 232250, "Team Fortress 2 Dedicated Server" },
    { 232290, "Day of Defeat: Source Dedicated Server" },
    { 232330, "Counter-Strike: Source Dedicated Server" },
    { 232370, "Half-Life 2: Deathmatch Dedicated Server" },
    { 233780, "Arma 3 Dedicated Server" },
    { 237410, "Insurgency 2014 Dedicated Server" },
    { 237410, "Insurgency Dedicated Server" },
    { 238430, "Contagion" },
    { 238430, "Contagion Dedicated Server" },
    { 243730, "Source SDK Base 2013 - Singleplayer" },
    { 243750, "Source SDK Base 2013 - Multiplayer" },
    { 244310, "Source SDK 2013 Multiplayer Base Dedicated Server" },
    { 244310, "Source SDK Base 2013 Dedicated Server" },
    { 255470, "Half-Life Deathmatch: Source Dedicated server" },
    { 258550, "Rust Dedicated Server" },
    { 258680, "Chivalry: Deadliest Warrior Dedicated server" },
    { 261020, "Takedown: Red Sabre Dedicated Server" },
    { 261140, "Just Cause 2: Multiplayer - Dedicated Server" },
    { 261140, "Just Cause 2: Multiplayer Dedicated Server" },
    { 265360, "Kingdoms Rise Dedicated Server" },
    { 266910, "Sniper Elite 3 Dedicated Server" },
    { 276060, "Sven Co-op Dedicated Server" },
    { 294420, "7 Days to Die Dedicated Server" },
    { 295230, "Fistful of Frags Server" },
    { 298740, "Space Engineers Dedicated Server" },
    { 302550, "Assetto Corsa Dedicated Server" },
    { 312070, "Dark Horizons: Mechanized Corps Dedicated Server" },
    { 313600, "NEOTOKYO Dedicated Server" },
    { 313900, "NS2: Combat Dedicated Server" },
    { 317670, "No More Room In Hell Dedicated Server" },
    { 317670, "No More Room in Hell Dedicated Server" },
    { 317800, "Double Action Dedicated Server" },
    { 319060, "Lambda Wars Dedicated Server" },
    { 320850, "Life is Feudal: Your Own Dedicated Server" },
    { 329710, "Fortress Forever Dedicated Server" },
    { 329740, "Reflex Dedicated Server" },
    { 332850, "BlazeRush Dedicated Server" },
    { 343050, "Don't Starve Together Dedicated Server" },
    { 346680, "Black Mesa: Deathmatch Dedicated Server" },
    { 349090, "Quake Live Dedicated Server" },
    { 374980, "Zombie Grinder Dedicated Server" },
    { 376030, "ARK: Survival Evolved Dedicated Server" },
    { 381690, "Reign Of Kings Dedicated Server" },
    { 403240, "Squad Dedicated Server" },
    { 405100, "Hurtworld dedicated server" },
    { 406800, "Out of Reach Dedicated Server" },
    { 419790, "Eden Star Dedicated Server" },
    { 439660, "Tower Unite Dedicated Server" },
    { 439660, "Tower Unite Dedicated server" },
    { 443030, "Conan Exiles Dedicated Server" },
    { 445400, "ARK: Survival of the Fittest Dedicated Server" },
    { 460040, "Empires Dedicated Server" },
    { 462310, "Day of Infamy Dedicated Server" },
    { 475370, "BrainBread 2 Dedicated Server" },
    { 556450, "The Forest Dedicated Server" },
    { 581330, "Insurgency: Sandstorm Dedicated Server" },
    { 582400, "Alien Swarm: Reactive Drop Dedicated Server" },
    { 667230, "Capsa Dedicated Server" },
    { 728470, "ASTRONEER Dedicated Server" },
    { 901242, "Mass Effect 2 (Digital Deluxe Edition)" },
    { 1026340, "Barotrauma Dedicated Server" },
    { 1110390, "Unturned Dedicated Server" },
    { 1301040, "Mod and Play Dedicated Server" },
    { 1690800, "Satisfactory Dedicated Server" },
    { 2181210, "JBMod Dedicated Server" },
    { 2394010, "Palworld Dedicated Server" },
    { 2465200, "Sons Of The Forest Dedicated Server" },

};
