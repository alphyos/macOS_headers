//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLDynamicLibrarySPI.h"

@class NSArray, NSObject<OS_dispatch_data>, NSString;

__attribute__((visibility("hidden")))
@interface _MTLDynamicLibrary : NSObject <MTLDynamicLibrarySPI>
{
    NSString *_label;
    id <MTLDevice> _device;
    NSObject<OS_dispatch_data> *_binaryData;
    NSArray *_functionNames;
    NSString *_libraryPath;
    NSArray *_linkedLibraries;
}

@property(readonly) NSObject<OS_dispatch_data> *binaryData; // @synthesize binaryData=_binaryData;
@property(readonly) NSArray *linkedLibraries; // @synthesize linkedLibraries=_linkedLibraries;
@property(readonly) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property(readonly) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)serializeToURL:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)newErrorWithMessage:(id)arg1 errorCode:(unsigned long long)arg2;
- (id)initWithLibrary:(id)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

