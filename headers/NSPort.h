
@protocol NSCopying, NSCoding;
@interface NSPort : NSObject <NSCopying, NSCoding> {

}
@property (atomic, assign, readonly, getter=isValid) NSNumber* valid;
@property (atomic, assign, readonly) NSNumber* reservedSpaceLength;
 + (id) portWithMachPort:(unsigned int)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) port;

 - (Class) classForCoder;
 - (id) replacementObjectForCoder:(id)a ;
 - (id) initWithMachPort:(unsigned int)a ;
 - (BOOL) sendBeforeDate:(id)a components:(id)b from:(id)c reserved:(unsigned long long)d ;
 - (unsigned long long) reservedSpaceLength;
 - (Class) classForPortCoder;
 - (BOOL) sendBeforeDate:(id)a msgid:(unsigned long long)b components:(id)c from:(id)d reserved:(unsigned long long)e ;
 - (void) addConnection:(id)a toRunLoop:(id)b forMode:(id)c ;
 - (void) removeConnection:(id)a fromRunLoop:(id)b forMode:(id)c ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) invalidate;
 - (unsigned int) machPort;
 - (BOOL) isValid;
 - (void) setDelegate:(id)a ;
 - (void) scheduleInRunLoop:(id)a forMode:(id)b ;
 - (void) removeFromRunLoop:(id)a forMode:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;


@end
