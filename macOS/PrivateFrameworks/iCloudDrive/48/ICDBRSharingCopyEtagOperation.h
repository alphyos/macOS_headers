//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDrive/ICDBROperation.h>

@class NSURL;

@interface ICDBRSharingCopyEtagOperation : ICDBROperation
{
    NSURL *_fileURL;
    CDUnknownBlockType _sharingEtagCompletionBlock;
}

@property(copy) CDUnknownBlockType sharingEtagCompletionBlock; // @synthesize sharingEtagCompletionBlock=_sharingEtagCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

