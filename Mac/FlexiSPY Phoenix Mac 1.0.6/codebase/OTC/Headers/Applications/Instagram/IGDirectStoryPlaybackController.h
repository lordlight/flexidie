//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class IGDirectStory, IGDirectStoryMessage, IGDirectStoryService, IGDirectStoryViewerLogger, IGDirectStoryViewerLoggingInfo, IGUserSession, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface IGDirectStoryPlaybackController : NSObject
{
    _Bool _isReplaying;
    _Bool _playbackPausedForGesture;
    _Bool _isPauseEnabled;
    _Bool _pendingAdvanceOnPagination;
    _Bool _isLoadingNextPage;
    IGUserSession *_userSession;
    id _player;
    long long _middleRegionAction;
    long long _currentMessageIndex;
    IGDirectStoryService *_service;
    NSString *_storyId;
    NSOrderedSet *_messages;
    NSMutableOrderedSet *_seenMessages;
    long long _totalCountFromServer;
    long long _totalCount;
    IGDirectStoryViewerLogger *_logger;
    IGDirectStoryViewerLoggingInfo *_loggingInfo;
}

@property(readonly, nonatomic) IGDirectStoryViewerLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(retain, nonatomic) IGDirectStoryViewerLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long totalCountFromServer; // @synthesize totalCountFromServer=_totalCountFromServer;
@property(nonatomic) _Bool isLoadingNextPage; // @synthesize isLoadingNextPage=_isLoadingNextPage;
@property(nonatomic) _Bool pendingAdvanceOnPagination; // @synthesize pendingAdvanceOnPagination=_pendingAdvanceOnPagination;
@property(retain, nonatomic) NSMutableOrderedSet *seenMessages; // @synthesize seenMessages=_seenMessages;
@property(copy, nonatomic) NSOrderedSet *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) _Bool isPauseEnabled; // @synthesize isPauseEnabled=_isPauseEnabled;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) IGDirectStoryService *service; // @synthesize service=_service;
@property(nonatomic) _Bool playbackPausedForGesture; // @synthesize playbackPausedForGesture=_playbackPausedForGesture;
@property(nonatomic) long long currentMessageIndex; // @synthesize currentMessageIndex=_currentMessageIndex;
@property(readonly, nonatomic) long long middleRegionAction; // @synthesize middleRegionAction=_middleRegionAction;
@property(readonly, nonatomic) __weak id  player; // @synthesize player=_player;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool isReplaying; // @synthesize isReplaying=_isReplaying;

@property(readonly, nonatomic) IGDirectStoryMessage *playingMessage;
@property(readonly, nonatomic) IGDirectStory *directStory;
- (void)fullscreenOverlayDidSwipeUp:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didTapInRegion:(long long)arg2;
- (void)fullscreenOverlayDidEndPressing:(id)arg1;
- (void)fullscreenOverlay:(id)arg1 didBeginPressingInRegion:(long long)arg2;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)storyPlayerMediaViewDidFailToLoad:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2;
- (void)storyPlayerMediaViewDidLoad:(id)arg1;
- (void)markSeenIfApplicable:(id)arg1;
- (void)loadNextPage;
- (void)loadMediaAtIndex:(long long)arg1;
- (void)advanceToNextItemIfPossible;
- (void)finishPlaybackForCurrentMessageWithReason:(long long)arg1;
- (void)updateProgressViewSegments;
- (void)pausePlaybackIfSupportedWithReason:(long long)arg1;
- (void)finishPlayback;
- (void)startPlayback;
- (id)initWithStoryId:(id)arg1 userSession:(id)arg2 messagesToReplay:(id)arg3 player:(id)arg4 loggingInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
