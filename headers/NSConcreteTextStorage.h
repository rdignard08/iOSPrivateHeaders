
@interface NSConcreteTextStorage : NSTextStorage {

    @"NSConcreteNotifyingMutableAttributedString" _contents;
    {_opaque_pthread_rwlock_t="__sig"q"__opaque"[192c]} _lock;
    {?="_forceFixAttributes"b1"_needLock"b1"_lockInitialized"b1"_inFixingAttributes"b1"_reserved"b28} _pFlags;
}
 + (Q) _writerCountTSDKey;

 - (Class) classForCoder;
 - (id) initWithString:(id)aattributes:(id)b;
 - (id) initWithAttributedString:(id)a;
 - (void) dealloc;
 - (id) string;
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(Q)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(Q)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) removeAttribute:(id)arange:({_NSRange=QQ})b;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;
 - (BOOL) _lockForReading;
 - (void) _unlock;
 - (void) _setForceFixAttributes:(BOOL)a;
 - (BOOL) _attributeFixingInProgress;
 - (void) _setAttributeFixingInProgress:(BOOL)a;
 - (BOOL) _lockForWritingWithExceptionHandler:(BOOL)a;
 - (BOOL) fixesAttributesLazily;
 - (BOOL) _forceFixAttributes;
 - (void) _initLocks;


@end
