
@interface _NSPlaceholderCharacterSet : NSCharacterSet {

    @"NSCharacterSet" _original;
    @"NSCharacterSet" _invertedSet;
    {?="_inverted"b1"_builtin"b1"_isCF"b1"_reserved"b29} _flags;
}

 - (id) replacementObjectForCoder:(id)a;
 - (BOOL) characterIsMember:(S)a;
 - (id) initWithSet:(id)aoptions:(Q)b;
 - (BOOL) isSupersetOfSet:(id)a;
 - (void) _expandInverted;
 - (id) replacementObjectForKeyedArchiver:(id)a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) isEmpty;
 - (id) invertedSet;
 - (BOOL) longCharacterIsMember:(I)a;
 - (BOOL) hasMemberInPlane:(C)a;
 - (^{__CFCharacterSet=}) _expandedCFCharacterSet;
 - (BOOL) isEqual:(id)a;
 - (id) bitmapRepresentation;


@end
