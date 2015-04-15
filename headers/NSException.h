
@protocol NSCopying, NSCoding;
@interface NSException : NSObject <NSCopying, NSCoding> {

    @"NSString" name;
    @"NSString" reason;
    @"NSDictionary" userInfo;
    id reserved;
}
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSString* reason;
@property (atomic, copy, readonly) NSDictionary* userInfo;
@property (atomic, copy, readonly) NSArray* callStackReturnAddresses;
@property (atomic, copy, readonly) NSArray* callStackSymbols;
 + (void) raise:(id)aformat:(id)barguments:([1{__va_list_tag=II^v^v}])c;
 + (void) raise:(id)aformat:(id)b;
 + (id) exceptionWithName:(id)areason:(id)buserInfo:(id)c;

 - (id) replacementObjectForPortCoder:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) raise;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (id) name;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithName:(id)areason:(id)buserInfo:(id)c;
 - (id) reason;
 - (id) callStackReturnAddresses;
 - (id) callStackSymbols;
 - (BOOL) _installStackTraceKeyIfNeeded;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
