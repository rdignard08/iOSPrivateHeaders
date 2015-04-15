
@protocol BSXPCCoding;
@interface BKSProcessAssertionEvent : NSObject <BSXPCCoding> {

    @"NSString" _identifier;
}
@property (nonatomic, copy, readwrite) NSString* identifier;

 - (id) description;
 - (void) dealloc;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
