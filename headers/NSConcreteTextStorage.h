
@interface NSConcreteTextStorage : NSTextStorage {

    NSConcreteNotifyingMutableAttributedString* _contents;
    {_opaque_pthread_rwlock_t="__sig"q"__opaque"[192c]} _lock;
    {?="_forceFixAttributes"b1"_needLock"b1"_lockInitialized"b1"_inFixingAttributes"b1"_reserved"b28} _pFlags;
}
 + (unsigned long long) _writerCountTSDKey;

 - (Class) classForCoder;
 - (id) initWithString:(id)a attributes:(id)b ;
 - (id) initWithAttributedString:(id)a ;
 - (void) dealloc;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) attributesAtIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttribute:(id)a value:(id)b range:({_NSRange=QQ})c ;
 - (void) removeAttribute:(id)a range:({_NSRange=QQ})b ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withAttributedString:(id)b ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;
 - (BOOL) _lockForReading;
 - (void) _unlock;
 - (void) _setForceFixAttributes:(BOOL)a ;
 - (BOOL) _attributeFixingInProgress;
 - (void) _setAttributeFixingInProgress:(BOOL)a ;
 - (BOOL) _lockForWritingWithExceptionHandler:(BOOL)a ;
 - (BOOL) fixesAttributesLazily;
 - (BOOL) _forceFixAttributes;
 - (void) _initLocks;


@end
