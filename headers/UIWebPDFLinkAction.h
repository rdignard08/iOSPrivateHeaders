
@interface UIWebPDFLinkAction : NSObject {

    i type;
    @"NSString" title;
    @? handler;
}
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, assign, readwrite) NSNumber* type;
@property (nonatomic, copy, readwrite) NSNumber* handler;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setType:(i)a;
 - (i) type;
 - (@?) handler;
 - (void) setHandler:(@?)a;


@end
