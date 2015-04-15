
@interface NSCFCharacterSet : NSMutableCharacterSet {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForArchiver;
 - (BOOL) characterIsMember:(S)a;
 - (BOOL) isSupersetOfSet:(id)a;
 - (Class) classForKeyedArchiver;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (id) invertedSet;
 - (BOOL) longCharacterIsMember:(I)a;
 - (BOOL) hasMemberInPlane:(C)a;
 - (void) addCharactersInRange:({_NSRange=QQ})a;
 - (void) removeCharactersInRange:({_NSRange=QQ})a;
 - (void) addCharactersInString:(id)a;
 - (void) removeCharactersInString:(id)a;
 - (void) formUnionWithCharacterSet:(id)a;
 - (void) formIntersectionWithCharacterSet:(id)a;
 - (void) invert;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) bitmapRepresentation;
 - (void) makeCharacterSetCompact;
 - (void) makeCharacterSetFast;
 - (void) encodeWithCoder:(id)a;


@end
