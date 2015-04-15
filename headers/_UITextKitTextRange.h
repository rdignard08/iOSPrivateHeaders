
@protocol NSCopying;
@interface _UITextKitTextRange : UITextRange <NSCopying> {

    _UITextKitTextPosition* _start;
    _UITextKitTextPosition* _end;
}
 + (id) rangeWithRange:({_NSRange=QQ})a;
 + (id) rangeWithStart:(id)aend:(id)b;
 + (id) rangeWithRange:({_NSRange=QQ})aaffinity:(long long)b;
 + (id) defaultRange;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (BOOL) isEqual:(id)a ;
 - ({_NSRange=QQ}) asRange;
 - (id) end;
 - (long long) affinity;
 - (void) setStart:(id)a ;
 - (void) setEnd:(id)a ;
 - (id) init;
 - (id) start;


@end
