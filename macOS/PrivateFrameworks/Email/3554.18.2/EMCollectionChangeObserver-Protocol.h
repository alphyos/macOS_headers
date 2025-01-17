//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EMCollection, NSArray;
@protocol EMCollectionItemID;

@protocol EMCollectionChangeObserver <NSObject>
- (void)collection:(EMCollection *)arg1 deletedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 changedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 movedItemID:(id <EMCollectionItemID>)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 movedItemID:(id <EMCollectionItemID>)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;

@optional
- (void)didFinishRecoveryForCollection:(EMCollection *)arg1;
- (void)collectionDidFinishInitialLoad:(EMCollection *)arg1;
@end

