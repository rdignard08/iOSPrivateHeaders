
@protocol NSCopying;
@interface NSFont : UIFont <NSCopying> {

}
 + (id) fontWithName:(id)asize:(double)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) initWithCoder:(id)a;


@end
