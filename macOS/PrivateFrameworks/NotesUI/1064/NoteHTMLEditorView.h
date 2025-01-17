//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <NotesUI/WKNavigationDelegate-Protocol.h>
#import <NotesUI/WKScriptMessageHandler-Protocol.h>
#import <NotesUI/WKUIDelegatePrivate-Protocol.h>
#import <NotesUI/WKURLSchemeHandler-Protocol.h>
#import <NotesUI/_WKInputDelegate-Protocol.h>

@class ICSelectorDelayer, NSArray, NSLayoutConstraint, NSString, NoteWKWebView, WebArchive;
@protocol NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewDelegate, NoteHTMLEditorViewLayoutDelegate;

@interface NoteHTMLEditorView : NSView <WKUIDelegatePrivate, _WKInputDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKURLSchemeHandler>
{
    BOOL _hasAttachments;
    BOOL _editable;
    BOOL _editing;
    BOOL _updatingContent;
    unsigned short _listStyle;
    id <NoteHTMLEditorViewDelegate> _delegate;
    id <NoteHTMLEditorViewActionDelegate> _actionDelegate;
    id <NoteHTMLEditorViewLayoutDelegate> _layoutDelegate;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    NSLayoutConstraint *_contentSizeWidthConstraint;
    NoteWKWebView *_webView;
    NSString *_htmlString;
    NSString *_title;
    NSString *_text;
    NSArray *_attachmentContentIDs;
    long long _selectionLength;
    NSString *_htmlStringToLoad;
    NSArray *_attachmentsToLoad;
    ICSelectorDelayer *_updateContentDelayer;
}

+ (id)baseHTMLString;
@property(nonatomic) BOOL updatingContent; // @synthesize updatingContent=_updatingContent;
@property(retain, nonatomic) ICSelectorDelayer *updateContentDelayer; // @synthesize updateContentDelayer=_updateContentDelayer;
@property(copy, nonatomic) NSArray *attachmentsToLoad; // @synthesize attachmentsToLoad=_attachmentsToLoad;
@property(copy, nonatomic) NSString *htmlStringToLoad; // @synthesize htmlStringToLoad=_htmlStringToLoad;
@property(nonatomic) unsigned short listStyle; // @synthesize listStyle=_listStyle;
@property(nonatomic) long long selectionLength; // @synthesize selectionLength=_selectionLength;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) BOOL hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property(copy, nonatomic) NSArray *attachmentContentIDs; // @synthesize attachmentContentIDs=_attachmentContentIDs;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NoteWKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSLayoutConstraint *contentSizeWidthConstraint; // @synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentSizeHeightConstraint; // @synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint;
@property(nonatomic) __weak id <NoteHTMLEditorViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <NoteHTMLEditorViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <NoteHTMLEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (struct CGRect)rectForSelection;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)removeStyle:(id)arg1;
- (void)insertOrderedList:(id)arg1;
- (void)insertDashedList:(id)arg1;
- (void)insertBulletedList:(id)arg1;
- (void)insertImage:(id)arg1;
- (void)updateContent;
- (void)updateApperanceIfNecessary;
- (void)alwaysShowLightContentDidChange:(id)arg1;
- (void)accentColorDidChange:(id)arg1;
- (void)stopEditing;
- (void)startEditing;
- (void)adoptEditableState;
- (void)updateDataDetectors;
- (void)undoablyRemoveAttachmentPresentations:(id)arg1 undoManager:(id)arg2;
- (void)undoablyReplaceSelectionWithAttachmentPresentations:(id)arg1 undoManager:(id)arg2;
- (void)replaceSelectionWithAttachmentPresentation:(id)arg1;
- (id)jsonStringFromDictionaryOrArray:(id)arg1;
- (id)attachmentInfoDictionaryForAttachmentPresentation:(id)arg1;
- (id)contentAsPasteboardItems;
- (void)insertLinksWithURLs:(id)arg1 titles:(id)arg2;
- (void)insertLinkWithURL:(id)arg1 title:(id)arg2;
- (void)setEnableShiftNewlinesInSmartLists:(BOOL)arg1;
- (void)setEnableSmartLists:(BOOL)arg1;
- (void)setHtmlString:(id)arg1 attachments:(id)arg2;
@property(nonatomic) double textZoomFactor;
@property(readonly, nonatomic) WebArchive *webArchive;
- (id)webViewConfiguration;
- (void)setupWebView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

