
@interface NSMutableRLEArray : NSRLEArray {

}

 - (void) insertObject:(id)arange:({_NSRange=QQ})b;
 - (void) replaceObjectsInRange:({_NSRange=QQ})awithObject:(id)blength:(unsigned long long)c;
 - (void) deleteObjectsInRange:({_NSRange=QQ})a;
 - (void) _setBlockCapacity:(unsigned long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;


@end
