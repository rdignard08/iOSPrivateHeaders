
@protocol NSCopying;
@interface NSBlock : NSObject <NSCopying> {

}
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) copy;
 - (void) invoke;
 - (void) performAfterDelay:(d)a;


@end
