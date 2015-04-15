
@protocol NSCopying, NSCoding;
@interface CAStateTransition : NSObject <NSCopying, NSCoding> {

    @"NSString" _fromState;
    @"NSString" _toState;
    @"NSArray" _elements;
}
@property (nonatomic, copy, readwrite) NSString* fromState;
@property (nonatomic, copy, readwrite) NSString* toState;
@property (nonatomic, copy, readwrite) NSArray* elements;
 + (void) CAMLParserStartElement:(id)a;

 - (double) duration;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) fromState;
 - (id) toState;
 - (void) setElements:(id)a;
 - (id) elements;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) setFromState:(id)a;
 - (void) setToState:(id)a;


@end
