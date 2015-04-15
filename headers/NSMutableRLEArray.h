
@interface NSMutableRLEArray : NSRLEArray {

}

 - (void) insertObject:(id)arange:({_NSRange=QQ})b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObject:(id)blength:(Q)c;
 - (void) deleteObjectsInRange:({_NSRange=QQ})a;
 - (void) _setBlockCapacity:(Q)a;
 - (id) copyWithZone:(^{_NSZone=})a;


@end
