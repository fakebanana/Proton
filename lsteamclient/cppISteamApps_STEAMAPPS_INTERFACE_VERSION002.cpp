#include "steam_defs.h"
#include "steamworks_sdk_103/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_103.h"
bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsSubscribed();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsLowViolence();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsCybercafe();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsVACBanned();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetCurrentGameLanguage();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetAvailableGameLanguages();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsSubscribedApp((AppId_t)appID);
}

#ifdef __cplusplus
}
#endif
