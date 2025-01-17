//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RemoteProcessingBlockPropertyListener;

__attribute__((visibility("hidden")))
@interface RPBPropertyListener : NSObject
{
    unsigned int _serverID;
    unsigned int _blockID;
    unsigned int _propertyID;
    id <RemoteProcessingBlockPropertyListener> _listener;
}

@property __weak id <RemoteProcessingBlockPropertyListener> listener; // @synthesize listener=_listener;
@property unsigned int propertyID; // @synthesize propertyID=_propertyID;
@property unsigned int blockID; // @synthesize blockID=_blockID;
@property unsigned int serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;

@end

