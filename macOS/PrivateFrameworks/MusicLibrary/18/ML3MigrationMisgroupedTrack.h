//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3MigrationMisgroupedTrack : NSObject
{
    long long _persistentID;
    long long _albumArtistPID;
}

@property(readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
- (id)initWithPersistentID:(long long)arg1 albumArtistPID:(long long)arg2;

@end

