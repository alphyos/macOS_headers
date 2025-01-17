//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSCopying-Protocol.h>
#import <SidecarCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, SidecarDevice;

@interface SidecarDisplayConfig : NSObject <NSCopying, NSSecureCoding>
{
    SidecarDevice *_device;
    NSNumber *_cipher;
    NSNumber *_codec;
    NSNumber *_displayID;
    NSNumber *_enableTimeSync;
    NSNumber *_framerate;
    NSNumber *_keyFrameInterval;
    NSNumber *_lowLatency;
    NSNumber *_rtcp;
    NSNumber *_rtcpTimeoutInterval;
    NSString *_service;
    NSNumber *_showTouchBar;
    NSNumber *_showSideBar;
    double _scale;
    NSNumber *_tilesPerFrame;
    long long _transport;
    NSNumber *_dataLink;
    NSNumber *_txMinBitrate;
    NSNumber *_txMaxBitrate;
    struct CGSize _size;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(retain, nonatomic) NSNumber *txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(retain, nonatomic) NSNumber *dataLink; // @synthesize dataLink=_dataLink;
@property(nonatomic) long long transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSNumber *tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *showSideBar; // @synthesize showSideBar=_showSideBar;
@property(retain, nonatomic) NSNumber *showTouchBar; // @synthesize showTouchBar=_showTouchBar;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSNumber *rtcpTimeoutInterval; // @synthesize rtcpTimeoutInterval=_rtcpTimeoutInterval;
@property(retain, nonatomic) NSNumber *rtcp; // @synthesize rtcp=_rtcp;
@property(retain, nonatomic) NSNumber *lowLatency; // @synthesize lowLatency=_lowLatency;
@property(retain, nonatomic) NSNumber *keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(retain, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(retain, nonatomic) NSNumber *enableTimeSync; // @synthesize enableTimeSync=_enableTimeSync;
@property(retain, nonatomic) NSNumber *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSNumber *codec; // @synthesize codec=_codec;
@property(retain, nonatomic) NSNumber *cipher; // @synthesize cipher=_cipher;
@property(retain, nonatomic) SidecarDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

