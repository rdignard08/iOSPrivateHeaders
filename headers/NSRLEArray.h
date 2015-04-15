
@protocol NSCopying, NSMutableCopying;
@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {

    ^{_NSRefCountedRunArray=^vQQIIII[0{_NSRunArrayItem=Q@}]} theList;
}

 - (id) objectAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) objectAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})brunIndex:(^Q)c;
 - (id) objectAtRunIndex:(Q)alength:(^Q)b;
 - (id) initWithRefCountedRunArray:(^{_NSRefCountedRunArray=^vQQIIII[0{_NSRunArrayItem=Q@}]})a;
 - (void) _makeNewListFrom:(^{_NSRefCountedRunArray=^vQQIIII[0{_NSRunArrayItem=Q@}]})a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (id) init;


@end
