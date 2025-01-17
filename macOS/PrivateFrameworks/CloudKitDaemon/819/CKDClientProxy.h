//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>

@class CKDClientContext, CKDPCSFetchAggregator, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection;
@protocol NSObject, OS_dispatch_queue;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher>
{
    CKDClientContext *_context;
    BOOL _sandboxed;
    BOOL _canUsePackages;
    BOOL _canOpenByID;
    BOOL _holdAllOperations;
    BOOL _hasFakeEntitlements;
    int _pid;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_cleanupOperationQueue;
    NSString *_procName;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSOperationQueue *_cloudKitSupportOperationThrottleQueue;
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSArray *_cachedSandboxExtensions;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_pendingOperationIDs;
    NSDate *_connectionDate;
    long long _hasTCCAuthorizationTernary;
    NSDictionary *_connectionEntitlements;
    NSOperationQueue *_tccAuthOpQueue;
    NSObject<OS_dispatch_queue> *_tccAuthQueue;
    id <NSObject> _TCCDatabaseChangedNotificationObserver;
    NSMutableDictionary *_operationStatisticsByClassName;
    NSString *_cachedApplicationBundleID;
    NSString *_sourceApplicationBundleID;
    NSXPCConnection *_connection;
    CKDPCSFetchAggregator *_fetchAggregator;
}

+ (id)operationStatusReport:(id)arg1;
+ (id)sharedClientThrottlingOperationQueue;
+ (id)accountStatusWorkloop;
@property(retain, nonatomic) CKDPCSFetchAggregator *fetchAggregator; // @synthesize fetchAggregator=_fetchAggregator;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(retain, nonatomic) NSString *cachedApplicationBundleID; // @synthesize cachedApplicationBundleID=_cachedApplicationBundleID;
@property(retain, nonatomic) NSMutableDictionary *operationStatisticsByClassName; // @synthesize operationStatisticsByClassName=_operationStatisticsByClassName;
@property(retain, nonatomic) id <NSObject> TCCDatabaseChangedNotificationObserver; // @synthesize TCCDatabaseChangedNotificationObserver=_TCCDatabaseChangedNotificationObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tccAuthQueue; // @synthesize tccAuthQueue=_tccAuthQueue;
@property(retain, nonatomic) NSOperationQueue *tccAuthOpQueue; // @synthesize tccAuthOpQueue=_tccAuthOpQueue;
@property(nonatomic) BOOL hasFakeEntitlements; // @synthesize hasFakeEntitlements=_hasFakeEntitlements;
@property(retain, nonatomic) NSDictionary *connectionEntitlements; // @synthesize connectionEntitlements=_connectionEntitlements;
@property(nonatomic) long long hasTCCAuthorizationTernary; // @synthesize hasTCCAuthorizationTernary=_hasTCCAuthorizationTernary;
@property(retain, nonatomic) NSDate *connectionDate; // @synthesize connectionDate=_connectionDate;
@property(retain, nonatomic) NSMutableSet *pendingOperationIDs; // @synthesize pendingOperationIDs=_pendingOperationIDs;
@property(nonatomic) BOOL holdAllOperations; // @synthesize holdAllOperations=_holdAllOperations;
@property(nonatomic) BOOL canOpenByID; // @synthesize canOpenByID=_canOpenByID;
@property(nonatomic) BOOL canUsePackages; // @synthesize canUsePackages=_canUsePackages;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) NSArray *cachedSandboxExtensions; // @synthesize cachedSandboxExtensions=_cachedSandboxExtensions;
@property(retain, nonatomic) NSOperationQueue *backgroundOperationThrottleQueue; // @synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue;
@property(retain, nonatomic) NSOperationQueue *cloudKitSupportOperationThrottleQueue; // @synthesize cloudKitSupportOperationThrottleQueue=_cloudKitSupportOperationThrottleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // @synthesize statusQueue=_statusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQueue; // @synthesize cancellationQueue=_cancellationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSOperationQueue *cleanupOperationQueue; // @synthesize cleanupOperationQueue=_cleanupOperationQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (BOOL)canUsePackagesWithError:(id *)arg1;
- (BOOL)canOpenFileAtURL:(id)arg1;
- (void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2 completeWhenQueued:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)triggerAutoBugCaptureSnapshot;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)flushOperationMetricsToPowerLog;
- (void)updatePushTokens;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (id)CKStatusReportArray;
- (id)CKStatusReportArrayIncludingSharedOperations:(BOOL)arg1;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestClientSyncWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)countAssetCacheItemsWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_locked_eligiblePendingContextForSetupInfo:(id)arg1;
- (id)_bundleURL;
- (id)_executablePath;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)cancelAllOperations;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountWithID:(id)arg1 changedWithChangeType:(long long)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerIdentifiers:(id)arg3;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deviceCountWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchXPCCriteriaWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkAssetBrokenOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performRepairAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performArchiveRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_reallyPerformFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_performFetchCurrentUserRecordOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
- (id)openFileWithOpenInfo:(id)arg1 error:(id *)arg2;
- (void)handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleStatisticsForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_accountStatusWithClientContext:(id)arg1;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(CDUnknownBlockType)arg2;
- (BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id *)arg2;
- (id)apsEnvironmentEntitlement;
@property(readonly, nonatomic) NSString *applicationBundleIDForPush;
@property(readonly, nonatomic) unsigned long long _outstandingOperationCount;
- (id)_clientPrefixEntitlement;
@property(readonly, nonatomic) NSString *associatedApplicationBundleID;
- (id)applicationBundleID;
- (id)applicationIdentifier;
- (id)serviceNameForContainerMapEntitlement;
- (BOOL)hasCloudKitSupportServiceEntitlement;
- (BOOL)hasAllowUnverifiedAccountEntitlement;
- (BOOL)hasNonLegacyShareURLEntitlement;
- (BOOL)hasDisplaysSystemAcceptPromptEntitlement;
- (BOOL)hasParticipantPIIEntitlement;
- (BOOL)hasOutOfProcessUIEntitlement;
- (BOOL)hasLightweightPCSEntitlement;
- (BOOL)hasAllowAccessDuringBuddyEntitlement;
- (BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (BOOL)hasCloudKitSystemServiceEntitlement;
- (BOOL)hasDeviceIdentifierEntitlement;
- (BOOL)hasZoneProtectionDataEntitlement;
- (BOOL)hasProtectionDataEntitlement;
- (BOOL)_hasCustomAccountsEntitlement;
- (BOOL)_hasEnvironmentEntitlement;
- (BOOL)hasMasqueradingEntitlement;
- (BOOL)_hasEntitlementForKey:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)_updateConnectionEntitlementsWithFakeEntitlements:(id)arg1;
- (BOOL)isLongLived;
- (void)getTCCAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasTCCAuthorization;
- (void)_lockedSetHasTCCAuthorizationTernary:(long long)arg1;
- (BOOL)_lockedHasTCCAuthorization;
- (void)tearDown;
@property(retain, nonatomic) CKDClientContext *context;
- (void)setClientProxyAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)_setupOperationQueues;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

