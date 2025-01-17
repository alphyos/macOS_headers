//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import <PhotoPrintProduct/KHAssetGeneration-Protocol.h>

@class NSDate, NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface KHProjectGroup : KHModel <KHAssetGeneration>
{
    NSString *_name;
    NSDate *_date;
    long long _status;
    NSMutableArray *_projects;
    NSRecursiveLock *_projectLock;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_price;
}

+ (id)createInDatabase:(id)arg1 withName:(id)arg2;
+ (id)createInDatabase:(id)arg1 withName:(id)arg2 uuid:(id)arg3;
+ (unsigned long long)maximumNumberOfProjects;
+ (void)setMaximumNumberOfProjects:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
- (void)setReturnAddress:(id)arg1;
- (id)recipientAddresses;
- (void)setRecipientAddresses:(id)arg1;
- (long long)sortByDateDescending:(id)arg1;
- (long long)sortByDate:(id)arg1;
- (long long)sortById:(id)arg1;
- (id)projectsWithContentIssueOfType:(unsigned long long)arg1;
- (void)reevaluateName;
- (BOOL)canRemoveProject;
- (BOOL)canAddProject;
- (void)removeProject:(id)arg1 notify:(BOOL)arg2;
- (void)removeProject:(id)arg1;
- (void)addProject:(id)arg1 notify:(BOOL)arg2;
- (void)addProject:(id)arg1;
- (void)clearProjectCache;
- (id)photoIds;
- (id)firstProject;
- (id)projects;
- (void)unload;
- (void)remove;
- (id)clone;
- (id)cloneInDatabase:(id)arg1 withUuid:(id)arg2;
- (void)setStatus:(long long)arg1;
- (void)cacheStatus:(long long)arg1;
- (long long)status;
- (void)setDate:(id)arg1;
- (void)cacheDate:(id)arg1;
- (void)cacheDateWithString:(id)arg1;
- (id)date;
- (void)setName:(id)arg1;
- (void)cacheName:(id)arg1;
- (id)name;
@property(readonly, nonatomic) NSString *themeIdentifier;
- (id)creationDate;
- (BOOL)isProjectModel;
- (void)dealloc;
- (id)initWithUuid:(id)arg1 forEntity:(id)arg2;
- (id)init;
- (id)_projectForAssetId:(id)arg1;
- (unsigned long long)numberOfResourcesThatRequireGenerationWithinDirectory:(id)arg1 assetIdentifier:(id)arg2;
- (id)generateAssetThumbnailsInDirectoryAtPath:(id)arg1 assetIdentifier:(id)arg2 progress:(id)arg3 error:(id *)arg4;
- (id)generateAssetsInDirectoryAtPath:(id)arg1 assetIdentifier:(id)arg2 progress:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

