#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser005_GetHSteamUser(void *);
extern void cppISteamUser_SteamUser005_LogOn(void *, CSteamID);
extern void cppISteamUser_SteamUser005_LogOff(void *);
extern bool cppISteamUser_SteamUser005_BLoggedOn(void *);
extern ELogonState cppISteamUser_SteamUser005_GetLogonState(void *);
extern bool cppISteamUser_SteamUser005_BConnected(void *);
extern CSteamID cppISteamUser_SteamUser005_GetSteamID(void *);
extern bool cppISteamUser_SteamUser005_IsVACBanned(void *, int);
extern bool cppISteamUser_SteamUser005_RequireShowVACBannedMessage(void *, int);
extern void cppISteamUser_SteamUser005_AcknowledgeVACBanning(void *, int);
extern void cppISteamUser_SteamUser005_SetSteam2Ticket(void *, uint8 *, int);
extern void cppISteamUser_SteamUser005_AddServerNetAddress(void *, uint32, uint16);
extern bool cppISteamUser_SteamUser005_SetEmail(void *, const char *);
extern bool cppISteamUser_SteamUser005_SetRegistryString(void *, EConfigSubTree, const char *, const char *);
extern bool cppISteamUser_SteamUser005_GetRegistryString(void *, EConfigSubTree, const char *, char *, int);
extern bool cppISteamUser_SteamUser005_SetRegistryInt(void *, EConfigSubTree, const char *, int);
extern bool cppISteamUser_SteamUser005_GetRegistryInt(void *, EConfigSubTree, const char *, int *);
extern int cppISteamUser_SteamUser005_InitiateGameConnection(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser005_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(void *);
extern bool cppISteamUser_SteamUser005_IsPrimaryChatDestination(void *);
extern void cppISteamUser_SteamUser005_RequestLegacyCDKey(void *, uint32);
extern bool cppISteamUser_SteamUser005_SendGuestPassByEmail(void *, const char *, GID_t, bool);
extern bool cppISteamUser_SteamUser005_SendGuestPassByAccountID(void *, uint32, GID_t, bool);
extern bool cppISteamUser_SteamUser005_AckGuestPass(void *, const char *);
extern bool cppISteamUser_SteamUser005_RedeemGuestPass(void *, const char *);
extern uint32 cppISteamUser_SteamUser005_GetGuestPassToGiveCount(void *);
extern uint32 cppISteamUser_SteamUser005_GetGuestPassToRedeemCount(void *);
extern RTime32 cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime(void *);
extern bool cppISteamUser_SteamUser005_GetGuestPassToGiveInfo(void *, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *, char *, int);
extern bool cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo(void *, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *);
extern bool cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(void *, uint32, char *, int);
extern bool cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(void *, uint32, char *, int);
extern void cppISteamUser_SteamUser005_AcknowledgeMessageByGID(void *, const char *);
extern bool cppISteamUser_SteamUser005_SetLanguage(void *, const char *);
extern void cppISteamUser_SteamUser005_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern void cppISteamUser_SteamUser005_SetAccountName(void *, const char *);
extern void cppISteamUser_SteamUser005_SetPassword(void *, const char *);
extern void cppISteamUser_SteamUser005_SetAccountCreationTime(void *, RTime32);
#ifdef __cplusplus
}
#endif
