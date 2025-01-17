//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHEditorDataSource-Protocol.h>

@class NSIndexSet;

@protocol KHMutableEditorDataSource <KHEditorDataSource>
- (BOOL)adjustEditorPageCount:(unsigned long long)arg1;
- (void)exchangeEditorLayoutAtIndex:(long long)arg1 withEditorLayoutAtIndex:(long long)arg2;
- (void)moveEditorLayoutsInRange:(struct _NSRange)arg1 toIndex:(long long)arg2;
- (void)moveEditorLayoutAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)shouldExchangeItemsInRange:(struct _NSRange)arg1 withProposedRange:(struct _NSRange)arg2;
- (struct _NSRange)targetRangeForMoveOfItemsAtRange:(struct _NSRange)arg1 toProposedRange:(struct _NSRange)arg2;
- (struct _NSRange)targetRangeToRearrangeFromSourceRange:(struct _NSRange)arg1;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)arg1;

@optional
- (long long)editorRearrangingStyle;
- (void)insertEditorSpreadLayoutAtIndex:(unsigned long long)arg1;
- (void)addEditorLayouts:(unsigned long long)arg1;
- (void)insertEditorLayoutAtIndex:(unsigned long long)arg1;
- (void)removeEditorLayoutsInIndexSet:(NSIndexSet *)arg1;
- (BOOL)adjustDensitySetting:(unsigned long long)arg1 createDatabaseObjects:(BOOL)arg2;
@end

