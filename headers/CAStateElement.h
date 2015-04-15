
@protocol NSCopying, NSCoding;
@interface CAStateElement : NSObject <NSCopying, NSCoding> {

    CALayer* _target;
    CAStateElement* _source;
}
@property (nonatomic, weak, readwrite) CALayer* target;
@property (nonatomic, retain, readwrite) CAStateElement* source;
@property (nonatomic, copy, readonly) NSString* keyPath;
 + (void) CAMLParserStartElement:(id)a;

 - (id) save;
 - (id) keyPath;
 - (id) target;
 - (BOOL) matches:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setTarget:(id)a ;
 - (id) source;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) foreachLayer:(@?)a ;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (void) setSource:(id)a ;
 - (void) apply:(id)a ;
 - (id) targetName;


@end
