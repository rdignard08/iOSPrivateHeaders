
@interface _NSStringProxyForContext : NSString {

    NSString* _string;
    NSFormatter* _formatter;
    <NSCopying><NSSecureCoding><NSObject>* _item;
}

 - (void) setItem:(id)a;
 - (void) _retainFormatter:(id)a;
 - (id) formatter;
 - (id) item;
 - (void) setFormatter:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) string;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (void) setString:(id)a;
 - (id) _dynamicContextEvaluation:(id)apatternString:(id)b;
 - (unsigned long long) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
