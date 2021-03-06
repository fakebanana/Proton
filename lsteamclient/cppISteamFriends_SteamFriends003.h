#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends003_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends003_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends003_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends003_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends003_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends003_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends003_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends003_GetFriendPersonaName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends003_GetFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends003_GetFriendGamePlayed(void *, CSteamID, uint64 *, uint32 *, uint16 *, uint16 *);
extern const char * cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends003_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends003_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends003_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends003_GetClanName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends003_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends003_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends003_ActivateGameOverlay(void *, const char *);
#ifdef __cplusplus
}
#endif
