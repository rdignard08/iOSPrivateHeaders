
@interface __NSCFCharacterSet : NSMutableCharacterSet {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (BOOL) characterIsMember:(unsigned short)a ;
 - (BOOL) isSupersetOfSet:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) invertedSet;
 - (BOOL) longCharacterIsMember:(unsigned int)a ;
 - (BOOL) hasMemberInPlane:(unsigned char)a ;
 - (void) addCharactersInRange:({_NSRange=QQ})a ;
 - (void) removeCharactersInRange:({_NSRange=QQ})a ;
 - (void) addCharactersInString:(id)a ;
 - (void) removeCharactersInString:(id)a ;
 - (void) formUnionWithCharacterSet:(id)a ;
 - (void) formIntersectionWithCharacterSet:(id)a ;
 - (void) invert;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) bitmapRepresentation;
 - (void) makeCharacterSetCompact;
 - (void) makeCharacterSetFast;
 - (void) encodeWithCoder:(id)a ;


@end
