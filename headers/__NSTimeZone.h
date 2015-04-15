
@interface __NSTimeZone : NSTimeZone {

    ^{__CFString=} _name;
    ^{__CFData=} _data;
    ^^v _ucal;
    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} _lock;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(^{__CFString=})adata:(^{__CFData=})b;
 + (id) __new:(^{__CFString=})acache:(BOOL)b;

 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (id) name;
 - (d) daylightSavingTimeOffsetForDate:(id)a;
 - (q) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) localizedName:(q)alocale:(id)b;


@end
