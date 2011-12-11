/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/*
 * This file contains the automatically generated loader-side
 * functions that form part of the extension.
 *
 * This file is awlays compiled into all loaders but compiles
 * to nothing if this extension is not enabled in the loader
 * at build time.
 */
#include "IwDebug.h"
#include "s3eNOpenFeint_autodefs.h"
#include "s3eEdk.h"
#include "s3eNOpenFeint.h"
//Declarations of Init and Term functions
extern s3eResult s3eNOpenFeintInit();
extern void s3eNOpenFeintTerminate();


const char* s3eNOpenFeintGetErrorString()
{
#ifdef S3E_STORE_ERROR_STRINGS
    return s3eEdkErrorGetString(S3E_EXT_NOPENFEINT_HASH);
#else
    return NULL;
#endif
}

s3eNOpenFeintError s3eNOpenFeintGetError()
{
    return (s3eNOpenFeintError) s3eEdkErrorGet(S3E_EXT_NOPENFEINT_HASH);
}

#if defined I3D_OS_IPHONE || defined I3D_OS_OSX

static s3eResult s3eNewMessageBox_wrap(const char* title, const char* text)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNewMessageBox"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNewMessageBox, 2, title, text);
}

static s3eResult s3eNOFinitializeWithProductKey_wrap(const char* productKey, const char* secret, const char* displayName, const s3eNOFArray* settings)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFinitializeWithProductKey"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFinitializeWithProductKey, 4, productKey, secret, displayName, settings);
}

static s3eResult s3eNOFlaunchDashboardWithHighscorePage_wrap(const char* leaderboardId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithHighscorePage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithHighscorePage, 1, leaderboardId);
}

static s3eResult s3eNOFlaunchDashboardWithAchievementsPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithAchievementsPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithAchievementsPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithChallengesPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithChallengesPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithChallengesPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithFindFriendsPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithFindFriendsPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithFindFriendsPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithWhosPlayingPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithWhosPlayingPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithWhosPlayingPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithListGlobalChatRoomsPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithListGlobalChatRoomsPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithListGlobalChatRoomsPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithiPurchasePage_wrap(const char* clientApplicationId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithiPurchasePage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithiPurchasePage, 1, clientApplicationId);
}

static s3eResult s3eNOFlaunchDashboardWithSwitchUserPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithSwitchUserPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithSwitchUserPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithForumsPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithForumsPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithForumsPage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithInvitePage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithInvitePage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithInvitePage, 0);
}

static s3eResult s3eNOFlaunchDashboardWithSpecificInvite_wrap(const char* inviteIdentifier)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithSpecificInvite"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithSpecificInvite, 1, inviteIdentifier);
}

static s3eResult s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText_wrap(const char* prepopulatedText, const char * originialMessage, const char* imageName, const char* linkedUrl)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText, 4, prepopulatedText, originialMessage, imageName, linkedUrl);
}

static s3eResult s3eNOFshutdown_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFshutdown"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFshutdown, 0);
}

static s3eResult s3eNOFlaunchDashboard_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboard"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboard, 0);
}

static s3eResult s3eNOFdismissDashboard_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFdismissDashboard"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFdismissDashboard, 0);
}

static s3eResult s3eNOFsetDashboardOrientation_wrap(s3eNOFUIInterfaceOrientation orientation)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFsetDashboardOrientation"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFsetDashboardOrientation, 1, orientation);
}

static ushort s3eNOFhasUserApprovedFeint_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFhasUserApprovedFeint"));
    return (ushort)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFhasUserApprovedFeint, 0);
}

static ushort s3eNOFisOnline_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFisOnline"));
    return (ushort)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFisOnline, 0);
}

static s3eResult s3eNOFdisplayAndSendChallenge_wrap(s3eNOFChallengeDefinition* challengeDefinition, const char* challengeDescription, const s3eNOFChallengeData* challengeData)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFdisplayAndSendChallenge"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFdisplayAndSendChallenge, 3, challengeDefinition, challengeDescription, challengeData);
}

