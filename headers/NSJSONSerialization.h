
@interface NSJSONSerialization : NSObject {

    [6^v] reserved;
}
 + (id) JSONObjectWithData:(id)aoptions:(unsigned long long)berror:(^@)c;
 + (id) dataWithJSONObject:(id)aoptions:(unsigned long long)berror:(^@)c;
 + (BOOL) isValidJSONObject:(id)a;
 + (long long) writeJSONObject:(id)atoStream:(id)boptions:(unsigned long long)cerror:(^@)d;
 + (id) JSONObjectWithStream:(id)aoptions:(unsigned long long)berror:(^@)c;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) init;


@end
