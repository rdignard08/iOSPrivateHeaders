
@interface NSPropertyListSerialization : NSObject {

    [6^v] reserved;
}
 + (id) MCSafePropertyListWithData:(id)aoptions:(unsigned long long)bformat:(^Q)cerror:(o^@)d;
 + (id) dataFromPropertyList:(id)aformat:(unsigned long long)berrorDescription:(o^@)c;
 + (id) propertyListFromData:(id)amutabilityOption:(unsigned long long)bformat:(^Q)cerrorDescription:(o^@)d;
 + (long long) writePropertyList:(id)atoStream:(id)bformat:(unsigned long long)coptions:(unsigned long long)derror:(o^@)e;
 + (id) propertyListWithStream:(id)aoptions:(unsigned long long)bformat:(^Q)cerror:(o^@)d;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) propertyListWithData:(id)aoptions:(unsigned long long)bformat:(^Q)cerror:(o^@)d;
 + (id) dataWithPropertyList:(id)aformat:(unsigned long long)boptions:(unsigned long long)cerror:(o^@)d;
 + (BOOL) propertyList:(id)aisValidForFormat:(unsigned long long)b;

 - (id) init;


@end
