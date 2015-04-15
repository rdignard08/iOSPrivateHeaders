
@protocol NSCopying, NSCoding;
@interface NSPort : NSObject <NSCopying, NSCoding> {

}
@property (atomic, assign, readonly, isValid) NSNumber* valid;
@property (atomic, assign, readonly) NSNumber* reservedSpaceLength;
 + (id) portWithMachPort:(I)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) port;

 - (Class) classForCoder;
 - (id) replacementObjectForCoder:(id)a;
 - (id) initWithMachPort:(I)a;
 - (BOOL) sendBeforeDate:(id)acomponents:(id)bfrom:(id)creserved:(Q)d;
 - (Q) reservedSpaceLength;
 - (Class) classForPortCoder;
 - (BOOL) sendBeforeDate:(id)amsgid:(Q)bcomponents:(id)cfrom:(id)dreserved:(Q)e;
 - (void) addConnection:(id)atoRunLoop:(id)bforMode:(id)c;
 - (void) removeConnection:(id)afromRunLoop:(id)bforMode:(id)c;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) invalidate;
 - (I) machPort;
 - (BOOL) isValid;
 - (void) setDelegate:(id)a;
 - (void) scheduleInRunLoop:(id)aforMode:(id)b;
 - (void) removeFromRunLoop:(id)aforMode:(id)b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;


@end
