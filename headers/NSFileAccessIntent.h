
@interface NSFileAccessIntent : NSObject {

    @"NSURL" _url;
    BOOL _isRead;
    q _options;
}
@property (atomic, copy, readwrite) NSURL* URL;
@property (atomic, assign, readonly) NSNumber* isRead;
@property (atomic, assign, readonly) NSNumber* readingOptions;
@property (atomic, assign, readonly) NSNumber* writingOptions;
 + (id) writingIntentWithURL:(id)aoptions:(Q)b;
 + (id) readingIntentWithURL:(id)aoptions:(Q)b;

 - (BOOL) isRead;
 - (Q) writingOptions;
 - (Q) readingOptions;
 - (id) description;
 - (void) dealloc;
 - (id) URL;
 - (void) setURL:(id)a;


@end
