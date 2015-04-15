
@protocol NSCoding;
@interface UIRuntimeConnection : NSObject <NSCoding> {

    id source;
    id destination;
    @"NSString" label;
}

 - (void) dealloc;
 - (void) setLabel:(id)a;
 - (void) connectForSimulator;
 - (id) source;
 - (void) setDestination:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) destination;
 - (void) connect;
 - (void) setSource:(id)a;
 - (id) label;


@end
