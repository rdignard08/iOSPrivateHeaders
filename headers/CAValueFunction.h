
@protocol NSCoding;
@interface CAValueFunction : NSObject <NSCoding> {

    @"NSString" _string;
    ^v _impl;
}
@property (atomic, assign, readonly) NSString* name;
 + (id) functionWithName:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (void) CAMLParserEndElement:(id)acontent:(id)b;

 - (void) dealloc;
 - (id) name;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) encodeWithCAMLWriter:(id)a;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (Q) inputCount;
 - (Q) outputCount;
 - (BOOL) apply:(r^d)aresult:(^d)bparameterFunction:(^?)ccontext:(^v)d;
 - (id) _initWithName:(i)a;
 - (BOOL) apply:(r^d)aresult:(^d)b;


@end
