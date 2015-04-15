
@interface NSFileAccessIntent : NSObject {

    @"NSURL" _url;
    BOOL _isRead;
    long long _options;
}
@property (atomic, copy, readwrite) NSURL* URL;
@property (atomic, assign, readonly) NSNumber* isRead;
@property (atomic, assign, readonly) NSNumber* readingOptions;
@property (atomic, assign, readonly) NSNumber* writingOptions;
 + (id) writingIntentWithURL:(id)aoptions:(unsigned long long)b;
 + (id) readingIntentWithURL:(id)aoptions:(unsigned long long)b;

 - (BOOL) isRead;
 - (unsigned long long) writingOptions;
 - (unsigned long long) readingOptions;
 - (id) description;
 - (void) dealloc;
 - (id) URL;
 - (void) setURL:(id)a;


@end
