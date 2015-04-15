
@interface NSPropertyListSerialization : NSObject {

    [6^v] reserved;
}
 + (id) MCSafePropertyListWithData:(id)aoptions:(Q)bformat:(^Q)cerror:(o^@)d;
 + (id) dataFromPropertyList:(id)aformat:(Q)berrorDescription:(o^@)c;
 + (id) propertyListFromData:(id)amutabilityOption:(Q)bformat:(^Q)cerrorDescription:(o^@)d;
 + (q) writePropertyList:(id)atoStream:(id)bformat:(Q)coptions:(Q)derror:(o^@)e;
 + (id) propertyListWithStream:(id)aoptions:(Q)bformat:(^Q)cerror:(o^@)d;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) propertyListWithData:(id)aoptions:(Q)bformat:(^Q)cerror:(o^@)d;
 + (id) dataWithPropertyList:(id)aformat:(Q)boptions:(Q)cerror:(o^@)d;
 + (BOOL) propertyList:(id)aisValidForFormat:(Q)b;

 - (id) init;


@end
