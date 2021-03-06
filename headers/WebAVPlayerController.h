
@protocol AVPlayerViewControllerDelegate;
@interface WebAVPlayerController : NSObject <AVPlayerViewControllerDelegate> {

    WebAVMediaSelectionOption* _currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption* _currentLegibleMediaSelectionOption;
    BOOL _canScanBackward;
    BOOL _canPlay;
    BOOL _canPause;
    BOOL _canTogglePlayback;
    BOOL _canSeek;
    BOOL _hasEnabledAudio;
    BOOL _hasEnabledVideo;
    BOOL _externalPlaybackActive;
    AVPlayerController* _playerControllerProxy;
    ^{WebVideoFullscreenModel=^^?} _delegate;
    double _rate;
    double _contentDuration;
    double _minTime;
    double _maxTime;
    double _contentDurationWithinEndTimes;
    NSArray* _loadedTimeRanges;
    long long _status;
    AVValueTiming* _timing;
    NSArray* _seekableTimeRanges;
    NSArray* _audioMediaSelectionOptions;
    NSArray* _legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString* _externalPlaybackAirPlayDeviceLocalizedName;
    {CGSize="width"d"height"d} _contentDimensions;
}
@property (atomic, retain, readwrite) NSNumber* playerControllerProxy;
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSNumber* canScanForward;
@property (atomic, assign, readwrite) NSNumber* canScanBackward;
@property (atomic, assign, readonly) NSNumber* canSeekToBeginning;
@property (atomic, assign, readonly) NSNumber* canSeekToEnd;
@property (atomic, assign, readwrite) NSNumber* canPlay;
@property (atomic, assign, readwrite, getter=isPlaying) NSNumber* playing;
@property (atomic, assign, readwrite) NSNumber* canPause;
@property (atomic, assign, readwrite) NSNumber* canTogglePlayback;
@property (atomic, assign, readwrite) NSNumber* rate;
@property (atomic, assign, readwrite) NSNumber* canSeek;
@property (atomic, assign, readwrite) NSNumber* contentDuration;
@property (atomic, assign, readwrite) NSNumber* contentDimensions;
@property (atomic, assign, readwrite) NSNumber* hasEnabledAudio;
@property (atomic, assign, readwrite) NSNumber* hasEnabledVideo;
@property (atomic, assign, readwrite) NSNumber* minTime;
@property (atomic, assign, readwrite) NSNumber* maxTime;
@property (atomic, assign, readwrite) NSNumber* contentDurationWithinEndTimes;
@property (atomic, retain, readwrite) NSArray* loadedTimeRanges;
@property (atomic, assign, readwrite) NSNumber* status;
@property (atomic, retain, readwrite) NSNumber* timing;
@property (atomic, retain, readwrite) NSArray* seekableTimeRanges;
@property (atomic, assign, readonly) NSNumber* hasMediaSelectionOptions;
@property (atomic, assign, readonly) NSNumber* hasAudioMediaSelectionOptions;
@property (atomic, retain, readwrite) NSArray* audioMediaSelectionOptions;
@property (atomic, retain, readwrite) WebAVMediaSelectionOption* currentAudioMediaSelectionOption;
@property (atomic, assign, readonly) NSNumber* hasLegibleMediaSelectionOptions;
@property (atomic, retain, readwrite) NSArray* legibleMediaSelectionOptions;
@property (atomic, retain, readwrite) WebAVMediaSelectionOption* currentLegibleMediaSelectionOption;
@property (atomic, assign, readonly, getter=isPlayingOnExternalScreen) NSNumber* playingOnExternalScreen;
@property (atomic, assign, readwrite, getter=isExternalPlaybackActive) NSNumber* externalPlaybackActive;
@property (atomic, assign, readwrite) NSNumber* externalPlaybackType;
@property (atomic, retain, readwrite) NSString* externalPlaybackAirPlayDeviceLocalizedName;
 + (id) keyPathsForValuesAffectingPlaying;
 + (id) keyPathsForValuesAffectingHasLiveStreamingContent;
 + (id) keyPathsForValuesAffectingCanScanForward;
 + (id) keyPathsForValuesAffectingCanSeekToBeginning;
 + (id) keyPathsForValuesAffectingCanSeekToEnd;
 + (id) keyPathsForValuesAffectingHasMediaSelectionOptions;
 + (id) keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
 + (id) keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
 + (id) keyPathsForValuesAffectingPlayingOnExternalScreen;

 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) setDelegate:(^{WebVideoFullscreenModel=^^?})a ;
 - (id) forwardingTargetForSelector:(SEL)a ;
 - (id) init;
 - (^{WebVideoFullscreenModel=^^?}) delegate;
 - (long long) externalPlaybackType;
 - (void) setRate:(double)a ;
 - (id) seekableTimeRanges;
 - (BOOL) isExternalPlaybackActive;
 - (void) setPlayerControllerProxy:(id)a ;
 - (void) setContentDuration:(double)a ;
 - (void) setMaxTime:(double)a ;
 - (void) setContentDurationWithinEndTimes:(double)a ;
 - (void) setLoadedTimeRanges:(id)a ;
 - (void) setCanPlay:(BOOL)a ;
 - (void) setCanPause:(BOOL)a ;
 - (void) setCanTogglePlayback:(BOOL)a ;
 - (void) setHasEnabledAudio:(BOOL)a ;
 - (void) setCanSeek:(BOOL)a ;
 - (void) setMinTime:(double)a ;
 - (void) setStatus:(long long)a ;
 - (void) setTiming:(id)a ;
 - (void) setHasEnabledVideo:(BOOL)a ;
 - (void) setContentDimensions:({CGSize=dd})a ;
 - (void) setSeekableTimeRanges:(id)a ;
 - (void) setCanScanBackward:(BOOL)a ;
 - (void) setAudioMediaSelectionOptions:(id)a ;
 - (void) setCurrentAudioMediaSelectionOption:(id)a ;
 - (void) setLegibleMediaSelectionOptions:(id)a ;
 - (void) setCurrentLegibleMediaSelectionOption:(id)a ;
 - (id) playerControllerProxy;
 - (double) rate;
 - (long long) status;
 - (double) contentDuration;
 - (id) timing;
 - (void) seekToTime:(double)a ;
 - (BOOL) canPlay;
 - (void) seekToBeginning:(id)a ;
 - (void) seekToEnd:(id)a ;
 - (BOOL) hasAudioMediaSelectionOptions;
 - (BOOL) hasLegibleMediaSelectionOptions;
 - (id) audioMediaSelectionOptions;
 - (id) legibleMediaSelectionOptions;
 - (BOOL) playerViewController:(id)a shouldExitFullScreenWithReason:(long long)b ;
 - (void) resetState;
 - (void) play:(id)a ;
 - (void) pause:(id)a ;
 - (void) togglePlayback:(id)a ;
 - (BOOL) isPlaying;
 - (void) setPlaying:(BOOL)a ;
 - (void) beginScrubbing:(id)a ;
 - (void) endScrubbing:(id)a ;
 - (BOOL) hasLiveStreamingContent;
 - (void) skipBackwardThirtySeconds:(id)a ;
 - (void) gotoEndOfSeekableRanges:(id)a ;
 - (BOOL) canScanForward;
 - (void) beginScanningForward:(id)a ;
 - (void) endScanningForward:(id)a ;
 - (void) beginScanningBackward:(id)a ;
 - (void) endScanningBackward:(id)a ;
 - (BOOL) canSeekToBeginning;
 - (void) seekChapterBackward:(id)a ;
 - (BOOL) canSeekToEnd;
 - (void) seekChapterForward:(id)a ;
 - (BOOL) hasMediaSelectionOptions;
 - (id) currentAudioMediaSelectionOption;
 - (id) currentLegibleMediaSelectionOption;
 - (BOOL) isPlayingOnExternalScreen;
 - (BOOL) canScanBackward;
 - (BOOL) canPause;
 - (BOOL) canTogglePlayback;
 - (BOOL) canSeek;
 - ({CGSize=dd}) contentDimensions;
 - (BOOL) hasEnabledAudio;
 - (BOOL) hasEnabledVideo;
 - (double) minTime;
 - (double) maxTime;
 - (double) contentDurationWithinEndTimes;
 - (id) loadedTimeRanges;
 - (void) setExternalPlaybackActive:(BOOL)a ;
 - (void) setExternalPlaybackType:(long long)a ;
 - (id) externalPlaybackAirPlayDeviceLocalizedName;
 - (void) setExternalPlaybackAirPlayDeviceLocalizedName:(id)a ;


@end
