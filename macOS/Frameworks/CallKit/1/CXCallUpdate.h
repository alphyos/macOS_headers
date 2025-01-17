//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, CXHandoffContext, NSDictionary, NSSet, NSString, NSUUID;

@interface CXCallUpdate : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    BOOL _supportsHolding;
    BOOL _supportsGrouping;
    BOOL _supportsUngrouping;
    BOOL _supportsDTMF;
    BOOL _hasVideo;
    BOOL _emergency;
    BOOL _usingBaseband;
    BOOL _blocked;
    BOOL _mayRequireBreakBeforeMake;
    BOOL _supportsTTYWithVoice;
    BOOL _requiresInCallSounds;
    BOOL _prefersExclusiveAccessToCellularNetwork;
    BOOL _remoteUplinkMuted;
    BOOL _shouldSuppressInCallUI;
    BOOL _supportsUnambiguousMultiPartyState;
    BOOL _supportsAddCall;
    BOOL _supportsSendingToVoicemail;
    BOOL _requiresAuthentication;
    CXHandle *_remoteHandle;
    NSString *_localizedCallerName;
    struct CXCallUpdateHasSet _hasSet;
    NSUUID *_UUID;
    long long _ttyType;
    long long _inCallSoundRegion;
    NSString *_audioCategory;
    NSString *_audioMode;
    long long _audioInterruptionProvider;
    long long _audioInterruptionOperationMode;
    long long _verificationStatus;
    NSString *_crossDeviceIdentifier;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    NSSet *_remoteParticipantHandles;
    NSSet *_activeRemoteParticipantHandles;
    CXHandoffContext *_handoffContext;
    NSDictionary *_context;
    long long _videoStreamToken;
}

+ (BOOL)supportsSecureCoding;
+ (id)callUpdateWithDefaultValuesSet;
@property(nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;
@property(nonatomic) BOOL supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property(nonatomic) BOOL supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property(nonatomic) BOOL supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) BOOL prefersExclusiveAccessToCellularNetwork; // @synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) CXHandoffContext *handoffContext; // @synthesize handoffContext=_handoffContext;
@property(copy, nonatomic) NSSet *activeRemoteParticipantHandles; // @synthesize activeRemoteParticipantHandles=_activeRemoteParticipantHandles;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(copy, nonatomic) NSUUID *localSenderIdentityAccountUUID; // @synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(copy, nonatomic) NSString *crossDeviceIdentifier; // @synthesize crossDeviceIdentifier=_crossDeviceIdentifier;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(nonatomic) long long audioInterruptionOperationMode; // @synthesize audioInterruptionOperationMode=_audioInterruptionOperationMode;
@property(nonatomic) long long audioInterruptionProvider; // @synthesize audioInterruptionProvider=_audioInterruptionProvider;
@property(copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) long long inCallSoundRegion; // @synthesize inCallSoundRegion=_inCallSoundRegion;
@property(nonatomic) BOOL requiresInCallSounds; // @synthesize requiresInCallSounds=_requiresInCallSounds;
@property(nonatomic) BOOL supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property(nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) BOOL mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property(nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property(nonatomic, getter=isUsingBaseband) BOOL usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property(nonatomic, getter=isEmergency) BOOL emergency; // @synthesize emergency=_emergency;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) struct CXCallUpdateHasSet hasSet; // @synthesize hasSet=_hasSet;
@property(nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) BOOL supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property(nonatomic) BOOL supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property(nonatomic) BOOL supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property(nonatomic) BOOL supportsHolding; // @synthesize supportsHolding=_supportsHolding;
@property(copy, nonatomic) NSString *localizedCallerName; // @synthesize localizedCallerName=_localizedCallerName;
@property(copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateWithUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

