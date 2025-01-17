//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IncomingCallNotifications/NSCopying-Protocol.h>
#import <IncomingCallNotifications/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface ICNotificationManagerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_localizedDisplayName;
    NSUUID *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

