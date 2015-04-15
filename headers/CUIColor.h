
@protocol NSCopying;
@interface CUIColor : NSObject <NSCopying> {

    ^{CGColor=} _cgColor;
}
@property (nonatomic, assign, readonly) NSNumber* CGColor;
 + (id) colorWithCIColor:(id)a;
 + (id) colorWithCGColor:(^{CGColor=})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (^{CGColor=}) CGColor;
 - (id) initWithCIColor:(id)a;
 - (id) colorUsingCGColorSpace:(^{CGColorSpace=})a;
 - (id) initWithCGColor:(^{CGColor=})a;


@end
