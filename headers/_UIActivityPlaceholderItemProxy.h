
@protocol NSCopying;
@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {

    id _placeholderItem;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) initWithPlaceholderItem:(id)a;
 - (Class) class;
 - (BOOL) isProxy;
 - (Class) superclass;


@end
