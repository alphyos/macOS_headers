//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableURLRequest, NSTimer, NSURLSession, NSURLSessionDataTask;

@interface WFMeasure : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSMutableURLRequest *_url;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSDate *_startDate;
    BOOL _isInProgress;
    unsigned int _wakeAssertionId;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (BOOL)isInProgress;
- (void)abort;
- (void)onTimeout:(id)arg1;
- (BOOL)start:(CDUnknownBlockType)arg1;
- (id)initWithType:(int)arg1;

@end

