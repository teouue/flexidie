//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


@class FBAnalyticsUserFBIDListener, FBApplicationActivityMonitorCoordinator, FBApplicationAnalyticsCoordinator, FBExceptionHandler, FBProviderMap, FBRunloopIdleDetector, FBSessionController, FBUsageTimeMonitor, MNAppSession, MNApplicationDelegateListenerAnnouncer, MNApplicationWindow, MNBugReportConduit, MNMontageComposerLaunchCoordinator, MNNetworkUsageTimeMonitor, MNPlatformConversionTrackingCoordinator, MNWatchAppContextUpdater, NSDictionary, NSString;
@protocol FBBackgroundURLSessionHandlingListener, FBEventListener, FBProvider;

@interface MNAppDelegate : NSObject <UIApplicationDelegate>
{
    _Bool _backgroundInit;
    _Bool _canTapPushNotification;
    _Bool _didColdStart;
    _Bool _uiPresented;
    FBApplicationAnalyticsCoordinator *_analyticsCoordinator;
    FBApplicationActivityMonitorCoordinator *_activityMonitorCoordinator;
    MNWatchAppContextUpdater *_watchAppContextUpdater;
    FBUsageTimeMonitor *_usageTimeMonitor;
    id <FBBackgroundURLSessionHandlingListener> _backgroundURLSessionAnnouncer;
    MNNetworkUsageTimeMonitor *_networkUsageTimeMonitor;
    MNBugReportConduit *_bugReportConduit;
    FBAnalyticsUserFBIDListener *_userFBIDListener;
    FBProviderMap *_providerMap;
    id <FBProvider> _appNotificationHandlerProvider;
    id <FBProvider> _loggedOutURLHandlerProvider;
    id <FBProvider> _applicationShortcutItemHandlerProvider;
    id <FBProvider> _urlHandlerProvider;
    id <FBProvider> _appleIntentHandlerProvider;
    MNAppSession *_appSession;
    FBExceptionHandler *_exceptionHandler;
    FBSessionController *_sessionController;
    id <FBEventListener> _timeSpentListener;
    NSDictionary *_launchOptions;
    FBRunloopIdleDetector *_idleDetectorForProviderMapSanityCheck;
    MNPlatformConversionTrackingCoordinator *_platformConversionTrackingCoordinator;
    MNMontageComposerLaunchCoordinator *_montageComposerLaunchCoordinator;
    MNApplicationDelegateListenerAnnouncer *_announcer;
    MNApplicationWindow *_window;
}

@property(retain, nonatomic) MNApplicationWindow *window; // @synthesize window=_window;

- (void)_performProviderMapSanityCheck;
- (_Bool)_hasValidCredentials;
- (void)_logDataUsageInApnsPayload:(id)arg1;
- (void)_logApplicationLaunchWithOptions:(id)arg1;
- (void)_startAppSessionWithLaunchOptions:(id)arg1;
- (void)logOutManagerDidCompleteLogout:(id)arg1;
- (void)logOutManagerWillCompleteLogout:(id)arg1;
- (void)dealloc;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id)arg3;
- (void)_application:(id)arg1 didReceiveLocalNotification:(id)arg2 actionIdentifier:(id)arg3 withResponseInfo:(id)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(id)arg4;
- (void)_application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(id)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(id)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)dynamicTypeSizeChanged:(id)arg1;
- (void)keyboardInputChanged:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)keysConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
