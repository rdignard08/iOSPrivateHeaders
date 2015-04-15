
@protocol NSSecureCoding;
@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {

    ^v _internal;
}
 + (BOOL) supportsSecureCoding;

 - (id) _endpoint;
 - (id) _initWithConnection:(id)a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) _setEndpoint:(id)a ;


@end
