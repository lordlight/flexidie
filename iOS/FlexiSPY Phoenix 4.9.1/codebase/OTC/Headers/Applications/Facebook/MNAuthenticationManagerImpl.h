/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "FBSessionClassProvidable-Protocol.h"
//#import "MNAuthenticationManager-Protocol.h"

@class FBAPISessionStore, FBFacebookCredentials, NSString;

@interface MNAuthenticationManagerImpl : NSObject //<MNAuthenticationManager, FBSessionClassProvidable>
{
    FBAPISessionStore *_apiSessionStore;
    FBFacebookCredentials *_pageCredentials;
}

@property(retain, nonatomic) FBFacebookCredentials *pageCredentials; // @synthesize pageCredentials=_pageCredentials;
@property(retain, nonatomic) FBAPISessionStore *apiSessionStore; // @synthesize apiSessionStore=_apiSessionStore;
- (id)mailboxViewerCredentials;
- (void)setMailboxViewerPageCredentialsOverride:(id)arg1;
- (id)mailboxViewerUserID;
- (BOOL)hasMailboxViewer;
- (id)facebookCredentials;
- (BOOL)hasFacebookCredentials;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithApiSessionStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

