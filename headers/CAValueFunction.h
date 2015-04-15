
@protocol NSCoding;
@interface CAValueFunction : NSObject <NSCoding> {

    NSString* _string;
    ^v _impl;
}
@property (atomic, assign, readonly) NSString* name;
 + (id) functionWithName:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (void) CAMLParserEndElement:(id)acontent:(id)b;

 - (void) dealloc;
 - (id) name;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (unsigned long long) inputCount;
 - (unsigned long long) outputCount;
 - (BOOL) apply:(r^d)a result:(^d)b parameterFunction:(^?)c context:(^v)d ;
 - (id) _initWithName:(int)a ;
 - (BOOL) apply:(r^d)a result:(^d)b ;


@end