static s3eResult s3eNOFdownloadAllChallengeDefinitions_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFdownloadAllChallengeDefinitions"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFdownloadAllChallengeDefinitions, 0);
}

static s3eResult s3eNOFdownloadChallengeDefinitionWithId_wrap(const char* challengeDefinitionId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFdownloadChallengeDefinitionWithId"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFdownloadChallengeDefinitionWithId, 1, challengeDefinitionId);
}

static s3eResult s3eNOFchallengeCompleteWithResult_wrap(s3eNOFChallengeResult challengeResult, const char* challengePeristentId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFchallengeCompleteWithResult"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFchallengeCompleteWithResult, 2, challengeResult, challengePeristentId);
}

static s3eResult s3eNOFchallengeDisplayCompletionWithData_wrap(s3eNOFChallengeData* challengeData, const char* reChallengeDescription, const char* challengePeristentId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFchallengeDisplayCompletionWithData"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFchallengeDisplayCompletionWithData, 3, challengeData, reChallengeDescription, challengePeristentId);
}

static s3eResult s3eNOFsubmitHighScore_wrap(const char* leaderBoadId, const char* score, const char* displayText, const char* customData)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFsubmitHighScore"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFsubmitHighScore, 4, leaderBoadId, score, displayText, customData);
}

static s3eResult s3eNOFupdateAcheivementProgressionComplete_wrap(const char* achievementId, const char* updatePercentComplete, bool showUpdateNotification)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFupdateAcheivementProgressionComplete"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFupdateAcheivementProgressionComplete, 3, achievementId, updatePercentComplete, showUpdateNotification);
}

static s3eResult s3eNOFachievements_wrap(s3eNOFArray* achArray)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFachievements"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFachievements, 1, achArray);
}

static s3eResult s3eNOFachievement_wrap(s3eNOFAchievement* achievement, const char* achievementId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFachievement"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFachievement, 2, achievement, achievementId);
}

static s3eResult s3eNOFachievementUnlock_wrap(const char* achievementId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFachievementUnlock"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFachievementUnlock, 1, achievementId);
}

static s3eResult s3eNOFachievementUnlockAndDefer_wrap(const char* achievementId)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFachievementUnlockAndDefer"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFachievementUnlockAndDefer, 1, achievementId);
}

static s3eResult s3eNOFsubmitDeferredAchievements_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFsubmitDeferredAchievements"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFsubmitDeferredAchievements, 0);
}

static s3eResult s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke_wrap(const char* deviceToken)
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke, 1, deviceToken);
}

