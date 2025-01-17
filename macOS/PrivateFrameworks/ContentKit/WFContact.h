//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSArray, NSData, NSDate, NSString, WFContactLabeledValue, WFFileRepresentation;

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent>
{
    BOOL _hasImageData;
    int _propertyID;
    WFFileRepresentation *_vCardRepresentation;
    long long _multivalueIndex;
    NSString *_nickname;
    NSArray *_socialProfiles;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)removeContactsChangeObserver:(id)arg1;
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;
+ (id)contactsWithVCardData:(id)arg1;
+ (id)contactsWithName:(id)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1;
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (Class)preferredConcreteSubclass;
@property(readonly, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(readonly, nonatomic) BOOL hasImageData; // @synthesize hasImageData=_hasImageData;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) long long multivalueIndex; // @synthesize multivalueIndex=_multivalueIndex;
@property(readonly, nonatomic) int propertyID; // @synthesize propertyID=_propertyID;
- (void).cxx_destruct;
- (id)wfSerializedRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) NSArray *instantMessageAddresses;
@property(readonly, nonatomic) NSArray *URLs;
@property(readonly, nonatomic) NSArray *streetAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) NSArray *dates;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) WFContactLabeledValue *birthday;
@property(readonly, nonatomic) NSData *thumbnailImageData;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) NSString *organization;
@property(readonly, nonatomic) NSString *nameSuffix;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *middleName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *namePrefix;
@property(readonly, nonatomic) NSString *formattedName;
@property(readonly, nonatomic) WFFileRepresentation *vCardRepresentation; // @synthesize vCardRepresentation=_vCardRepresentation;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;
- (id)valueForPropertyID:(int)arg1;
- (BOOL)hasValueForPropertyID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

