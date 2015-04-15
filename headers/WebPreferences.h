
@protocol NSCoding;
@interface WebPreferences : NSObject <NSCoding> {

    ^{WebPreferencesPrivate={RetainPtr<NSMutableDictionary>=^v}B{RetainPtr<NSString>=^v}BBI@} _private;
}
@property (nonatomic, copy, readonly) NSString* identifier;
@property (nonatomic, copy, readwrite) NSString* standardFontFamily;
@property (nonatomic, copy, readwrite) NSString* fixedFontFamily;
@property (nonatomic, copy, readwrite) NSString* serifFontFamily;
@property (nonatomic, copy, readwrite) NSString* sansSerifFontFamily;
@property (nonatomic, copy, readwrite) NSString* cursiveFontFamily;
@property (nonatomic, copy, readwrite) NSString* fantasyFontFamily;
@property (nonatomic, assign, readwrite) NSNumber* defaultFontSize;
@property (nonatomic, assign, readwrite) NSNumber* defaultFixedFontSize;
@property (nonatomic, assign, readwrite) NSNumber* minimumFontSize;
@property (nonatomic, assign, readwrite) NSNumber* minimumLogicalFontSize;
@property (nonatomic, copy, readwrite) NSString* defaultTextEncodingName;
@property (nonatomic, assign, readwrite) NSNumber* userStyleSheetEnabled;
@property (nonatomic, retain, readwrite) NSURL* userStyleSheetLocation;
@property (nonatomic, assign, readwrite, isJavaEnabled) NSNumber* javaEnabled;
@property (nonatomic, assign, readwrite, isJavaScriptEnabled) NSNumber* javaScriptEnabled;
@property (nonatomic, assign, readwrite) NSNumber* javaScriptCanOpenWindowsAutomatically;
@property (nonatomic, assign, readwrite, arePlugInsEnabled) NSNumber* plugInsEnabled;
@property (nonatomic, assign, readwrite) NSNumber* allowsAnimatedImages;
@property (nonatomic, assign, readwrite) NSNumber* allowsAnimatedImageLooping;
@property (nonatomic, assign, readwrite) NSNumber* loadsImagesAutomatically;
@property (nonatomic, assign, readwrite) NSNumber* autosaves;
@property (nonatomic, assign, readwrite) NSNumber* privateBrowsingEnabled;
@property (nonatomic, assign, readwrite) NSNumber* usesPageCache;
@property (nonatomic, assign, readwrite) NSNumber* cacheModel;
@property (nonatomic, assign, readwrite) NSNumber* suppressesIncrementalRendering;
 + (void) initialize;
 + (id) standardPreferences;
 + (id) _getInstanceForIdentifier:(id)a;
 + (void) _setInstance:(id)aforIdentifier:(id)b;
 + (id) _concatenateKeyWithIBCreatorID:(id)a;
 + (void) _checkLastReferenceForIdentifier:(id)a;
 + (void) _removeReferenceForIdentifier:(id)a;
 + (I) _systemCFStringEncoding;
 + (void) _setInitialDefaultTextEncodingToSystemEncoding;
 + (void) _setIBCreatorID:(id)a;
 + (void) _switchNetworkLoaderToNewTestingSession;
 + (void) _setCurrentNetworkLoaderSessionCookieAcceptPolicy:(Q)a;
 + (void) setWebKitLinkTimeVersion:(i)a;
 + (id) _IBCreatorID;

 - (void) dealloc;
 - (id) initWithIdentifier:(id)a;
 - (void) setMediaPlaybackAllowsAirPlay:(BOOL)a;
 - (void) setDatabasesEnabled:(BOOL)a;
 - (void) setLocalStorageEnabled:(BOOL)a;
 - (void) setOfflineWebApplicationCacheEnabled:(BOOL)a;
 - (void) setDiskImageCacheEnabled:(BOOL)a;
 - (void) setSuppressesIncrementalRendering:(BOOL)a;
 - (void) _setLocalStorageDatabasePath:(id)a;
 - (void) _setMinimumZoomFontSize:(f)a;
 - (void) _setAllowMultiElementImplicitFormSubmission:(BOOL)a;
 - (void) setAudioSessionCategoryOverride:(I)a;
 - (void) setNetworkInterfaceName:(id)a;
 - (void) setShrinksStandaloneImagesToFit:(BOOL)a;
 - (void) setMediaPlaybackAllowsInline:(BOOL)a;
 - (void) setMediaPlaybackRequiresUserGesture:(BOOL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (void) setDefaultFontSize:(i)a;
 - (void) setDefaultFixedFontSize:(i)a;
 - (void) setUserStyleSheetEnabled:(BOOL)a;
 - (void) setJavaEnabled:(BOOL)a;
 - (void) setJavaScriptEnabled:(BOOL)a;
 - (void) setJavaScriptCanOpenWindowsAutomatically:(BOOL)a;
 - (void) setPlugInsEnabled:(BOOL)a;
 - (void) setAllowsAnimatedImages:(BOOL)a;
 - (void) setAllowsAnimatedImageLooping:(BOOL)a;
 - (void) setLoadsImagesAutomatically:(BOOL)a;
 - (void) setAutosaves:(BOOL)a;
 - (void) setUsesPageCache:(BOOL)a;
 - (void) setCacheModel:(Q)a;
 - (i) defaultFontSize;
 - (id) standardFontFamily;
 - (i) minimumFontSize;
 - (BOOL) usesPageCache;
 - (BOOL) arePlugInsEnabled;
 - (BOOL) backspaceKeyNavigationEnabled;
 - (BOOL) _alwaysRequestGeolocationPermission;
 - (void) _setDiskImageCacheSavedCacheDirectory:(id)a;
 - (id) _diskImageCacheSavedCacheDirectory;
 - (id) initWithIdentifier:(id)asendChangeNotification:(BOOL)b;
 - (BOOL) privateBrowsingEnabled;
 - (void) _updatePrivateBrowsingStateTo:(BOOL)a;
 - (void) _postPreferencesChangedNotification;
 - (void) _postCacheModelChangedNotification;
 - (id) _valueForKey:(id)a;
 - (id) _stringValueForKey:(id)a;
 - (i) _integerValueForKey:(id)a;
 - (I) _unsignedIntValueForKey:(id)a;
 - (f) _floatValueForKey:(id)a;
 - (BOOL) _boolValueForKey:(id)a;
 - (q) _longLongValueForKey:(id)a;
 - (Q) _unsignedLongLongValueForKey:(id)a;
 - (void) _setStringValue:(id)aforKey:(id)b;
 - (void) _setIntegerValue:(i)aforKey:(id)b;
 - (void) _setBoolValue:(BOOL)aforKey:(id)b;
 - (void) setAutomaticallyDetectsCacheModel:(BOOL)a;
 - (void) _setUnsignedIntValue:(I)aforKey:(id)b;
 - (void) _setFloatValue:(f)aforKey:(id)b;
 - (void) _setLongLongValue:(q)aforKey:(id)b;
 - (void) _setUnsignedLongLongValue:(Q)aforKey:(id)b;
 - (void) setStandardFontFamily:(id)a;
 - (id) fixedFontFamily;
 - (void) setFixedFontFamily:(id)a;
 - (id) serifFontFamily;
 - (void) setSerifFontFamily:(id)a;
 - (id) sansSerifFontFamily;
 - (void) setSansSerifFontFamily:(id)a;
 - (id) cursiveFontFamily;
 - (void) setCursiveFontFamily:(id)a;
 - (id) fantasyFontFamily;
 - (void) setFantasyFontFamily:(id)a;
 - (i) defaultFixedFontSize;
 - (void) setMinimumFontSize:(i)a;
 - (i) minimumLogicalFontSize;
 - (void) setMinimumLogicalFontSize:(i)a;
 - (id) defaultTextEncodingName;
 - (void) setDefaultTextEncodingName:(id)a;
 - (BOOL) userStyleSheetEnabled;
 - (id) userStyleSheetLocation;
 - (void) setUserStyleSheetLocation:(id)a;
 - (BOOL) isJavaEnabled;
 - (BOOL) isJavaScriptEnabled;
 - (BOOL) javaScriptCanOpenWindowsAutomatically;
 - (BOOL) allowsAnimatedImages;
 - (BOOL) allowsAnimatedImageLooping;
 - (BOOL) loadsImagesAutomatically;
 - (BOOL) autosaves;
 - (void) setPrivateBrowsingEnabled:(BOOL)a;
 - (Q) cacheModel;
 - (BOOL) suppressesIncrementalRendering;
 - (void) setStorageBlockingPolicy:(i)a;
 - (BOOL) isDNSPrefetchingEnabled;
 - (void) setDNSPrefetchingEnabled:(BOOL)a;
 - (BOOL) developerExtrasEnabled;
 - (void) setJavaScriptExperimentsEnabled:(BOOL)a;
 - (BOOL) javaScriptExperimentsEnabled;
 - (void) setDeveloperExtrasEnabled:(BOOL)a;
 - (BOOL) authorAndUserStylesEnabled;
 - (void) setAuthorAndUserStylesEnabled:(BOOL)a;
 - (BOOL) applicationChromeModeEnabled;
 - (void) setApplicationChromeModeEnabled:(BOOL)a;
 - (BOOL) webArchiveDebugModeEnabled;
 - (void) setWebArchiveDebugModeEnabled:(BOOL)a;
 - (BOOL) localFileContentSniffingEnabled;
 - (void) setLocalFileContentSniffingEnabled:(BOOL)a;
 - (BOOL) offlineWebApplicationCacheEnabled;
 - (BOOL) zoomsTextOnly;
 - (void) setZoomsTextOnly:(BOOL)a;
 - (BOOL) javaScriptCanAccessClipboard;
 - (void) setJavaScriptCanAccessClipboard:(BOOL)a;
 - (BOOL) isXSSAuditorEnabled;
 - (void) setXSSAuditorEnabled:(BOOL)a;
 - (BOOL) shrinksStandaloneImagesToFit;
 - (BOOL) automaticallyDetectsCacheModel;
 - (BOOL) usesEncodingDetector;
 - (void) setUsesEncodingDetector:(BOOL)a;
 - (BOOL) isWebSecurityEnabled;
 - (void) setWebSecurityEnabled:(BOOL)a;
 - (BOOL) allowUniversalAccessFromFileURLs;
 - (void) setAllowUniversalAccessFromFileURLs:(BOOL)a;
 - (BOOL) allowFileAccessFromFileURLs;
 - (void) setAllowFileAccessFromFileURLs:(BOOL)a;
 - (d) _backForwardCacheExpirationInterval;
 - (BOOL) _standalone;
 - (void) _setStandalone:(BOOL)a;
 - (void) _setTelephoneNumberParsingEnabled:(BOOL)a;
 - (BOOL) _telephoneNumberParsingEnabled;
 - (f) _minimumZoomFontSize;
 - (void) _setLayoutInterval:(i)a;
 - (i) _layoutInterval;
 - (void) _setMaxParseDuration:(f)a;
 - (f) _maxParseDuration;
 - (void) _setPageCacheSize:(i)a;
 - (i) _pageCacheSize;
 - (void) _setObjectCacheSize:(i)a;
 - (i) _objectCacheSize;
 - (void) _setAlwaysUseBaselineOfPrimaryFont:(BOOL)a;
 - (BOOL) _alwaysUseBaselineOfPrimaryFont;
 - (BOOL) _allowMultiElementImplicitFormSubmission;
 - (void) _setAlwaysRequestGeolocationPermission:(BOOL)a;
 - (void) _setAlwaysUseAcceleratedOverflowScroll:(BOOL)a;
 - (BOOL) _alwaysUseAcceleratedOverflowScroll;
 - (void) _setInterpolationQuality:(i)a;
 - (i) _interpolationQuality;
 - (BOOL) _allowPasswordEcho;
 - (f) _passwordEchoDuration;
 - (q) applicationCacheTotalQuota;
 - (void) setApplicationCacheTotalQuota:(q)a;
 - (q) applicationCacheDefaultOriginQuota;
 - (void) setApplicationCacheDefaultOriginQuota:(q)a;
 - (i) editableLinkBehavior;
 - (void) setEditableLinkBehavior:(i)a;
 - (i) textDirectionSubmenuInclusionBehavior;
 - (void) setTextDirectionSubmenuInclusionBehavior:(i)a;
 - (BOOL) _useSiteSpecificSpoofing;
 - (void) _setUseSiteSpecificSpoofing:(BOOL)a;
 - (BOOL) databasesEnabled;
 - (BOOL) storageTrackerEnabled;
 - (void) setStorageTrackerEnabled:(BOOL)a;
 - (BOOL) localStorageEnabled;
 - (BOOL) experimentalNotificationsEnabled;
 - (void) setExperimentalNotificationsEnabled:(BOOL)a;
 - (void) _postPreferencesChangedAPINotification;
 - (BOOL) isDOMPasteAllowed;
 - (void) setDOMPasteAllowed:(BOOL)a;
 - (id) _localStorageDatabasePath;
 - (id) _ftpDirectoryTemplatePath;
 - (void) _setFTPDirectoryTemplatePath:(id)a;
 - (BOOL) _forceFTPDirectoryListings;
 - (void) _setForceFTPDirectoryListings:(BOOL)a;
 - (BOOL) acceleratedDrawingEnabled;
 - (void) setAcceleratedDrawingEnabled:(BOOL)a;
 - (BOOL) canvasUsesAcceleratedDrawing;
 - (void) setCanvasUsesAcceleratedDrawing:(BOOL)a;
 - (BOOL) acceleratedCompositingEnabled;
 - (void) setAcceleratedCompositingEnabled:(BOOL)a;
 - (BOOL) cssRegionsEnabled;
 - (void) setCSSRegionsEnabled:(BOOL)a;
 - (BOOL) cssCompositingEnabled;
 - (void) setCSSCompositingEnabled:(BOOL)a;
 - (BOOL) showDebugBorders;
 - (void) setShowDebugBorders:(BOOL)a;
 - (BOOL) showRepaintCounter;
 - (void) setShowRepaintCounter:(BOOL)a;
 - (BOOL) webAudioEnabled;
 - (void) setWebAudioEnabled:(BOOL)a;
 - (BOOL) subpixelCSSOMElementMetricsEnabled;
 - (void) setSubpixelCSSOMElementMetricsEnabled:(BOOL)a;
 - (BOOL) webGLEnabled;
 - (void) setWebGLEnabled:(BOOL)a;
 - (BOOL) multithreadedWebGLEnabled;
 - (void) setMultithreadedWebGLEnabled:(BOOL)a;
 - (BOOL) forceSoftwareWebGLRendering;
 - (void) setForceSoftwareWebGLRendering:(BOOL)a;
 - (BOOL) accelerated2dCanvasEnabled;
 - (void) setAccelerated2dCanvasEnabled:(BOOL)a;
 - (BOOL) diskImageCacheEnabled;
 - (I) diskImageCacheMinimumImageSize;
 - (void) setDiskImageCacheMinimumImageSize:(I)a;
 - (I) diskImageCacheMaximumCacheSize;
 - (void) setDiskImageCacheMaximumCacheSize:(I)a;
 - (BOOL) isFrameFlatteningEnabled;
 - (void) setFrameFlatteningEnabled:(BOOL)a;
 - (BOOL) isSpatialNavigationEnabled;
 - (void) setSpatialNavigationEnabled:(BOOL)a;
 - (BOOL) paginateDuringLayoutEnabled;
 - (void) setPaginateDuringLayoutEnabled:(BOOL)a;
 - (BOOL) hyperlinkAuditingEnabled;
 - (void) setHyperlinkAuditingEnabled:(BOOL)a;
 - (BOOL) usePreHTML5ParserQuirks;
 - (void) setUsePreHTML5ParserQuirks:(BOOL)a;
 - (void) didRemoveFromWebView;
 - (void) willAddToWebView;
 - (void) _setPreferenceForTestWithValue:(id)aforKey:(id)b;
 - (void) setFullScreenEnabled:(BOOL)a;
 - (BOOL) fullScreenEnabled;
 - (void) setAsynchronousSpellCheckingEnabled:(BOOL)a;
 - (BOOL) asynchronousSpellCheckingEnabled;
 - (void) setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)a;
 - (BOOL) loadsSiteIconsIgnoringImageLoadingPreference;
 - (void) setAVFoundationEnabled:(BOOL)a;
 - (BOOL) isAVFoundationEnabled;
 - (void) setQTKitEnabled:(BOOL)a;
 - (BOOL) isQTKitEnabled;
 - (void) setVideoPluginProxyEnabled:(BOOL)a;
 - (BOOL) isVideoPluginProxyEnabled;
 - (void) setHixie76WebSocketProtocolEnabled:(BOOL)a;
 - (BOOL) isHixie76WebSocketProtocolEnabled;
 - (BOOL) isInheritURIQueryComponentEnabled;
 - (void) setEnableInheritURIQueryComponent:(BOOL)a;
 - (BOOL) mediaPlaybackAllowsAirPlay;
 - (I) audioSessionCategoryOverride;
 - (BOOL) avKitEnabled;
 - (void) setAVKitEnabled:(BOOL)a;
 - (BOOL) networkDataUsageTrackingEnabled;
 - (void) setNetworkDataUsageTrackingEnabled:(BOOL)a;
 - (id) networkInterfaceName;
 - (BOOL) mediaPlaybackRequiresUserGesture;
 - (BOOL) mediaPlaybackAllowsInline;
 - (BOOL) mockScrollbarsEnabled;
 - (void) setMockScrollbarsEnabled:(BOOL)a;
 - (id) pictographFontFamily;
 - (void) setPictographFontFamily:(id)a;
 - (BOOL) pageCacheSupportsPlugins;
 - (void) setPageCacheSupportsPlugins:(BOOL)a;
 - (void) _invalidateCachedPreferences;
 - (void) _synchronizeWebStoragePolicyWithCookiePolicy;
 - (void) setBackspaceKeyNavigationEnabled:(BOOL)a;
 - (void) setWantsBalancedSetDefersLoadingBehavior:(BOOL)a;
 - (BOOL) wantsBalancedSetDefersLoadingBehavior;
 - (void) setShouldDisplaySubtitles:(BOOL)a;
 - (BOOL) shouldDisplaySubtitles;
 - (void) setShouldDisplayCaptions:(BOOL)a;
 - (BOOL) shouldDisplayCaptions;
 - (void) setShouldDisplayTextDescriptions:(BOOL)a;
 - (BOOL) shouldDisplayTextDescriptions;
 - (void) setNotificationsEnabled:(BOOL)a;
 - (BOOL) notificationsEnabled;
 - (void) setShouldRespectImageOrientation:(BOOL)a;
 - (BOOL) shouldRespectImageOrientation;
 - (BOOL) requestAnimationFrameEnabled;
 - (void) setRequestAnimationFrameEnabled:(BOOL)a;
 - (void) setIncrementalRenderingSuppressionTimeoutInSeconds:(d)a;
 - (d) incrementalRenderingSuppressionTimeoutInSeconds;
 - (BOOL) diagnosticLoggingEnabled;
 - (void) setDiagnosticLoggingEnabled:(BOOL)a;
 - (BOOL) screenFontSubstitutionEnabled;
 - (void) setScreenFontSubstitutionEnabled:(BOOL)a;
 - (i) storageBlockingPolicy;
 - (BOOL) plugInSnapshottingEnabled;
 - (void) setPlugInSnapshottingEnabled:(BOOL)a;
 - (BOOL) hiddenPageDOMTimerThrottlingEnabled;
 - (void) setHiddenPageDOMTimerThrottlingEnabled:(BOOL)a;
 - (BOOL) hiddenPageCSSAnimationSuspensionEnabled;
 - (void) setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)a;
 - (BOOL) lowPowerVideoAudioBufferSizeEnabled;
 - (void) setLowPowerVideoAudioBufferSizeEnabled:(BOOL)a;
 - (BOOL) useLegacyTextAlignPositionedElementBehavior;
 - (void) setUseLegacyTextAlignPositionedElementBehavior:(BOOL)a;
 - (BOOL) mediaSourceEnabled;
 - (void) setMediaSourceEnabled:(BOOL)a;
 - (BOOL) imageControlsEnabled;
 - (void) setImageControlsEnabled:(BOOL)a;
 - (BOOL) gamepadsEnabled;
 - (void) setGamepadsEnabled:(BOOL)a;
 - (BOOL) shouldConvertPositionStyleOnCopy;
 - (void) setShouldConvertPositionStyleOnCopy:(BOOL)a;


@end
