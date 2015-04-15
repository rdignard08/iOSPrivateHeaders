
@interface NSMutableRLEArray : NSRLEArray {

}

 - (void) insertObject:(id)a range:({_NSRange=QQ})b ;
 - (void) replaceObjectsInRange:({_NSRange=QQ})a withObject:(id)b length:(unsigned long long)c ;
 - (void) deleteObjectsInRange:({_NSRange=QQ})a ;
 - (void) _setBlockCapacity:(unsigned long long)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;


@end
