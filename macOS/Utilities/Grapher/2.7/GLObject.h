//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSColor;

@interface GLObject : NSObject <NSCoding>
{
    NSColor *mColor;
    unsigned long long mAttributes;
}

+ (void)renderColor:(id)arg1;
+ (void)setShininess:(double)arg1;
+ (void)setSpecularColor:(id)arg1;
+ (void)setAmbientColor:(id)arg1;
+ (void)getComponents:(float *)arg1 ofColor:(id)arg2;
- (void)renderForLineProjection;
- (void)renderForProjection;
- (struct _GRect3D)bounds3D;
- (BOOL)hasAttribute:(unsigned long long)arg1;
- (void)removeAttribute:(unsigned long long)arg1;
- (void)setAttribute:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)removeColor;
- (BOOL)isOpaque;
- (void)glDraw:(BOOL)arg1;
- (void)glDraw;
- (BOOL)opaqueColor:(id)arg1;
- (void)renderLineColor;
- (void)renderLineColor:(id)arg1;
- (void)renderColor;
- (void)renderColor:(id)arg1;
- (void)render;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

