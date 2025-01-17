//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSString;

@interface HMDLegacyRemoteMessageFilter : HMDMessageFilter <HMFLogging>
{
    HMDHome *_home;
}

+ (BOOL)shouldCheckMessage:(id)arg1;
+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (BOOL)_isTargetingHome:(id)arg1;
- (id)initWithName:(id)arg1 home:(id)arg2;
- (id)logIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