static s3eResult s3eNOFlaunchDashboardWithListLeaderboardsPage_wrap()
{
    IwTrace(NOPENFEINT_VERBOSE, ("calling s3eNOpenFeint func on main thread: s3eNOFlaunchDashboardWithListLeaderboardsPage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)s3eNOFlaunchDashboardWithListLeaderboardsPage, 0);
}

#define s3eNewMessageBox s3eNewMessageBox_wrap
#define s3eNOFinitializeWithProductKey s3eNOFinitializeWithProductKey_wrap
#define s3eNOFlaunchDashboardWithHighscorePage s3eNOFlaunchDashboardWithHighscorePage_wrap
#define s3eNOFlaunchDashboardWithAchievementsPage s3eNOFlaunchDashboardWithAchievementsPage_wrap
#define s3eNOFlaunchDashboardWithChallengesPage s3eNOFlaunchDashboardWithChallengesPage_wrap
#define s3eNOFlaunchDashboardWithFindFriendsPage s3eNOFlaunchDashboardWithFindFriendsPage_wrap
#define s3eNOFlaunchDashboardWithWhosPlayingPage s3eNOFlaunchDashboardWithWhosPlayingPage_wrap
#define s3eNOFlaunchDashboardWithListGlobalChatRoomsPage s3eNOFlaunchDashboardWithListGlobalChatRoomsPage_wrap
#define s3eNOFlaunchDashboardWithiPurchasePage s3eNOFlaunchDashboardWithiPurchasePage_wrap
#define s3eNOFlaunchDashboardWithSwitchUserPage s3eNOFlaunchDashboardWithSwitchUserPage_wrap
#define s3eNOFlaunchDashboardWithForumsPage s3eNOFlaunchDashboardWithForumsPage_wrap
#define s3eNOFlaunchDashboardWithInvitePage s3eNOFlaunchDashboardWithInvitePage_wrap
#define s3eNOFlaunchDashboardWithSpecificInvite s3eNOFlaunchDashboardWithSpecificInvite_wrap
#define s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText_wrap
#define s3eNOFshutdown s3eNOFshutdown_wrap
#define s3eNOFlaunchDashboard s3eNOFlaunchDashboard_wrap
#define s3eNOFdismissDashboard s3eNOFdismissDashboard_wrap
#define s3eNOFsetDashboardOrientation s3eNOFsetDashboardOrientation_wrap
#define s3eNOFhasUserApprovedFeint s3eNOFhasUserApprovedFeint_wrap
#define s3eNOFisOnline s3eNOFisOnline_wrap
#define s3eNOFdisplayAndSendChallenge s3eNOFdisplayAndSendChallenge_wrap
#define s3eNOFdownloadAllChallengeDefinitions s3eNOFdownloadAllChallengeDefinitions_wrap
#define s3eNOFdownloadChallengeDefinitionWithId s3eNOFdownloadChallengeDefinitionWithId_wrap
#define s3eNOFchallengeCompleteWithResult s3eNOFchallengeCompleteWithResult_wrap
#define s3eNOFchallengeDisplayCompletionWithData s3eNOFchallengeDisplayCompletionWithData_wrap
#define s3eNOFsubmitHighScore s3eNOFsubmitHighScore_wrap
#define s3eNOFupdateAcheivementProgressionComplete s3eNOFupdateAcheivementProgressionComplete_wrap
#define s3eNOFachievements s3eNOFachievements_wrap
#define s3eNOFachievement s3eNOFachievement_wrap
#define s3eNOFachievementUnlock s3eNOFachievementUnlock_wrap
#define s3eNOFachievementUnlockAndDefer s3eNOFachievementUnlockAndDefer_wrap
#define s3eNOFsubmitDeferredAchievements s3eNOFsubmitDeferredAchievements_wrap
#define s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke_wrap
#define s3eNOFlaunchDashboardWithListLeaderboardsPage s3eNOFlaunchDashboardWithListLeaderboardsPage_wrap

#endif /* I3D_OS_IPHONE */

s3eResult s3eNOpenFeintRegister(s3eNOpenFeintCallback cbid, s3eCallback fn, void* pData)
{
    return s3eEdkCallbacksRegister(S3E_EXT_NOPENFEINT_HASH, S3E_NOPENFEINT_CALLBACK_MAX, cbid, fn, pData, 0);
};

s3eResult s3eNOpenFeintUnRegister(s3eNOpenFeintCallback cbid, s3eCallback fn)
{
    return s3eEdkCallbacksUnRegister(S3E_EXT_NOPENFEINT_HASH, S3E_NOPENFEINT_CALLBACK_MAX, cbid, fn);
}

void s3eNOpenFeintRegisterExt()
{
    /* fill in the function pointer struct for this extension */
    void* funcPtrs[38];
    funcPtrs[0] = (void*)s3eNOpenFeintRegister;
    funcPtrs[1] = (void*)s3eNOpenFeintUnRegister;
    funcPtrs[2] = (void*)s3eNOpenFeintGetErrorString;
    funcPtrs[3] = (void*)s3eNOpenFeintGetError;
    funcPtrs[4] = (void*)s3eNewMessageBox;
    funcPtrs[5] = (void*)s3eNOFinitializeWithProductKey;
    funcPtrs[6] = (void*)s3eNOFlaunchDashboardWithHighscorePage;
    funcPtrs[7] = (void*)s3eNOFlaunchDashboardWithAchievementsPage;
    funcPtrs[8] = (void*)s3eNOFlaunchDashboardWithChallengesPage;
    funcPtrs[9] = (void*)s3eNOFlaunchDashboardWithFindFriendsPage;
    funcPtrs[10] = (void*)s3eNOFlaunchDashboardWithWhosPlayingPage;
    funcPtrs[11] = (void*)s3eNOFlaunchDashboardWithListGlobalChatRoomsPage;
    funcPtrs[12] = (void*)s3eNOFlaunchDashboardWithiPurchasePage;
    funcPtrs[13] = (void*)s3eNOFlaunchDashboardWithSwitchUserPage;
    funcPtrs[14] = (void*)s3eNOFlaunchDashboardWithForumsPage;
    funcPtrs[15] = (void*)s3eNOFlaunchDashboardWithInvitePage;
    funcPtrs[16] = (void*)s3eNOFlaunchDashboardWithSpecificInvite;
    funcPtrs[17] = (void*)s3eNOFlaunchDashboardWithSocialNotificationWithPrepopulatedText;
    funcPtrs[18] = (void*)s3eNOFshutdown;
    funcPtrs[19] = (void*)s3eNOFlaunchDashboard;
    funcPtrs[20] = (void*)s3eNOFdismissDashboard;
    funcPtrs[21] = (void*)s3eNOFsetDashboardOrientation;
    funcPtrs[22] = (void*)s3eNOFhasUserApprovedFeint;
    funcPtrs[23] = (void*)s3eNOFisOnline;
    funcPtrs[24] = (void*)s3eNOFdisplayAndSendChallenge;
    funcPtrs[25] = (void*)s3eNOFdownloadAllChallengeDefinitions;
    funcPtrs[26] = (void*)s3eNOFdownloadChallengeDefinitionWithId;
    funcPtrs[27] = (void*)s3eNOFchallengeCompleteWithResult;
    funcPtrs[28] = (void*)s3eNOFchallengeDisplayCompletionWithData;
    funcPtrs[29] = (void*)s3eNOFsubmitHighScore;
    funcPtrs[30] = (void*)s3eNOFupdateAcheivementProgressionComplete;
    funcPtrs[31] = (void*)s3eNOFachievements;
    funcPtrs[32] = (void*)s3eNOFachievement;
    funcPtrs[33] = (void*)s3eNOFachievementUnlock;
    funcPtrs[34] = (void*)s3eNOFachievementUnlockAndDefer;
    funcPtrs[35] = (void*)s3eNOFsubmitDeferredAchievements;
    funcPtrs[36] = (void*)s3eNOFapplicationDidRegisterForRemoteNotificationsWithDeviceToke;
    funcPtrs[37] = (void*)s3eNOFlaunchDashboardWithListLeaderboardsPage;

    /*
     * Flags that specify the extension's use of locking and stackswitching
     */
    int flags[38] = { 0 };

    /*
     * Register the extension
     */
    s3eEdkRegister("s3eNOpenFeint", funcPtrs, sizeof(funcPtrs), flags, s3eNOpenFeintInit, s3eNOpenFeintTerminate, 0);
}

#if !defined S3E_BUILD_S3ELOADER

#if defined S3E_EDK_USE_STATIC_INIT_ARRAY
int s3eNOpenFeintStaticInit()
{
    void** p = g_StaticInitArray;
    void* end = p + g_StaticArrayLen;
    while (*p) p++;
    if (p < end)
        *p = (void*)&s3eNOpenFeintRegisterExt;
    return 0;
}

int g_s3eNOpenFeintVal = s3eNOpenFeintStaticInit();

#elif defined S3E_EDK_USE_DLLS
S3E_EXTERN_C S3E_DLL_EXPORT void RegisterExt()
{
    s3eNOpenFeintRegisterExt();
}
#endif

#endif
