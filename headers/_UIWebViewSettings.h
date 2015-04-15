
@protocol NSCopying;
@interface _UIWebViewSettings : NSObject <NSCopying> {

    BOOL _allowsInlineMediaPlayback;
    BOOL _mediaPlaybackRequiresUserAction;
    BOOL _mediaPlaybackAllowsAirPlay;
    BOOL _suppressesIncrementalRendering;
    unsigned long long _dataDetectorTypes;
    @"NSString" _customUserAgent;
}
@property (nonatomic, assign, readwrite) NSNumber* dataDetectorTypes;
@property (nonatomic, assign, readwrite) NSNumber* allowsInlineMediaPlayback;
@property (nonatomic, assign, readwrite) NSNumber* mediaPlaybackRequiresUserAction;
@property (nonatomic, assign, readwrite) NSNumber* mediaPlaybackAllowsAirPlay;
@property (nonatomic, assign, readwrite) NSNumber* suppressesIncrementalRendering;
@property (nonatomic, copy, readwrite) NSString* customUserAgent;
 + (id) defaultSettings;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setDataDetectorTypes:(unsigned long long)a;
 - (unsigned long long) dataDetectorTypes;
 - (void) setCustomUserAgent:(id)a;
 - (void) setMediaPlaybackAllowsAirPlay:(BOOL)a;
 - (void) setSuppressesIncrementalRendering:(BOOL)a;
 - (void) setAllowsInlineMediaPlayback:(BOOL)a;
 - (BOOL) allowsInlineMediaPlayback;
 - (void) setMediaPlaybackRequiresUserAction:(BOOL)a;
 - (BOOL) mediaPlaybackRequiresUserAction;
 - (id) customUserAgent;
 - (id) _initWithDictionary:(id)a;
 - (id) _encodeAsDictionary;
 - (id) init;
 - (BOOL) suppressesIncrementalRendering;
 - (BOOL) mediaPlaybackAllowsAirPlay;


@end
