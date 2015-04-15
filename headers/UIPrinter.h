
@interface UIPrinter : NSObject {

    id _printerInfo;
    NSURL URL;
}
@property (atomic, copy, readonly) NSURL* URL;
@property (atomic, copy, readonly) NSString* displayName;
@property (atomic, copy, readonly) NSString* displayLocation;
@property (atomic, assign, readonly) NSNumber* supportedJobTypes;
@property (atomic, copy, readonly) NSString* makeAndModel;
@property (atomic, assign, readonly) NSNumber* supportsColor;
@property (atomic, assign, readonly) NSNumber* supportsDuplex;
 + (id) printerWithURL:(id)a;

 - (id) displayName;
 - (id) _initWithPrinter:(id)a;
 - (id) _internalPrinter;
 - (id) _initWithURL:(id)a;
 - (id) makeAndModel;
 - (id) displayLocation;
 - (long long) supportedJobTypes;
 - (BOOL) supportsColor;
 - (BOOL) supportsDuplex;
 - (void) contactPrinter:(@?)a;
 - (id) init;
 - (id) URL;


@end
